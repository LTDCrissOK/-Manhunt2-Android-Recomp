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

// Function: sub_00311EF8
// Address: 0x311ef8 - 0x311f88
void sub_00311EF8_0x311ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311EF8_0x311ef8");
#endif

    switch (ctx->pc) {
        case 0x311f24u: goto label_311f24;
        case 0x311f48u: goto label_311f48;
        default: break;
    }

    ctx->pc = 0x311ef8u;

    // 0x311ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x311ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x311efc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x311efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x311f00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x311f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x311f04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x311f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x311f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x311f0c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x311f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x311f10: 0x8c5001a4  lw          $s0, 0x1A4($v0)
    ctx->pc = 0x311f10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x311f14: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x311F14u;
    {
        const bool branch_taken_0x311f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x311f14) {
            ctx->pc = 0x311F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311F14u;
            // 0x311f18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311F74u;
            goto label_311f74;
        }
    }
    ctx->pc = 0x311F1Cu;
    // 0x311f1c: 0xc0b4b34  jal         func_2D2CD0
    ctx->pc = 0x311F1Cu;
    SET_GPR_U32(ctx, 31, 0x311F24u);
    ctx->pc = 0x311F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311F1Cu;
    // 0x311f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2CD0u, 0x311F1Cu, 0x311F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F24u;
label_311f24:
    // 0x311f24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x311f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x311f28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x311f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311f2c: 0x0  nop
    ctx->pc = 0x311f2cu;
    // NOP
    // 0x311f30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x311f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311f34: 0x0  nop
    ctx->pc = 0x311f34u;
    // NOP
    // 0x311f38: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x311F38u;
    {
        const bool branch_taken_0x311f38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311f38) {
            ctx->pc = 0x311F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311F38u;
            // 0x311f3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311F74u;
            goto label_311f74;
        }
    }
    ctx->pc = 0x311F40u;
    // 0x311f40: 0xc0b4b34  jal         func_2D2CD0
    ctx->pc = 0x311F40u;
    SET_GPR_U32(ctx, 31, 0x311F48u);
    ctx->pc = 0x311F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311F40u;
    // 0x311f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2CD0u, 0x311F40u, 0x311F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F48u;
label_311f48:
    // 0x311f48: 0x92230014  lbu         $v1, 0x14($s1)
    ctx->pc = 0x311f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x311f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311f50: 0xa2220009  sb          $v0, 0x9($s1)
    ctx->pc = 0x311f50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x311f54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x311f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311f58: 0x0  nop
    ctx->pc = 0x311f58u;
    // NOP
    // 0x311f5c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x311f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x311f60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x311f60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311f64: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x311f64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x311f68: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x311f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x311f6c: 0xa2220014  sb          $v0, 0x14($s1)
    ctx->pc = 0x311f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x311f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x311f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_311f74:
    // 0x311f74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x311f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x311f78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x311F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F7Cu;
        // 0x311f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311F84u;
    // 0x311f84: 0x0  nop
    ctx->pc = 0x311f84u;
    // NOP
    ctx->pc = 0x311f88u;
}
