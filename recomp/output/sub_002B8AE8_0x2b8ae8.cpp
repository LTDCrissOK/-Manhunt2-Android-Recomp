#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B8AE8
// Address: 0x2b8ae8 - 0x2b8cc8
void sub_002B8AE8_0x2b8ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8AE8_0x2b8ae8");
#endif

    switch (ctx->pc) {
        case 0x2b8b08u: goto label_2b8b08;
        case 0x2b8b1cu: goto label_2b8b1c;
        case 0x2b8b24u: goto label_2b8b24;
        case 0x2b8b78u: goto label_2b8b78;
        case 0x2b8b80u: goto label_2b8b80;
        case 0x2b8b88u: goto label_2b8b88;
        case 0x2b8c24u: goto label_2b8c24;
        case 0x2b8c34u: goto label_2b8c34;
        case 0x2b8c44u: goto label_2b8c44;
        case 0x2b8c54u: goto label_2b8c54;
        case 0x2b8c64u: goto label_2b8c64;
        case 0x2b8c74u: goto label_2b8c74;
        case 0x2b8c88u: goto label_2b8c88;
        case 0x2b8c98u: goto label_2b8c98;
        case 0x2b8ca8u: goto label_2b8ca8;
        case 0x2b8cc0u: goto label_2b8cc0;
        default: break;
    }

    ctx->pc = 0x2b8ae8u;

    // 0x2b8ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8af0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b8af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b8af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b8af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b8af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b8afc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b8afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8b00: 0xc0ade78  jal         func_2B79E0
    ctx->pc = 0x2B8B00u;
    SET_GPR_U32(ctx, 31, 0x2B8B08u);
    ctx->pc = 0x2B8B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B00u;
    // 0x2b8b04: 0xae11590c  sw          $s1, 0x590C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79E0u, 0x2B8B00u, 0x2B8B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B08u;
label_2b8b08:
    // 0x2b8b08: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B8B08u;
    {
        const bool branch_taken_0x2b8b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B08u;
        // 0x2b8b0c: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b08) {
            ctx->pc = 0x2B8B3Cu;
            goto label_2b8b3c;
        }
    }
    ctx->pc = 0x2B8B10u;
    // 0x2b8b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8b14: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B8B14u;
    SET_GPR_U32(ctx, 31, 0x2B8B1Cu);
    ctx->pc = 0x2B8B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B14u;
    // 0x2b8b18: 0xac40a320  sw          $zero, -0x5CE0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943520), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B8B14u, 0x2B8B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B1Cu;
label_2b8b1c:
    // 0x2b8b1c: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B8B1Cu;
    SET_GPR_U32(ctx, 31, 0x2B8B24u);
    ctx->pc = 0x2B8B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B1Cu;
    // 0x2b8b20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B8B1Cu, 0x2B8B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B24u;
label_2b8b24:
    // 0x2b8b24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8b28: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2b8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b8b2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b8b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b8b30: 0xae0358f8  sw          $v1, 0x58F8($s0)
    ctx->pc = 0x2b8b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22776), GPR_U32(ctx, 3));
    // 0x2b8b34: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2B8B34u;
    {
        const bool branch_taken_0x2b8b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B34u;
        // 0x2b8b38: 0xae11591c  sw          $s1, 0x591C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 22812), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b34) {
            ctx->pc = 0x2B8B94u;
            goto label_2b8b94;
        }
    }
    ctx->pc = 0x2B8B3Cu;
label_2b8b3c:
    // 0x2b8b3c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2b8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2b8b40: 0x8c432b38  lw          $v1, 0x2B38($v0)
    ctx->pc = 0x2b8b40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B38u));
    // 0x2b8b44: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8B44u;
    {
        const bool branch_taken_0x2b8b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B44u;
        // 0x2b8b48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b44) {
            ctx->pc = 0x2B8B54u;
            goto label_2b8b54;
        }
    }
    ctx->pc = 0x2B8B4Cu;
    // 0x2b8b4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B8B4Cu;
    {
        const bool branch_taken_0x2b8b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B4Cu;
        // 0x2b8b50: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b4c) {
            ctx->pc = 0x2B8B90u;
            goto label_2b8b90;
        }
    }
    ctx->pc = 0x2B8B54u;
label_2b8b54:
    // 0x2b8b54: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8B54u;
    {
        const bool branch_taken_0x2b8b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b8b54) {
            ctx->pc = 0x2B8B68u;
            goto label_2b8b68;
        }
    }
    ctx->pc = 0x2B8B5Cu;
    // 0x2b8b5c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b8b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b8b60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B8B60u;
    {
        const bool branch_taken_0x2b8b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B60u;
        // 0x2b8b64: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b60) {
            ctx->pc = 0x2B8B90u;
            goto label_2b8b90;
        }
    }
    ctx->pc = 0x2B8B68u;
label_2b8b68:
    // 0x2b8b68: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B8B68u;
    {
        const bool branch_taken_0x2b8b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B68u;
        // 0x2b8b6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b68) {
            ctx->pc = 0x2B8B94u;
            goto label_2b8b94;
        }
    }
    ctx->pc = 0x2B8B70u;
    // 0x2b8b70: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B8B70u;
    SET_GPR_U32(ctx, 31, 0x2B8B78u);
    ctx->pc = 0x2B8B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B70u;
    // 0x2b8b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B8B70u, 0x2B8B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B78u;
label_2b8b78:
    // 0x2b8b78: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B8B78u;
    SET_GPR_U32(ctx, 31, 0x2B8B80u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B8B78u, 0x2B8B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B80u;
label_2b8b80:
    // 0x2b8b80: 0xc0a7142  jal         func_29C508
    ctx->pc = 0x2B8B80u;
    SET_GPR_U32(ctx, 31, 0x2B8B88u);
    ctx->pc = 0x2B8B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B80u;
    // 0x2b8b84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C508u, 0x2B8B80u, 0x2B8B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B88u;
label_2b8b88:
    // 0x2b8b88: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x2b8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2b8b8c: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x2b8b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_2b8b90:
    // 0x2b8b90: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b8b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2b8b94:
    // 0x2b8b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8b98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b8b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8b9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b8b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BA0u;
        // 0x2b8ba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8BA8u;
    // 0x2b8ba8: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x2b8ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x2b8bac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8bacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8bb0: 0x8c6205a0  lw          $v0, 0x5A0($v1)
    ctx->pc = 0x2b8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5205A0u));
    // 0x2b8bb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b8bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8bb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8BB8u;
    {
        const bool branch_taken_0x2b8bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BB8u;
        // 0x2b8bbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bb8) {
            ctx->pc = 0x2B8BCCu;
            goto label_2b8bcc;
        }
    }
    ctx->pc = 0x2B8BC0u;
    // 0x2b8bc0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2b8bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2b8bc4: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2B8BC4u;
    {
        const bool branch_taken_0x2b8bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BC4u;
        // 0x2b8bc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bc4) {
            ctx->pc = 0x2B8CCCu;
            return;
        }
    }
    ctx->pc = 0x2B8BCCu;
label_2b8bcc:
    // 0x2b8bcc: 0x8ca3591c  lw          $v1, 0x591C($a1)
    ctx->pc = 0x2b8bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22812)));
    // 0x2b8bd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8bd4: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8BD4u;
    {
        const bool branch_taken_0x2b8bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b8bd4) {
            ctx->pc = 0x2B8BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8BD4u;
            // 0x2b8bd8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8BF8u;
            goto label_2b8bf8;
        }
    }
    ctx->pc = 0x2B8BDCu;
    // 0x2b8bdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8be0: 0x8ca35908  lw          $v1, 0x5908($a1)
    ctx->pc = 0x2b8be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22792)));
    // 0x2b8be4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b8be4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2b8be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8bec: 0xaca358f4  sw          $v1, 0x58F4($a1)
    ctx->pc = 0x2b8becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22772), GPR_U32(ctx, 3));
    // 0x2b8bf0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2B8BF0u;
    {
        const bool branch_taken_0x2b8bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BF0u;
        // 0x2b8bf4: 0xaca0591c  sw          $zero, 0x591C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 22812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bf0) {
            ctx->pc = 0x2B8CCCu;
            return;
        }
    }
    ctx->pc = 0x2B8BF8u;
label_2b8bf8:
    // 0x2b8bf8: 0x2c620031  sltiu       $v0, $v1, 0x31
    ctx->pc = 0x2b8bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x2b8bfc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2B8BFCu;
    {
        const bool branch_taken_0x2b8bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BFCu;
        // 0x2b8c00: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bfc) {
            ctx->pc = 0x2B8CC8u;
            return;
        }
    }
    ctx->pc = 0x2B8C04u;
    // 0x2b8c04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b8c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b8c08: 0x2442fdb0  addiu       $v0, $v0, -0x250
    ctx->pc = 0x2b8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966704));
    // 0x2b8c0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b8c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b8c10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b8c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8c14: 0x800008  jr          $a0
    ctx->pc = 0x2B8C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B8C1Cu: goto label_2b8c1c;
            case 0x2B8C2Cu: goto label_2b8c2c;
            case 0x2B8C3Cu: goto label_2b8c3c;
            case 0x2B8C4Cu: goto label_2b8c4c;
            case 0x2B8C5Cu: goto label_2b8c5c;
            case 0x2B8C6Cu: goto label_2b8c6c;
            case 0x2B8C7Cu: goto label_2b8c7c;
            case 0x2B8C90u: goto label_2b8c90;
            case 0x2B8CA0u: goto label_2b8ca0;
            case 0x2B8CB0u: goto label_2b8cb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8C14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B8C1Cu;
label_2b8c1c:
    // 0x2b8c1c: 0xc0ade92  jal         func_2B7A48
    ctx->pc = 0x2B8C1Cu;
    SET_GPR_U32(ctx, 31, 0x2B8C24u);
    ctx->pc = 0x2B8C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C1Cu;
    // 0x2b8c20: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7A48u, 0x2B8C1Cu, 0x2B8C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C24u;
label_2b8c24:
    // 0x2b8c24: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2B8C24u;
    {
        const bool branch_taken_0x2b8c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C24u;
        // 0x2b8c28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c24) {
            ctx->pc = 0x2B8CD0u;
            return;
        }
    }
    ctx->pc = 0x2B8C2Cu;
label_2b8c2c:
    // 0x2b8c2c: 0xc0ae022  jal         func_2B8088
    ctx->pc = 0x2B8C2Cu;
    SET_GPR_U32(ctx, 31, 0x2B8C34u);
    ctx->pc = 0x2B8C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C2Cu;
    // 0x2b8c30: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8088u, 0x2B8C2Cu, 0x2B8C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C34u;
label_2b8c34:
    // 0x2b8c34: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2B8C34u;
    {
        const bool branch_taken_0x2b8c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C34u;
        // 0x2b8c38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c34) {
            ctx->pc = 0x2B8CD0u;
            return;
        }
    }
    ctx->pc = 0x2B8C3Cu;
label_2b8c3c:
    // 0x2b8c3c: 0xc0adee2  jal         func_2B7B88
    ctx->pc = 0x2B8C3Cu;
    SET_GPR_U32(ctx, 31, 0x2B8C44u);
    ctx->pc = 0x2B8C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C3Cu;
    // 0x2b8c40: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7B88u, 0x2B8C3Cu, 0x2B8C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C44u;
label_2b8c44:
    // 0x2b8c44: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2B8C44u;
    {
        const bool branch_taken_0x2b8c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C44u;
        // 0x2b8c48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c44) {
            ctx->pc = 0x2B8CD0u;
            return;
        }
    }
    ctx->pc = 0x2B8C4Cu;
label_2b8c4c:
    // 0x2b8c4c: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2B8C4Cu;
    SET_GPR_U32(ctx, 31, 0x2B8C54u);
    ctx->pc = 0x2B8C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C4Cu;
    // 0x2b8c50: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DF8u, 0x2B8C4Cu, 0x2B8C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C54u;
label_2b8c54:
    // 0x2b8c54: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2B8C54u;
    {
        const bool branch_taken_0x2b8c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C54u;
        // 0x2b8c58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c54) {
            ctx->pc = 0x2B8CD0u;
            return;
        }
    }
    ctx->pc = 0x2B8C5Cu;
label_2b8c5c:
    // 0x2b8c5c: 0xc0adafc  jal         func_2B6BF0
    ctx->pc = 0x2B8C5Cu;
    SET_GPR_U32(ctx, 31, 0x2B8C64u);
    ctx->pc = 0x2B8C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C5Cu;
    // 0x2b8c60: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6BF0u, 0x2B8C5Cu, 0x2B8C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C64u;
label_2b8c64:
    // 0x2b8c64: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2B8C64u;
    {
        const bool branch_taken_0x2b8c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C64u;
        // 0x2b8c68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c64) {
            ctx->pc = 0x2B8CD0u;
            return;
        }
    }
    ctx->pc = 0x2B8C6Cu;
label_2b8c6c:
    // 0x2b8c6c: 0xc0adad8  jal         func_2B6B60
    ctx->pc = 0x2B8C6Cu;
    SET_GPR_U32(ctx, 31, 0x2B8C74u);
    ctx->pc = 0x2B8C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C6Cu;
    // 0x2b8c70: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6B60u, 0x2B8C6Cu, 0x2B8C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C74u;
label_2b8c74:
    // 0x2b8c74: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2B8C74u;
    {
        const bool branch_taken_0x2b8c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C74u;
        // 0x2b8c78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c74) {
            ctx->pc = 0x2B8CD0u;
            return;
        }
    }
    ctx->pc = 0x2B8C7Cu;
label_2b8c7c:
    // 0x2b8c7c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b8c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c80: 0xc0adb0a  jal         func_2B6C28
    ctx->pc = 0x2B8C80u;
    SET_GPR_U32(ctx, 31, 0x2B8C88u);
    ctx->pc = 0x2B8C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C80u;
    // 0x2b8c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6C28u, 0x2B8C80u, 0x2B8C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C88u;
label_2b8c88:
    // 0x2b8c88: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B8C88u;
    {
        const bool branch_taken_0x2b8c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C88u;
        // 0x2b8c8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c88) {
            ctx->pc = 0x2B8CD0u;
            return;
        }
    }
    ctx->pc = 0x2B8C90u;
label_2b8c90:
    // 0x2b8c90: 0xc0adab2  jal         func_2B6AC8
    ctx->pc = 0x2B8C90u;
    SET_GPR_U32(ctx, 31, 0x2B8C98u);
    ctx->pc = 0x2B8C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C90u;
    // 0x2b8c94: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6AC8u, 0x2B8C90u, 0x2B8C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C98u;
label_2b8c98:
    // 0x2b8c98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B8C98u;
    {
        const bool branch_taken_0x2b8c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C98u;
        // 0x2b8c9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c98) {
            ctx->pc = 0x2B8CD0u;
            return;
        }
    }
    ctx->pc = 0x2B8CA0u;
label_2b8ca0:
    // 0x2b8ca0: 0xc0ada68  jal         func_2B69A0
    ctx->pc = 0x2B8CA0u;
    SET_GPR_U32(ctx, 31, 0x2B8CA8u);
    ctx->pc = 0x2B8CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8CA0u;
    // 0x2b8ca4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B69A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B69A0u, 0x2B8CA0u, 0x2B8CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8CA8u;
label_2b8ca8:
    // 0x2b8ca8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B8CA8u;
    {
        const bool branch_taken_0x2b8ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CA8u;
        // 0x2b8cac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ca8) {
            ctx->pc = 0x2B8CD0u;
            return;
        }
    }
    ctx->pc = 0x2B8CB0u;
label_2b8cb0:
    // 0x2b8cb0: 0x8ca258f4  lw          $v0, 0x58F4($a1)
    ctx->pc = 0x2b8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22772)));
    // 0x2b8cb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b8cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8cb8: 0xc0ada26  jal         func_2B6898
    ctx->pc = 0x2B8CB8u;
    SET_GPR_U32(ctx, 31, 0x2B8CC0u);
    ctx->pc = 0x2B8CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8CB8u;
    // 0x2b8cbc: 0xaca25908  sw          $v0, 0x5908($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 22792), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6898u, 0x2B8CB8u, 0x2B8CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8CC0u;
label_2b8cc0:
    // 0x2b8cc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8CC0u;
    {
        const bool branch_taken_0x2b8cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CC0u;
        // 0x2b8cc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8cc0) {
            ctx->pc = 0x2B8CD0u;
            return;
        }
    }
    ctx->pc = 0x2B8CC8u;
}
