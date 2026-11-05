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

// Function: sub_0031D760
// Address: 0x31d760 - 0x31d818
void sub_0031D760_0x31d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D760_0x31d760");
#endif

    switch (ctx->pc) {
        case 0x31d78cu: goto label_31d78c;
        case 0x31d798u: goto label_31d798;
        case 0x31d7a0u: goto label_31d7a0;
        case 0x31d7b4u: goto label_31d7b4;
        case 0x31d7c0u: goto label_31d7c0;
        case 0x31d7ccu: goto label_31d7cc;
        case 0x31d7d4u: goto label_31d7d4;
        case 0x31d7e0u: goto label_31d7e0;
        case 0x31d7ecu: goto label_31d7ec;
        case 0x31d7fcu: goto label_31d7fc;
        default: break;
    }

    ctx->pc = 0x31d760u;

    // 0x31d760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31d760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31d764: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x31d764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x31d768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d76c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31d76cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d770: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x31d770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x31d774: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x31d774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x31d778: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x31d778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31d77c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x31d77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x31d780: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x31d780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x31d784: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x31D784u;
    SET_GPR_U32(ctx, 31, 0x31D78Cu);
    ctx->pc = 0x31D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D784u;
    // 0x31d788: 0x3c130047  lui         $s3, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x31D784u, 0x31D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D78Cu;
label_31d78c:
    // 0x31d78c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x31d78cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31d790: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31D790u;
    {
        const bool branch_taken_0x31d790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D790u;
        // 0x31d794: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d790) {
            ctx->pc = 0x31D7E0u;
            goto label_31d7e0;
        }
    }
    ctx->pc = 0x31D798u;
label_31d798:
    // 0x31d798: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31D798u;
    SET_GPR_U32(ctx, 31, 0x31D7A0u);
    ctx->pc = 0x31D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D798u;
    // 0x31d79c: 0x266544f8  addiu       $a1, $s3, 0x44F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 17656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31D798u, 0x31D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7A0u;
label_31d7a0:
    // 0x31d7a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31d7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31d7a4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x31D7A4u;
    {
        const bool branch_taken_0x31d7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7a4) {
            ctx->pc = 0x31D7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D7A4u;
            // 0x31d7a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D7E4u;
            goto label_31d7e4;
        }
    }
    ctx->pc = 0x31D7ACu;
    // 0x31d7ac: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x31D7ACu;
    SET_GPR_U32(ctx, 31, 0x31D7B4u);
    ctx->pc = 0x31D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D7ACu;
    // 0x31d7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x31D7ACu, 0x31D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7B4u;
label_31d7b4:
    // 0x31d7b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31d7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d7b8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x31D7B8u;
    SET_GPR_U32(ctx, 31, 0x31D7C0u);
    ctx->pc = 0x31D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D7B8u;
    // 0x31d7bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x31D7B8u, 0x31D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7C0u;
label_31d7c0:
    // 0x31d7c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31d7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d7c4: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x31D7C4u;
    SET_GPR_U32(ctx, 31, 0x31D7CCu);
    ctx->pc = 0x31D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D7C4u;
    // 0x31d7c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x31D7C4u, 0x31D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7CCu;
label_31d7cc:
    // 0x31d7cc: 0xc09e9f0  jal         func_27A7C0
    ctx->pc = 0x31D7CCu;
    SET_GPR_U32(ctx, 31, 0x31D7D4u);
    ctx->pc = 0x31D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D7CCu;
    // 0x31d7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A7C0u, 0x31D7CCu, 0x31D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7D4u;
label_31d7d4:
    // 0x31d7d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d7d8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31D7D8u;
    SET_GPR_U32(ctx, 31, 0x31D7E0u);
    ctx->pc = 0x31D7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D7D8u;
    // 0x31d7dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31D7D8u, 0x31D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7E0u;
label_31d7e0:
    // 0x31d7e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31d7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31d7e4:
    // 0x31d7e4: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x31D7E4u;
    SET_GPR_U32(ctx, 31, 0x31D7ECu);
    ctx->pc = 0x31D7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D7E4u;
    // 0x31d7e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x31D7E4u, 0x31D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7ECu;
label_31d7ec:
    // 0x31d7ec: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x31D7ECu;
    {
        const bool branch_taken_0x31d7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D7ECu;
        // 0x31d7f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d7ec) {
            ctx->pc = 0x31D798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d798;
        }
    }
    ctx->pc = 0x31D7F4u;
    // 0x31d7f4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31D7F4u;
    SET_GPR_U32(ctx, 31, 0x31D7FCu);
    ctx->pc = 0x31D7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D7F4u;
    // 0x31d7f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31D7F4u, 0x31D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D7FCu;
label_31d7fc:
    // 0x31d7fc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x31d7fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d800: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x31d800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31d804: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x31d804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d808: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x31d808u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31d80c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x31d80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31d810: 0x3e00008  jr          $ra
    ctx->pc = 0x31D810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D810u;
        // 0x31d814: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D818u;
}
