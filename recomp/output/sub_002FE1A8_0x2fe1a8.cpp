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

// Function: sub_002FE1A8
// Address: 0x2fe1a8 - 0x2fe248
void sub_002FE1A8_0x2fe1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE1A8_0x2fe1a8");
#endif

    switch (ctx->pc) {
        case 0x2fe1dcu: goto label_2fe1dc;
        case 0x2fe228u: goto label_2fe228;
        case 0x2fe230u: goto label_2fe230;
        default: break;
    }

    ctx->pc = 0x2fe1a8u;

    // 0x2fe1a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fe1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fe1ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fe1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fe1b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe1b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe1b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fe1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fe1bc: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x2fe1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x2fe1c0: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x2fe1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2fe1c4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2fe1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2fe1c8: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FE1C8u;
    {
        const bool branch_taken_0x2fe1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe1c8) {
            ctx->pc = 0x2FE1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE1C8u;
            // 0x2fe1cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE234u;
            goto label_2fe234;
        }
    }
    ctx->pc = 0x2FE1D0u;
    // 0x2fe1d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2fe1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2fe1d4: 0xc079848  jal         func_1E6120
    ctx->pc = 0x2FE1D4u;
    SET_GPR_U32(ctx, 31, 0x2FE1DCu);
    ctx->pc = 0x2FE1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE1D4u;
    // 0x2fe1d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x2FE1D4u, 0x2FE1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE1DCu;
label_2fe1dc:
    // 0x2fe1dc: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x2fe1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe1e0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2fe1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2fe1e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fe1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe1e8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x2fe1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x2fe1ec: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2fe1ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2fe1f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fe1f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe1f4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2fe1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2fe1f8: 0x8e2205a0  lw          $v0, 0x5A0($s1)
    ctx->pc = 0x2fe1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x2fe1fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE1FCu;
    {
        const bool branch_taken_0x2fe1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE1FCu;
        // 0x2fe200: 0x46011082  mul.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe1fc) {
            ctx->pc = 0x2FE214u;
            goto label_2fe214;
        }
    }
    ctx->pc = 0x2FE204u;
    // 0x2fe204: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2fe204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2fe208: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2fe208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fe20c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE20Cu;
    {
        const bool branch_taken_0x2fe20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE20Cu;
        // 0x2fe210: 0xe4600040  swc1        $f0, 0x40($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe20c) {
            ctx->pc = 0x2FE220u;
            goto label_2fe220;
        }
    }
    ctx->pc = 0x2FE214u;
label_2fe214:
    // 0x2fe214: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2fe214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2fe218: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2fe218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fe21c: 0xe4620040  swc1        $f2, 0x40($v1)
    ctx->pc = 0x2fe21cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
label_2fe220:
    // 0x2fe220: 0xc076dd0  jal         func_1DB740
    ctx->pc = 0x2FE220u;
    SET_GPR_U32(ctx, 31, 0x2FE228u);
    ctx->pc = 0x2FE224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE220u;
    // 0x2fe224: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB740u, 0x2FE220u, 0x2FE228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE228u;
label_2fe228:
    // 0x2fe228: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2FE228u;
    SET_GPR_U32(ctx, 31, 0x2FE230u);
    ctx->pc = 0x2FE22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE228u;
    // 0x2fe22c: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2FE228u, 0x2FE230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE230u;
label_2fe230:
    // 0x2fe230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fe234:
    // 0x2fe234: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fe234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fe238: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fe238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe23c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE23Cu;
        // 0x2fe240: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE244u;
    // 0x2fe244: 0x0  nop
    ctx->pc = 0x2fe244u;
    // NOP
    ctx->pc = 0x2fe248u;
}
