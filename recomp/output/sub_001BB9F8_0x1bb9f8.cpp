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

// Function: sub_001BB9F8
// Address: 0x1bb9f8 - 0x1bbaf8
void sub_001BB9F8_0x1bb9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB9F8_0x1bb9f8");
#endif

    switch (ctx->pc) {
        case 0x1bba4cu: goto label_1bba4c;
        case 0x1bba78u: goto label_1bba78;
        case 0x1bbaacu: goto label_1bbaac;
        default: break;
    }

    ctx->pc = 0x1bb9f8u;

    // 0x1bb9f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb9fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bba00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bba00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bba04: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1bba04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1bba08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bba08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bba0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bba10: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BBA10u;
    {
        const bool branch_taken_0x1bba10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA10u;
        // 0x1bba14: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba10) {
            ctx->pc = 0x1BBA6Cu;
            goto label_1bba6c;
        }
    }
    ctx->pc = 0x1BBA18u;
    // 0x1bba18: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1bba18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bba1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBA1Cu;
    {
        const bool branch_taken_0x1bba1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bba1c) {
            ctx->pc = 0x1BBA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBA1Cu;
            // 0x1bba20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBA34u;
            goto label_1bba34;
        }
    }
    ctx->pc = 0x1BBA24u;
    // 0x1bba24: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBA24u;
    {
        const bool branch_taken_0x1bba24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA24u;
        // 0x1bba28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba24) {
            ctx->pc = 0x1BBA44u;
            goto label_1bba44;
        }
    }
    ctx->pc = 0x1BBA2Cu;
    // 0x1bba2c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1BBA2Cu;
    {
        const bool branch_taken_0x1bba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA2Cu;
        // 0x1bba30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba2c) {
            ctx->pc = 0x1BBAE8u;
            goto label_1bbae8;
        }
    }
    ctx->pc = 0x1BBA34u;
label_1bba34:
    // 0x1bba34: 0x10a2001b  beq         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BBA34u;
    {
        const bool branch_taken_0x1bba34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BBA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA34u;
        // 0x1bba38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba34) {
            ctx->pc = 0x1BBAA4u;
            goto label_1bbaa4;
        }
    }
    ctx->pc = 0x1BBA3Cu;
    // 0x1bba3c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1BBA3Cu;
    {
        const bool branch_taken_0x1bba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA3Cu;
        // 0x1bba40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba3c) {
            ctx->pc = 0x1BBAE8u;
            goto label_1bbae8;
        }
    }
    ctx->pc = 0x1BBA44u;
label_1bba44:
    // 0x1bba44: 0xc06ee70  jal         func_1BB9C0
    ctx->pc = 0x1BBA44u;
    SET_GPR_U32(ctx, 31, 0x1BBA4Cu);
    ctx->pc = 0x1BBA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBA44u;
    // 0x1bba48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x1BBA44u, 0x1BBA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA4Cu;
label_1bba4c:
    // 0x1bba4c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bba4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bba50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bba50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bba54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bba54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bba58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bba58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bba5c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1bba5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1bba60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bba60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bba64: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1BBA64u;
    {
        const bool branch_taken_0x1bba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA64u;
        // 0x1bba68: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba64) {
            ctx->pc = 0x1BBACCu;
            goto label_1bbacc;
        }
    }
    ctx->pc = 0x1BBA6Cu;
label_1bba6c:
    // 0x1bba6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bba6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bba70: 0xc06ee70  jal         func_1BB9C0
    ctx->pc = 0x1BBA70u;
    SET_GPR_U32(ctx, 31, 0x1BBA78u);
    ctx->pc = 0x1BBA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBA70u;
    // 0x1bba74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x1BBA70u, 0x1BBA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA78u;
label_1bba78:
    // 0x1bba78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bba78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bba7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bba7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bba80: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bba80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bba84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bba84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bba88: 0x4600a080  add.s       $f2, $f20, $f0
    ctx->pc = 0x1bba88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1bba8c: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x1bba8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1bba90: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1bba90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1bba94: 0xe602004c  swc1        $f2, 0x4C($s0)
    ctx->pc = 0x1bba94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1bba98: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x1bba98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1bba9c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BBA9Cu;
    {
        const bool branch_taken_0x1bba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA9Cu;
        // 0x1bbaa0: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba9c) {
            ctx->pc = 0x1BBAE4u;
            goto label_1bbae4;
        }
    }
    ctx->pc = 0x1BBAA4u;
label_1bbaa4:
    // 0x1bbaa4: 0xc06ee70  jal         func_1BB9C0
    ctx->pc = 0x1BBAA4u;
    SET_GPR_U32(ctx, 31, 0x1BBAACu);
    ctx->pc = 0x1BBAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBAA4u;
    // 0x1bbaa8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x1BBAA4u, 0x1BBAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBAACu;
label_1bbaac:
    // 0x1bbaac: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1bbaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1bbab0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bbab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bbab4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bbab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbab8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bbab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bbabc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bbabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bbac0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1bbac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1bbac4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bbac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bbac8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bbac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bbacc:
    // 0x1bbacc: 0x0  nop
    ctx->pc = 0x1bbaccu;
    // NOP
    // 0x1bbad0: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x1bbad0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1bbad4: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x1bbad4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1bbad8: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x1bbad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1bbadc: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x1bbadcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1bbae0: 0xe6020058  swc1        $f2, 0x58($s0)
    ctx->pc = 0x1bbae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_1bbae4:
    // 0x1bbae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bbae8:
    // 0x1bbae8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bbae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbaec: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1bbaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bbaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAF0u;
        // 0x1bbaf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBAF8u;
}
