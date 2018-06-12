Public Class Form1
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'TODO: 이 코드는 데이터를 '학생정보DataSet.테이블1' 테이블에 로드합니다. 필요 시 이 코드를 이동하거나 제거할 수 있습니다.
        Me.테이블1TableAdapter.Fill(Me._학생정보_ndbDataSet.테이블1)
        'TODO: 이 코드는 데이터를 '학생정보DataSet.테이블1' 테이블에 로드합니다. 필요 시 이 코드를 이동하거나 제거할 수 있습니다.
        Me.테이블1TableAdapter.Fill(Me._학생정보_ndbDataSet.테이블1)

    End Sub

    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim rowcount As Integer
        rowcount = Me.BindingContext(테이블1BindingSource).Count
        If rowcount > 0 Then
            Me.테이블1BindingSource.Position = 0
        End If
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Dim rowcount As Integer
        rowcount = Me.BindingContext(테이블1BindingSource).Count
        If rowcount > 0 Then
            Me.테이블1BindingSource.Position = Me.테이블1BindingSource.Position - 1
        End If
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Dim rowcount As Integer
        rowcount = Me.BindingContext(테이블1BindingSource).Count
        If rowcount > Me.테이블1BindingSource.Position Then
            Me.테이블1BindingSource.Position = Me.테이블1BindingSource.Position + 1
        End If
    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Dim rowcount As Integer
        rowcount = Me.BindingContext(테이블1BindingSource).Count
        If rowcount > 0 Then
            Me.테이블1BindingSource.Position = rowcount - 1
        End If
    End Sub
End Class
