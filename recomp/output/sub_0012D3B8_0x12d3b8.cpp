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

// Function: sub_0012D3B8
// Address: 0x12d3b8 - 0x12d428
void sub_0012D3B8_0x12d3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D3B8_0x12d3b8");
#endif

    switch (ctx->pc) {
        case 0x12d3ecu: goto label_12d3ec;
        case 0x12d40cu: goto label_12d40c;
        default: break;
    }

    ctx->pc = 0x12d3b8u;

    // 0x12d3b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12d3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12d3bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d3c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d3c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12d3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12d3c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12d3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12d3cc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12d3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12d3d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12d3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12d3d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12d3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12d3d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3dc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12d3dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12d3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12d3e4: 0xc041e6c  jal         func_1079B0
    ctx->pc = 0x12D3E4u;
    SET_GPR_U32(ctx, 31, 0x12D3ECu);
    ctx->pc = 0x12D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D3E4u;
    // 0x12d3e8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1079B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1079B0u, 0x12D3E4u, 0x12D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3ECu;
label_12d3ec:
    // 0x12d3ec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x12d3f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12d3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12d3f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3f8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x12d3f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3fc: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x12d3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12d400: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x12d400u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d404: 0xc04c602  jal         func_131808
    ctx->pc = 0x12D404u;
    SET_GPR_U32(ctx, 31, 0x12D40Cu);
    ctx->pc = 0x12D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D404u;
    // 0x12d408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131808u, 0x12D404u, 0x12D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D40Cu;
label_12d40c:
    // 0x12d40c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12d410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d414: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12d414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d418: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12d418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d41c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12d41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d420: 0x3e00008  jr          $ra
    ctx->pc = 0x12D420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D420u;
        // 0x12d424: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D428u;
}
