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

// Function: sub_003023E0
// Address: 0x3023e0 - 0x302468
void sub_003023E0_0x3023e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003023E0_0x3023e0");
#endif

    switch (ctx->pc) {
        case 0x30245cu: goto label_30245c;
        default: break;
    }

    ctx->pc = 0x3023e0u;

    // 0x3023e0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3023e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3023e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3023e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3023e8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x3023e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x3023ec: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x3023ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x3023f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3023f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3023f4: 0x246e5870  addiu       $t6, $v1, 0x5870
    ctx->pc = 0x3023f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 22640));
    // 0x3023f8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3023f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3023fc: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3023fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302400: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x302400u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302404: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x302404u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302408: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x302408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30240c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30240Cu;
    {
        const bool branch_taken_0x30240c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x302410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30240Cu;
        // 0x302410: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30240c) {
            ctx->pc = 0x302428u;
            goto label_302428;
        }
    }
    ctx->pc = 0x302414u;
    // 0x302414: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x302414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x302418: 0x0  nop
    ctx->pc = 0x302418u;
    // NOP
    // 0x30241c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x30241cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x302420: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x302420u;
    {
        const bool branch_taken_0x302420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302420u;
        // 0x302424: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302420) {
            ctx->pc = 0x302448u;
            goto label_302448;
        }
    }
    ctx->pc = 0x302428u;
label_302428:
    // 0x302428: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x302428u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x30242c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30242cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x302430: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x302430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x302434: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x302434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x302438: 0x0  nop
    ctx->pc = 0x302438u;
    // NOP
    // 0x30243c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x30243cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x302440: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x302440u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x302444: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x302444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_302448:
    // 0x302448: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x302448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30244c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x30244cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302450: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x302450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302454: 0xc0b8d76  jal         func_2E35D8
    ctx->pc = 0x302454u;
    SET_GPR_U32(ctx, 31, 0x30245Cu);
    ctx->pc = 0x302458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302454u;
    // 0x302458: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E35D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E35D8u, 0x302454u, 0x30245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30245Cu;
label_30245c:
    // 0x30245c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30245cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302460: 0x3e00008  jr          $ra
    ctx->pc = 0x302460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302460u;
        // 0x302464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302468u;
}
