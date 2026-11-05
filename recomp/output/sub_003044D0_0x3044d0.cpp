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

// Function: sub_003044D0
// Address: 0x3044d0 - 0x304538
void sub_003044D0_0x3044d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003044D0_0x3044d0");
#endif

    switch (ctx->pc) {
        case 0x30451cu: goto label_30451c;
        case 0x30452cu: goto label_30452c;
        default: break;
    }

    ctx->pc = 0x3044d0u;

    // 0x3044d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3044d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3044d4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x3044d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x3044d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3044d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3044dc: 0x24425870  addiu       $v0, $v0, 0x5870
    ctx->pc = 0x3044dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x3044e0: 0x18800007  blez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3044E0u;
    {
        const bool branch_taken_0x3044e0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3044E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044E0u;
        // 0x3044e4: 0xac400458  sw          $zero, 0x458($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044e0) {
            ctx->pc = 0x304500u;
            goto label_304500;
        }
    }
    ctx->pc = 0x3044E8u;
    // 0x3044e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3044e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3044ec: 0x0  nop
    ctx->pc = 0x3044ecu;
    // NOP
    // 0x3044f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3044f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3044f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3044f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3044f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3044F8u;
    {
        const bool branch_taken_0x3044f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3044FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044F8u;
        // 0x3044fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044f8) {
            ctx->pc = 0x304514u;
            goto label_304514;
        }
    }
    ctx->pc = 0x304500u;
label_304500:
    // 0x304500: 0x4810008  bgez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x304500u;
    {
        const bool branch_taken_0x304500 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x304504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304500u;
        // 0x304504: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304500) {
            ctx->pc = 0x304524u;
            goto label_304524;
        }
    }
    ctx->pc = 0x304508u;
    // 0x304508: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x304508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x30450c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30450cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304514:
    // 0x304514: 0xc0b8f3e  jal         func_2E3CF8
    ctx->pc = 0x304514u;
    SET_GPR_U32(ctx, 31, 0x30451Cu);
    ctx->pc = 0x304518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304514u;
    // 0x304518: 0xe4400458  swc1        $f0, 0x458($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3CF8u, 0x304514u, 0x30451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30451Cu;
label_30451c:
    // 0x30451c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30451Cu;
    {
        const bool branch_taken_0x30451c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30451Cu;
        // 0x304520: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30451c) {
            ctx->pc = 0x304530u;
            goto label_304530;
        }
    }
    ctx->pc = 0x304524u;
label_304524:
    // 0x304524: 0xc0b8f3e  jal         func_2E3CF8
    ctx->pc = 0x304524u;
    SET_GPR_U32(ctx, 31, 0x30452Cu);
    ctx->pc = 0x304528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304524u;
    // 0x304528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3CF8u, 0x304524u, 0x30452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30452Cu;
label_30452c:
    // 0x30452c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30452cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304530:
    // 0x304530: 0x3e00008  jr          $ra
    ctx->pc = 0x304530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304530u;
        // 0x304534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304538u;
}
