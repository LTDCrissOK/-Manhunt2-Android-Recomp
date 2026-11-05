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

// Function: sub_001102A8
// Address: 0x1102a8 - 0x110320
void sub_001102A8_0x1102a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001102A8_0x1102a8");
#endif

    switch (ctx->pc) {
        case 0x1102dcu: goto label_1102dc;
        case 0x1102ecu: goto label_1102ec;
        case 0x110308u: goto label_110308;
        default: break;
    }

    ctx->pc = 0x1102a8u;

    // 0x1102a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1102a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1102ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1102acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1102b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1102b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1102b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1102b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1102b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1102bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1102bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1102c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1102c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1102c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102c8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1102c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1102cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1102ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102d0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1102d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1102d4: 0xc04ad6e  jal         func_12B5B8
    ctx->pc = 0x1102D4u;
    SET_GPR_U32(ctx, 31, 0x1102DCu);
    ctx->pc = 0x1102D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102D4u;
    // 0x1102d8: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B5B8u, 0x1102D4u, 0x1102DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102DCu;
label_1102dc:
    // 0x1102dc: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1102dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1102e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1102e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102e4: 0xc05dd24  jal         func_177490
    ctx->pc = 0x1102E4u;
    SET_GPR_U32(ctx, 31, 0x1102ECu);
    ctx->pc = 0x1102E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102E4u;
    // 0x1102e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177490u, 0x1102E4u, 0x1102ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102ECu;
label_1102ec:
    // 0x1102ec: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1102ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1102f0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1102f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1102f4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1102f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1102f8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1102f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1102fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1102fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x110300: 0xc04390a  jal         func_10E428
    ctx->pc = 0x110300u;
    SET_GPR_U32(ctx, 31, 0x110308u);
    ctx->pc = 0x110304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110300u;
    // 0x110304: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E428u, 0x110300u, 0x110308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110308u;
label_110308:
    // 0x110308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11030c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11030cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x110310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x110310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110314: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x110314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x110318: 0x3e00008  jr          $ra
    ctx->pc = 0x110318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110318u;
        // 0x11031c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110320u;
}
