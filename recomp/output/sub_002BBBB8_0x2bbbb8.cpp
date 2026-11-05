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

// Function: sub_002BBBB8
// Address: 0x2bbbb8 - 0x2bbcd8
void sub_002BBBB8_0x2bbbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBBB8_0x2bbbb8");
#endif

    switch (ctx->pc) {
        case 0x2bbc0cu: goto label_2bbc0c;
        case 0x2bbc28u: goto label_2bbc28;
        case 0x2bbc58u: goto label_2bbc58;
        case 0x2bbc6cu: goto label_2bbc6c;
        case 0x2bbc80u: goto label_2bbc80;
        case 0x2bbc8cu: goto label_2bbc8c;
        default: break;
    }

    ctx->pc = 0x2bbbb8u;

    // 0x2bbbb8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bbbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bbbbc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2bbbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2bbbc0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2bbbc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2bbbc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bbbc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbbc8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2bbbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2bbbcc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2bbbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2bbbd0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2bbbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2bbbd4: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2bbbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2bbbd8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2bbbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2bbbdc: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2bbbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2bbbe0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2bbbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2bbbe4: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2bbbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2bbbe8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2bbbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2bbbec: 0x8e540024  lw          $s4, 0x24($s2)
    ctx->pc = 0x2bbbecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2bbbf0: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBBF0u;
    {
        const bool branch_taken_0x2bbbf0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBF0u;
        // 0x2bbbf4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbbf0) {
            ctx->pc = 0x2BBC00u;
            goto label_2bbc00;
        }
    }
    ctx->pc = 0x2BBBF8u;
    // 0x2bbbf8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2BBBF8u;
    {
        const bool branch_taken_0x2bbbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBF8u;
        // 0x2bbbfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbbf8) {
            ctx->pc = 0x2BBCA4u;
            goto label_2bbca4;
        }
    }
    ctx->pc = 0x2BBC00u;
label_2bbc00:
    // 0x2bbc00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bbc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc04: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BBC04u;
    SET_GPR_U32(ctx, 31, 0x2BBC0Cu);
    ctx->pc = 0x2BBC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBC04u;
    // 0x2bbc08: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BBC04u, 0x2BBC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC0Cu;
label_2bbc0c:
    // 0x2bbc0c: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x2bbc0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2bbc10: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2BBC10u;
    {
        const bool branch_taken_0x2bbc10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC10u;
        // 0x2bbc14: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc10) {
            ctx->pc = 0x2BBCA0u;
            goto label_2bbca0;
        }
    }
    ctx->pc = 0x2BBC18u;
    // 0x2bbc18: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x2bbc18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bbc1c: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2bbc1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bbc20: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x2bbc20u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x2bbc24: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2bbc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2bbc28:
    // 0x2bbc28: 0x80620051  lb          $v0, 0x51($v1)
    ctx->pc = 0x2bbc28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 81)));
    // 0x2bbc2c: 0x505e0001  beql        $v0, $fp, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BBC2Cu;
    {
        const bool branch_taken_0x2bbc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x2bbc2c) {
            ctx->pc = 0x2BBC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBC2Cu;
            // 0x2bbc30: 0xa0770051  sb          $s7, 0x51($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 81), (uint8_t)GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBC34u;
            goto label_2bbc34;
        }
    }
    ctx->pc = 0x2BBC34u;
label_2bbc34:
    // 0x2bbc34: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2bbc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2bbc38: 0x80620050  lb          $v0, 0x50($v1)
    ctx->pc = 0x2bbc38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2bbc3c: 0x50560016  beql        $v0, $s6, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BBC3Cu;
    {
        const bool branch_taken_0x2bbc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x2bbc3c) {
            ctx->pc = 0x2BBC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBC3Cu;
            // 0x2bbc40: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBC98u;
            goto label_2bbc98;
        }
    }
    ctx->pc = 0x2BBC44u;
    // 0x2bbc44: 0x12630004  beq         $s3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBC44u;
    {
        const bool branch_taken_0x2bbc44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BBC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC44u;
        // 0x2bbc48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc44) {
            ctx->pc = 0x2BBC58u;
            goto label_2bbc58;
        }
    }
    ctx->pc = 0x2BBC4Cu;
    // 0x2bbc4c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2bbc4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc50: 0xc0b10a6  jal         func_2C4298
    ctx->pc = 0x2BBC50u;
    SET_GPR_U32(ctx, 31, 0x2BBC58u);
    ctx->pc = 0x2BBC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBC50u;
    // 0x2bbc54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4298u, 0x2BBC50u, 0x2BBC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC58u;
label_2bbc58:
    // 0x2bbc58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bbc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bbc5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bbc60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bbc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc64: 0xc0af28a  jal         func_2BCA28
    ctx->pc = 0x2BBC64u;
    SET_GPR_U32(ctx, 31, 0x2BBC6Cu);
    ctx->pc = 0x2BBC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBC64u;
    // 0x2bbc68: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCA28u, 0x2BBC64u, 0x2BBC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC6Cu;
label_2bbc6c:
    // 0x2bbc6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BBC6Cu;
    {
        const bool branch_taken_0x2bbc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC6Cu;
        // 0x2bbc70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc6c) {
            ctx->pc = 0x2BBC94u;
            goto label_2bbc94;
        }
    }
    ctx->pc = 0x2BBC74u;
    // 0x2bbc74: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x2bbc74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bbc78: 0xc0b05a4  jal         func_2C1690
    ctx->pc = 0x2BBC78u;
    SET_GPR_U32(ctx, 31, 0x2BBC80u);
    ctx->pc = 0x2BBC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBC78u;
    // 0x2bbc7c: 0x2644001c  addiu       $a0, $s2, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1690u, 0x2BBC78u, 0x2BBC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC80u;
label_2bbc80:
    // 0x2bbc80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bbc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc84: 0xc0b0b98  jal         func_2C2E60
    ctx->pc = 0x2BBC84u;
    SET_GPR_U32(ctx, 31, 0x2BBC8Cu);
    ctx->pc = 0x2BBC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBC84u;
    // 0x2bbc88: 0x26a44f20  addiu       $a0, $s5, 0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E60u, 0x2BBC84u, 0x2BBC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC8Cu;
label_2bbc8c:
    // 0x2bbc8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BBC8Cu;
    {
        const bool branch_taken_0x2bbc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC8Cu;
        // 0x2bbc90: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc8c) {
            ctx->pc = 0x2BBC98u;
            goto label_2bbc98;
        }
    }
    ctx->pc = 0x2BBC94u;
label_2bbc94:
    // 0x2bbc94: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x2bbc94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2bbc98:
    // 0x2bbc98: 0x5620ffe3  bnel        $s1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2BBC98u;
    {
        const bool branch_taken_0x2bbc98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbc98) {
            ctx->pc = 0x2BBC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBC98u;
            // 0x2bbc9c: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbc28;
        }
    }
    ctx->pc = 0x2BBCA0u;
label_2bbca0:
    // 0x2bbca0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2bbca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bbca4:
    // 0x2bbca4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2bbca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bbca8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2bbca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bbcac: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2bbcacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bbcb0: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2bbcb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2bbcb4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2bbcb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bbcb8: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2bbcb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2bbcbc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2bbcbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bbcc0: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2bbcc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2bbcc4: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2bbcc4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bbcc8: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2bbcc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2bbccc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2bbcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bbcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCD0u;
        // 0x2bbcd4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBCD8u;
}
