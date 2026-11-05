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

// Function: sub_0016D930
// Address: 0x16d930 - 0x16da18
void sub_0016D930_0x16d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D930_0x16d930");
#endif

    switch (ctx->pc) {
        case 0x16d944u: goto label_16d944;
        case 0x16d954u: goto label_16d954;
        case 0x16d95cu: goto label_16d95c;
        case 0x16d96cu: goto label_16d96c;
        case 0x16d97cu: goto label_16d97c;
        case 0x16d984u: goto label_16d984;
        case 0x16d994u: goto label_16d994;
        case 0x16d9a4u: goto label_16d9a4;
        case 0x16d9b0u: goto label_16d9b0;
        case 0x16d9bcu: goto label_16d9bc;
        case 0x16d9ccu: goto label_16d9cc;
        case 0x16d9e4u: goto label_16d9e4;
        case 0x16d9f4u: goto label_16d9f4;
        case 0x16d9fcu: goto label_16d9fc;
        case 0x16da04u: goto label_16da04;
        default: break;
    }

    ctx->pc = 0x16d930u;

    // 0x16d930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d938: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16d938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16d93c: 0xc05ba26  jal         func_16E898
    ctx->pc = 0x16D93Cu;
    SET_GPR_U32(ctx, 31, 0x16D944u);
    ctx->pc = 0x16D940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D93Cu;
    // 0x16d940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E898u, 0x16D93Cu, 0x16D944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D944u;
label_16d944:
    // 0x16d944: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D944u;
    {
        const bool branch_taken_0x16d944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d944) {
            ctx->pc = 0x16D964u;
            goto label_16d964;
        }
    }
    ctx->pc = 0x16D94Cu;
    // 0x16d94c: 0xc05b9c6  jal         func_16E718
    ctx->pc = 0x16D94Cu;
    SET_GPR_U32(ctx, 31, 0x16D954u);
    ctx->pc = 0x16D950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D94Cu;
    // 0x16d950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E718u, 0x16D94Cu, 0x16D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D954u;
label_16d954:
    // 0x16d954: 0xc05b8b0  jal         func_16E2C0
    ctx->pc = 0x16D954u;
    SET_GPR_U32(ctx, 31, 0x16D95Cu);
    ctx->pc = 0x16D958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D954u;
    // 0x16d958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E2C0u, 0x16D954u, 0x16D95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D95Cu;
label_16d95c:
    // 0x16d95c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x16D95Cu;
    {
        const bool branch_taken_0x16d95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D95Cu;
        // 0x16d960: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d95c) {
            ctx->pc = 0x16DA08u;
            goto label_16da08;
        }
    }
    ctx->pc = 0x16D964u;
label_16d964:
    // 0x16d964: 0xc05bd66  jal         func_16F598
    ctx->pc = 0x16D964u;
    SET_GPR_U32(ctx, 31, 0x16D96Cu);
    ctx->pc = 0x16D968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D964u;
    // 0x16d968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F598u, 0x16D964u, 0x16D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D96Cu;
label_16d96c:
    // 0x16d96c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D96Cu;
    {
        const bool branch_taken_0x16d96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d96c) {
            ctx->pc = 0x16D98Cu;
            goto label_16d98c;
        }
    }
    ctx->pc = 0x16D974u;
    // 0x16d974: 0xc05b9c6  jal         func_16E718
    ctx->pc = 0x16D974u;
    SET_GPR_U32(ctx, 31, 0x16D97Cu);
    ctx->pc = 0x16D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D974u;
    // 0x16d978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E718u, 0x16D974u, 0x16D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D97Cu;
label_16d97c:
    // 0x16d97c: 0xc05b94a  jal         func_16E528
    ctx->pc = 0x16D97Cu;
    SET_GPR_U32(ctx, 31, 0x16D984u);
    ctx->pc = 0x16D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D97Cu;
    // 0x16d980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E528u, 0x16D97Cu, 0x16D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D984u;
label_16d984:
    // 0x16d984: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x16D984u;
    {
        const bool branch_taken_0x16d984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D984u;
        // 0x16d988: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d984) {
            ctx->pc = 0x16DA08u;
            goto label_16da08;
        }
    }
    ctx->pc = 0x16D98Cu;
label_16d98c:
    // 0x16d98c: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x16D98Cu;
    SET_GPR_U32(ctx, 31, 0x16D994u);
    ctx->pc = 0x16D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D98Cu;
    // 0x16d990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x16D98Cu, 0x16D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D994u;
label_16d994:
    // 0x16d994: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16D994u;
    {
        const bool branch_taken_0x16d994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d994) {
            ctx->pc = 0x16D9C4u;
            goto label_16d9c4;
        }
    }
    ctx->pc = 0x16D99Cu;
    // 0x16d99c: 0xc05b9c6  jal         func_16E718
    ctx->pc = 0x16D99Cu;
    SET_GPR_U32(ctx, 31, 0x16D9A4u);
    ctx->pc = 0x16D9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D99Cu;
    // 0x16d9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E718u, 0x16D99Cu, 0x16D9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9A4u;
label_16d9a4:
    // 0x16d9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d9a8: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x16D9A8u;
    SET_GPR_U32(ctx, 31, 0x16D9B0u);
    ctx->pc = 0x16D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9A8u;
    // 0x16d9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F3A0u, 0x16D9A8u, 0x16D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9B0u;
label_16d9b0:
    // 0x16d9b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d9b4: 0xc05b7f0  jal         func_16DFC0
    ctx->pc = 0x16D9B4u;
    SET_GPR_U32(ctx, 31, 0x16D9BCu);
    ctx->pc = 0x16D9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9B4u;
    // 0x16d9b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DFC0u, 0x16D9B4u, 0x16D9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9BCu;
label_16d9bc:
    // 0x16d9bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16D9BCu;
    {
        const bool branch_taken_0x16d9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9BCu;
        // 0x16d9c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9bc) {
            ctx->pc = 0x16DA08u;
            goto label_16da08;
        }
    }
    ctx->pc = 0x16D9C4u;
label_16d9c4:
    // 0x16d9c4: 0xc05a618  jal         func_169860
    ctx->pc = 0x16D9C4u;
    SET_GPR_U32(ctx, 31, 0x16D9CCu);
    ctx->pc = 0x16D9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9C4u;
    // 0x16d9c8: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16D9C4u, 0x16D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9CCu;
label_16d9cc:
    // 0x16d9cc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16d9d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d9d4: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16d9d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d9dc: 0xc043a2c  jal         func_10E8B0
    ctx->pc = 0x16D9DCu;
    SET_GPR_U32(ctx, 31, 0x16D9E4u);
    ctx->pc = 0x16D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9DCu;
    // 0x16d9e0: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8B0u, 0x16D9DCu, 0x16D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9E4u;
label_16d9e4:
    // 0x16d9e4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x16D9E4u;
    {
        const bool branch_taken_0x16d9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d9e4) {
            ctx->pc = 0x16D9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D9E4u;
            // 0x16d9e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DA08u;
            goto label_16da08;
        }
    }
    ctx->pc = 0x16D9ECu;
    // 0x16d9ec: 0xc05b9c6  jal         func_16E718
    ctx->pc = 0x16D9ECu;
    SET_GPR_U32(ctx, 31, 0x16D9F4u);
    ctx->pc = 0x16D9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9ECu;
    // 0x16d9f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E718u, 0x16D9ECu, 0x16D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9F4u;
label_16d9f4:
    // 0x16d9f4: 0xc05b72c  jal         func_16DCB0
    ctx->pc = 0x16D9F4u;
    SET_GPR_U32(ctx, 31, 0x16D9FCu);
    ctx->pc = 0x16D9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9F4u;
    // 0x16d9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DCB0u, 0x16D9F4u, 0x16D9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9FCu;
label_16d9fc:
    // 0x16d9fc: 0xc05be2a  jal         func_16F8A8
    ctx->pc = 0x16D9FCu;
    SET_GPR_U32(ctx, 31, 0x16DA04u);
    ctx->pc = 0x16DA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9FCu;
    // 0x16da00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F8A8u, 0x16D9FCu, 0x16DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA04u;
label_16da04:
    // 0x16da04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16da04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16da08:
    // 0x16da08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16da08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16da0c: 0x3e00008  jr          $ra
    ctx->pc = 0x16DA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA0Cu;
        // 0x16da10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DA14u;
    // 0x16da14: 0x0  nop
    ctx->pc = 0x16da14u;
    // NOP
    ctx->pc = 0x16da18u;
}
