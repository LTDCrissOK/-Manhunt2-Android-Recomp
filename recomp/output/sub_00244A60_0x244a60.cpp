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

// Function: sub_00244A60
// Address: 0x244a60 - 0x244ba0
void sub_00244A60_0x244a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244A60_0x244a60");
#endif

    switch (ctx->pc) {
        case 0x244a80u: goto label_244a80;
        case 0x244abcu: goto label_244abc;
        case 0x244accu: goto label_244acc;
        case 0x244b00u: goto label_244b00;
        case 0x244b48u: goto label_244b48;
        case 0x244b58u: goto label_244b58;
        case 0x244b80u: goto label_244b80;
        default: break;
    }

    ctx->pc = 0x244a60u;

    // 0x244a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244a64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x244a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x244a68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x244a6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x244a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x244a70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x244a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x244a74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x244a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x244a78: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x244A78u;
    SET_GPR_U32(ctx, 31, 0x244A80u);
    ctx->pc = 0x244A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244A78u;
    // 0x244a7c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x244A78u, 0x244A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A80u;
label_244a80:
    // 0x244a80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x244a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244a84: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x244a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x244a88: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x244a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x244a8c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x244a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x244a90: 0x1464002f  bne         $v1, $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x244A90u;
    {
        const bool branch_taken_0x244a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x244a90) {
            ctx->pc = 0x244B50u;
            goto label_244b50;
        }
    }
    ctx->pc = 0x244A98u;
    // 0x244a98: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x244A98u;
    {
        const bool branch_taken_0x244a98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a98) {
            ctx->pc = 0x244B50u;
            goto label_244b50;
        }
    }
    ctx->pc = 0x244AA0u;
    // 0x244aa0: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x244aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x244aa4: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x244aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x244aa8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x244AA8u;
    {
        const bool branch_taken_0x244aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AA8u;
        // 0x244aac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244aa8) {
            ctx->pc = 0x244B50u;
            goto label_244b50;
        }
    }
    ctx->pc = 0x244AB0u;
    // 0x244ab0: 0x8e110274  lw          $s1, 0x274($s0)
    ctx->pc = 0x244ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x244ab4: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x244AB4u;
    SET_GPR_U32(ctx, 31, 0x244ABCu);
    ctx->pc = 0x244AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244AB4u;
    // 0x244ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x244AB4u, 0x244ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244ABCu;
label_244abc:
    // 0x244abc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x244ABCu;
    {
        const bool branch_taken_0x244abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244abc) {
            ctx->pc = 0x244AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244ABCu;
            // 0x244ac0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244AD8u;
            goto label_244ad8;
        }
    }
    ctx->pc = 0x244AC4u;
    // 0x244ac4: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x244AC4u;
    SET_GPR_U32(ctx, 31, 0x244ACCu);
    ctx->pc = 0x244AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244AC4u;
    // 0x244ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x244AC4u, 0x244ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244ACCu;
label_244acc:
    // 0x244acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244ad0: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x244AD0u;
    {
        const bool branch_taken_0x244ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x244ad0) {
            ctx->pc = 0x244AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244AD0u;
            // 0x244ad4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244AD8u;
            goto label_244ad8;
        }
    }
    ctx->pc = 0x244AD8u;
label_244ad8:
    // 0x244ad8: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x244AD8u;
    {
        const bool branch_taken_0x244ad8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ad8) {
            ctx->pc = 0x244B50u;
            goto label_244b50;
        }
    }
    ctx->pc = 0x244AE0u;
    // 0x244ae0: 0x8e460334  lw          $a2, 0x334($s2)
    ctx->pc = 0x244ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x244ae4: 0x8cc201e4  lw          $v0, 0x1E4($a2)
    ctx->pc = 0x244ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x244ae8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244AE8u;
    {
        const bool branch_taken_0x244ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AE8u;
        // 0x244aec: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ae8) {
            ctx->pc = 0x244AF8u;
            goto label_244af8;
        }
    }
    ctx->pc = 0x244AF0u;
    // 0x244af0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x244AF0u;
    {
        const bool branch_taken_0x244af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AF0u;
        // 0x244af4: 0x8c8400a0  lw          $a0, 0xA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244af0) {
            ctx->pc = 0x244B24u;
            goto label_244b24;
        }
    }
    ctx->pc = 0x244AF8u;
label_244af8:
    // 0x244af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x244af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244afc: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x244afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_244b00:
    // 0x244b00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x244b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244b04: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x244B04u;
    {
        const bool branch_taken_0x244b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244b04) {
            ctx->pc = 0x244B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244B04u;
            // 0x244b08: 0x8c8400a0  lw          $a0, 0xA0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244B24u;
            goto label_244b24;
        }
    }
    ctx->pc = 0x244B0Cu;
    // 0x244b0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x244b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x244b10: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x244b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x244b14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x244B14u;
    {
        const bool branch_taken_0x244b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B14u;
        // 0x244b18: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b14) {
            ctx->pc = 0x244B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244b00;
        }
    }
    ctx->pc = 0x244B1Cu;
    // 0x244b1c: 0x8cc201e8  lw          $v0, 0x1E8($a2)
    ctx->pc = 0x244b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
    // 0x244b20: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x244b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_244b24:
    // 0x244b24: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x244b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x244b28: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x244b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x244b2c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x244b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244b30: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x244b30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244b34: 0x0  nop
    ctx->pc = 0x244b34u;
    // NOP
    // 0x244b38: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x244B38u;
    {
        const bool branch_taken_0x244b38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B38u;
        // 0x244b3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b38) {
            ctx->pc = 0x244B84u;
            goto label_244b84;
        }
    }
    ctx->pc = 0x244B40u;
    // 0x244b40: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x244B40u;
    SET_GPR_U32(ctx, 31, 0x244B48u);
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x244B40u, 0x244B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B48u;
label_244b48:
    // 0x244b48: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x244B48u;
    {
        const bool branch_taken_0x244b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B48u;
        // 0x244b4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b48) {
            ctx->pc = 0x244B84u;
            goto label_244b84;
        }
    }
    ctx->pc = 0x244B50u;
label_244b50:
    // 0x244b50: 0xc08db00  jal         func_236C00
    ctx->pc = 0x244B50u;
    SET_GPR_U32(ctx, 31, 0x244B58u);
    ctx->pc = 0x244B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244B50u;
    // 0x244b54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C00u, 0x244B50u, 0x244B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B58u;
label_244b58:
    // 0x244b58: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x244B58u;
    {
        const bool branch_taken_0x244b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244b58) {
            ctx->pc = 0x244B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244B58u;
            // 0x244b5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244B84u;
            goto label_244b84;
        }
    }
    ctx->pc = 0x244B60u;
    // 0x244b60: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x244B60u;
    {
        const bool branch_taken_0x244b60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x244b60) {
            ctx->pc = 0x244B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244B60u;
            // 0x244b64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244B84u;
            goto label_244b84;
        }
    }
    ctx->pc = 0x244B68u;
    // 0x244b68: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x244b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x244b6c: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x244b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
    // 0x244b70: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x244B70u;
    {
        const bool branch_taken_0x244b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244b70) {
            ctx->pc = 0x244B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244B70u;
            // 0x244b74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244B84u;
            goto label_244b84;
        }
    }
    ctx->pc = 0x244B78u;
    // 0x244b78: 0xc098554  jal         func_261550
    ctx->pc = 0x244B78u;
    SET_GPR_U32(ctx, 31, 0x244B80u);
    ctx->pc = 0x244B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244B78u;
    // 0x244b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261550u, 0x244B78u, 0x244B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B80u;
label_244b80:
    // 0x244b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244b84:
    // 0x244b84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x244b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x244b88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x244b88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244b8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x244b8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244b90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x244b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244b94: 0x3e00008  jr          $ra
    ctx->pc = 0x244B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B94u;
        // 0x244b98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244B9Cu;
    // 0x244b9c: 0x0  nop
    ctx->pc = 0x244b9cu;
    // NOP
    ctx->pc = 0x244ba0u;
}
