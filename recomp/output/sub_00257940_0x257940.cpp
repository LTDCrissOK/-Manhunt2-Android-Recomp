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

// Function: sub_00257940
// Address: 0x257940 - 0x2579e8
void sub_00257940_0x257940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257940_0x257940");
#endif

    switch (ctx->pc) {
        case 0x25796cu: goto label_25796c;
        default: break;
    }

    ctx->pc = 0x257940u;

    // 0x257940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x257940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x257944: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x257944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x257948: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x257948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x25794c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25794cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x257950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x257950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x257954: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x257954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x257958: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x257958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x25795c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x25795cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x257960: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x257960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x257964: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x257964u;
    SET_GPR_U32(ctx, 31, 0x25796Cu);
    ctx->pc = 0x257968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257964u;
    // 0x257968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x257964u, 0x25796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25796Cu;
label_25796c:
    // 0x25796c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x25796cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x257970: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x257970u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x257974: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x257974u;
    {
        const bool branch_taken_0x257974 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x257978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257974u;
        // 0x257978: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257974) {
            ctx->pc = 0x257990u;
            goto label_257990;
        }
    }
    ctx->pc = 0x25797Cu;
    // 0x25797c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x25797cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x257980: 0x0  nop
    ctx->pc = 0x257980u;
    // NOP
    // 0x257984: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x257984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x257988: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x257988u;
    {
        const bool branch_taken_0x257988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257988) {
            ctx->pc = 0x2579ACu;
            goto label_2579ac;
        }
    }
    ctx->pc = 0x257990u;
label_257990:
    // 0x257990: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x257990u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x257994: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x257994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x257998: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x257998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25799c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x25799cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2579a0: 0x0  nop
    ctx->pc = 0x2579a0u;
    // NOP
    // 0x2579a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2579a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2579a8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2579a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2579ac:
    // 0x2579ac: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2579acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2579b0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2579b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2579b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2579b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2579b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2579b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2579bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2579bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2579c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2579c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2579c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2579c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2579c8: 0xa20210c4  sb          $v0, 0x10C4($s0)
    ctx->pc = 0x2579c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4292), (uint8_t)GPR_U32(ctx, 2));
    // 0x2579cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2579ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2579d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2579d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2579d4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2579d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2579d8: 0xe60010c0  swc1        $f0, 0x10C0($s0)
    ctx->pc = 0x2579d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4288), bits); }
    // 0x2579dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2579dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2579e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2579E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2579E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2579E0u;
        // 0x2579e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2579E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2579E8u;
}
