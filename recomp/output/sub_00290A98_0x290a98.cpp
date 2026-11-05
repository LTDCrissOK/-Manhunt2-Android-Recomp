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

// Function: sub_00290A98
// Address: 0x290a98 - 0x290b10
void sub_00290A98_0x290a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290A98_0x290a98");
#endif

    switch (ctx->pc) {
        case 0x290aacu: goto label_290aac;
        case 0x290ad0u: goto label_290ad0;
        case 0x290ad8u: goto label_290ad8;
        case 0x290ae0u: goto label_290ae0;
        case 0x290ae8u: goto label_290ae8;
        case 0x290af0u: goto label_290af0;
        default: break;
    }

    ctx->pc = 0x290a98u;

    // 0x290a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290a9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x290a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x290aa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x290aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x290aa4: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x290AA4u;
    SET_GPR_U32(ctx, 31, 0x290AACu);
    ctx->pc = 0x290AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290AA4u;
    // 0x290aa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x290AA4u, 0x290AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AACu;
label_290aac:
    // 0x290aac: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x290aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x290ab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290ab4: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x290ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x290ab8: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x290ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x290abc: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x290abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x290ac0: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x290ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
    // 0x290ac4: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x290ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x290ac8: 0xc0a5874  jal         func_2961D0
    ctx->pc = 0x290AC8u;
    SET_GPR_U32(ctx, 31, 0x290AD0u);
    ctx->pc = 0x290ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290AC8u;
    // 0x290acc: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961D0u, 0x290AC8u, 0x290AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AD0u;
label_290ad0:
    // 0x290ad0: 0xc0a5888  jal         func_296220
    ctx->pc = 0x290AD0u;
    SET_GPR_U32(ctx, 31, 0x290AD8u);
    ctx->pc = 0x290AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290AD0u;
    // 0x290ad4: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296220u, 0x290AD0u, 0x290AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AD8u;
label_290ad8:
    // 0x290ad8: 0xc0a58a6  jal         func_296298
    ctx->pc = 0x290AD8u;
    SET_GPR_U32(ctx, 31, 0x290AE0u);
    ctx->pc = 0x290ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290AD8u;
    // 0x290adc: 0xae0201d8  sw          $v0, 0x1D8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296298u, 0x290AD8u, 0x290AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AE0u;
label_290ae0:
    // 0x290ae0: 0xc0a58ba  jal         func_2962E8
    ctx->pc = 0x290AE0u;
    SET_GPR_U32(ctx, 31, 0x290AE8u);
    ctx->pc = 0x290AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290AE0u;
    // 0x290ae4: 0xae0201dc  sw          $v0, 0x1DC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962E8u, 0x290AE0u, 0x290AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AE8u;
label_290ae8:
    // 0x290ae8: 0xc0a58ce  jal         func_296338
    ctx->pc = 0x290AE8u;
    SET_GPR_U32(ctx, 31, 0x290AF0u);
    ctx->pc = 0x290AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290AE8u;
    // 0x290aec: 0xe60001e0  swc1        $f0, 0x1E0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 480), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296338u, 0x290AE8u, 0x290AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AF0u;
label_290af0:
    // 0x290af0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x290af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x290af4: 0xe60001e4  swc1        $f0, 0x1E4($s0)
    ctx->pc = 0x290af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 484), bits); }
    // 0x290af8: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x290af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x290afc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x290afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x290b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x290b04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x290b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290b08: 0x3e00008  jr          $ra
    ctx->pc = 0x290B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B08u;
        // 0x290b0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290B10u;
}
