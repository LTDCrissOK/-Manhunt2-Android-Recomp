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

// Function: sub_0019C0C0
// Address: 0x19c0c0 - 0x19c1c0
void sub_0019C0C0_0x19c0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C0C0_0x19c0c0");
#endif

    switch (ctx->pc) {
        case 0x19c0c0u: goto label_19c0c0;
        case 0x19c0c4u: goto label_19c0c4;
        case 0x19c0c8u: goto label_19c0c8;
        case 0x19c0ccu: goto label_19c0cc;
        case 0x19c0d0u: goto label_19c0d0;
        case 0x19c0d4u: goto label_19c0d4;
        case 0x19c0d8u: goto label_19c0d8;
        case 0x19c0dcu: goto label_19c0dc;
        case 0x19c0e0u: goto label_19c0e0;
        case 0x19c0e4u: goto label_19c0e4;
        case 0x19c0e8u: goto label_19c0e8;
        case 0x19c0ecu: goto label_19c0ec;
        case 0x19c0f0u: goto label_19c0f0;
        case 0x19c0f4u: goto label_19c0f4;
        case 0x19c0f8u: goto label_19c0f8;
        case 0x19c0fcu: goto label_19c0fc;
        case 0x19c100u: goto label_19c100;
        case 0x19c104u: goto label_19c104;
        case 0x19c108u: goto label_19c108;
        case 0x19c10cu: goto label_19c10c;
        case 0x19c110u: goto label_19c110;
        case 0x19c114u: goto label_19c114;
        case 0x19c118u: goto label_19c118;
        case 0x19c11cu: goto label_19c11c;
        case 0x19c120u: goto label_19c120;
        case 0x19c124u: goto label_19c124;
        case 0x19c128u: goto label_19c128;
        case 0x19c12cu: goto label_19c12c;
        case 0x19c130u: goto label_19c130;
        case 0x19c134u: goto label_19c134;
        case 0x19c138u: goto label_19c138;
        case 0x19c13cu: goto label_19c13c;
        case 0x19c140u: goto label_19c140;
        case 0x19c144u: goto label_19c144;
        case 0x19c148u: goto label_19c148;
        case 0x19c14cu: goto label_19c14c;
        case 0x19c150u: goto label_19c150;
        case 0x19c154u: goto label_19c154;
        case 0x19c158u: goto label_19c158;
        case 0x19c15cu: goto label_19c15c;
        case 0x19c160u: goto label_19c160;
        case 0x19c164u: goto label_19c164;
        case 0x19c168u: goto label_19c168;
        case 0x19c16cu: goto label_19c16c;
        case 0x19c170u: goto label_19c170;
        case 0x19c174u: goto label_19c174;
        case 0x19c178u: goto label_19c178;
        case 0x19c17cu: goto label_19c17c;
        case 0x19c180u: goto label_19c180;
        case 0x19c184u: goto label_19c184;
        case 0x19c188u: goto label_19c188;
        case 0x19c18cu: goto label_19c18c;
        case 0x19c190u: goto label_19c190;
        case 0x19c194u: goto label_19c194;
        case 0x19c198u: goto label_19c198;
        case 0x19c19cu: goto label_19c19c;
        case 0x19c1a0u: goto label_19c1a0;
        case 0x19c1a4u: goto label_19c1a4;
        case 0x19c1a8u: goto label_19c1a8;
        case 0x19c1acu: goto label_19c1ac;
        case 0x19c1b0u: goto label_19c1b0;
        case 0x19c1b4u: goto label_19c1b4;
        case 0x19c1b8u: goto label_19c1b8;
        case 0x19c1bcu: goto label_19c1bc;
        default: break;
    }

    ctx->pc = 0x19c0c0u;

label_19c0c0:
    // 0x19c0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19c0c4:
    // 0x19c0c4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_19c0c8:
    // 0x19c0c8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19c0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_19c0cc:
    // 0x19c0cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c0d0:
    // 0x19c0d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19c0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19c0d4:
    // 0x19c0d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c0d8:
    // 0x19c0d8: 0xc06faee  jal         func_1BEBB8
label_19c0dc:
    if (ctx->pc == 0x19C0DCu) {
        ctx->pc = 0x19C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0D8u;
        // 0x19c0dc: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0E0u;
        goto label_19c0e0;
    }
    ctx->pc = 0x19C0D8u;
    SET_GPR_U32(ctx, 31, 0x19C0E0u);
    ctx->pc = 0x19C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0D8u;
    // 0x19c0dc: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x19C0D8u, 0x19C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0E0u;
label_19c0e0:
    // 0x19c0e0: 0xc061a12  jal         func_186848
label_19c0e4:
    if (ctx->pc == 0x19C0E4u) {
        ctx->pc = 0x19C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0E0u;
        // 0x19c0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0E8u;
        goto label_19c0e8;
    }
    ctx->pc = 0x19C0E0u;
    SET_GPR_U32(ctx, 31, 0x19C0E8u);
    ctx->pc = 0x19C0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0E0u;
    // 0x19c0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19C0E0u, 0x19C0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0E8u;
label_19c0e8:
    // 0x19c0e8: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x19c0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_19c0ec:
    // 0x19c0ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19c0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19c0f0:
    // 0x19c0f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c0f4:
    // 0x19c0f4: 0xc07072c  jal         func_1C1CB0
label_19c0f8:
    if (ctx->pc == 0x19C0F8u) {
        ctx->pc = 0x19C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0F4u;
        // 0x19c0f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C0FCu;
        goto label_19c0fc;
    }
    ctx->pc = 0x19C0F4u;
    SET_GPR_U32(ctx, 31, 0x19C0FCu);
    ctx->pc = 0x19C0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0F4u;
    // 0x19c0f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1CB0u, 0x19C0F4u, 0x19C0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0FCu;
label_19c0fc:
    // 0x19c0fc: 0xc061a12  jal         func_186848
label_19c100:
    if (ctx->pc == 0x19C100u) {
        ctx->pc = 0x19C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C0FCu;
        // 0x19c100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C104u;
        goto label_19c104;
    }
    ctx->pc = 0x19C0FCu;
    SET_GPR_U32(ctx, 31, 0x19C104u);
    ctx->pc = 0x19C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C0FCu;
    // 0x19c100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19C0FCu, 0x19C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C104u;
label_19c104:
    // 0x19c104: 0x8c4304d0  lw          $v1, 0x4D0($v0)
    ctx->pc = 0x19c104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_19c108:
    // 0x19c108: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_19c10c:
    if (ctx->pc == 0x19C10Cu) {
        ctx->pc = 0x19C110u;
        goto label_19c110;
    }
    ctx->pc = 0x19C108u;
    {
        const bool branch_taken_0x19c108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c108) {
            ctx->pc = 0x19C120u;
            goto label_19c120;
        }
    }
    ctx->pc = 0x19C110u;
label_19c110:
    // 0x19c110: 0xc06724e  jal         func_19C938
label_19c114:
    if (ctx->pc == 0x19C114u) {
        ctx->pc = 0x19C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C110u;
        // 0x19c114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C118u;
        goto label_19c118;
    }
    ctx->pc = 0x19C110u;
    SET_GPR_U32(ctx, 31, 0x19C118u);
    ctx->pc = 0x19C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C110u;
    // 0x19c114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C938u, 0x19C110u, 0x19C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C118u;
label_19c118:
    // 0x19c118: 0x10000022  b           . + 4 + (0x22 << 2)
label_19c11c:
    if (ctx->pc == 0x19C11Cu) {
        ctx->pc = 0x19C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C118u;
        // 0x19c11c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C120u;
        goto label_19c120;
    }
    ctx->pc = 0x19C118u;
    {
        const bool branch_taken_0x19c118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C118u;
        // 0x19c11c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c118) {
            ctx->pc = 0x19C1A4u;
            goto label_19c1a4;
        }
    }
    ctx->pc = 0x19C120u;
label_19c120:
    // 0x19c120: 0xc061a12  jal         func_186848
label_19c124:
    if (ctx->pc == 0x19C124u) {
        ctx->pc = 0x19C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C120u;
        // 0x19c124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C128u;
        goto label_19c128;
    }
    ctx->pc = 0x19C120u;
    SET_GPR_U32(ctx, 31, 0x19C128u);
    ctx->pc = 0x19C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C120u;
    // 0x19c124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19C120u, 0x19C128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C128u;
label_19c128:
    // 0x19c128: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19c128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19c12c:
    // 0x19c12c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c130:
    // 0x19c130: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19c130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19c134:
    // 0x19c134: 0x40f809  jalr        $v0
label_19c138:
    if (ctx->pc == 0x19C138u) {
        ctx->pc = 0x19C13Cu;
        goto label_19c13c;
    }
    ctx->pc = 0x19C134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C13Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C134u, 0x19C13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C13Cu;
label_19c13c:
    // 0x19c13c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_19c140:
    if (ctx->pc == 0x19C140u) {
        ctx->pc = 0x19C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C13Cu;
        // 0x19c140: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C144u;
        goto label_19c144;
    }
    ctx->pc = 0x19C13Cu;
    {
        const bool branch_taken_0x19c13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c13c) {
            ctx->pc = 0x19C140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C13Cu;
            // 0x19c140: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C154u;
            goto label_19c154;
        }
    }
    ctx->pc = 0x19C144u;
label_19c144:
    // 0x19c144: 0xc067598  jal         func_19D660
label_19c148:
    if (ctx->pc == 0x19C148u) {
        ctx->pc = 0x19C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C144u;
        // 0x19c148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C14Cu;
        goto label_19c14c;
    }
    ctx->pc = 0x19C144u;
    SET_GPR_U32(ctx, 31, 0x19C14Cu);
    ctx->pc = 0x19C148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C144u;
    // 0x19c148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x19C144u, 0x19C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C14Cu;
label_19c14c:
    // 0x19c14c: 0x10000015  b           . + 4 + (0x15 << 2)
label_19c150:
    if (ctx->pc == 0x19C150u) {
        ctx->pc = 0x19C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C14Cu;
        // 0x19c150: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C154u;
        goto label_19c154;
    }
    ctx->pc = 0x19C14Cu;
    {
        const bool branch_taken_0x19c14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C14Cu;
        // 0x19c150: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c14c) {
            ctx->pc = 0x19C1A4u;
            goto label_19c1a4;
        }
    }
    ctx->pc = 0x19C154u;
label_19c154:
    // 0x19c154: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x19c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_19c158:
    // 0x19c158: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_19c15c:
    if (ctx->pc == 0x19C15Cu) {
        ctx->pc = 0x19C160u;
        goto label_19c160;
    }
    ctx->pc = 0x19C158u;
    {
        const bool branch_taken_0x19c158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19c158) {
            ctx->pc = 0x19C190u;
            goto label_19c190;
        }
    }
    ctx->pc = 0x19C160u;
label_19c160:
    // 0x19c160: 0xc06766e  jal         func_19D9B8
label_19c164:
    if (ctx->pc == 0x19C164u) {
        ctx->pc = 0x19C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C160u;
        // 0x19c164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C168u;
        goto label_19c168;
    }
    ctx->pc = 0x19C160u;
    SET_GPR_U32(ctx, 31, 0x19C168u);
    ctx->pc = 0x19C164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C160u;
    // 0x19c164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B8u, 0x19C160u, 0x19C168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C168u;
label_19c168:
    // 0x19c168: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19c16c:
    if (ctx->pc == 0x19C16Cu) {
        ctx->pc = 0x19C170u;
        goto label_19c170;
    }
    ctx->pc = 0x19C168u;
    {
        const bool branch_taken_0x19c168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c168) {
            ctx->pc = 0x19C180u;
            goto label_19c180;
        }
    }
    ctx->pc = 0x19C170u;
label_19c170:
    // 0x19c170: 0xc0676b8  jal         func_19DAE0
label_19c174:
    if (ctx->pc == 0x19C174u) {
        ctx->pc = 0x19C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C170u;
        // 0x19c174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C178u;
        goto label_19c178;
    }
    ctx->pc = 0x19C170u;
    SET_GPR_U32(ctx, 31, 0x19C178u);
    ctx->pc = 0x19C174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C170u;
    // 0x19c174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAE0u, 0x19C170u, 0x19C178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C178u;
label_19c178:
    // 0x19c178: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_19c17c:
    if (ctx->pc == 0x19C17Cu) {
        ctx->pc = 0x19C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C178u;
        // 0x19c17c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C180u;
        goto label_19c180;
    }
    ctx->pc = 0x19C178u;
    {
        const bool branch_taken_0x19c178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C178u;
        // 0x19c17c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c178) {
            ctx->pc = 0x19C1A4u;
            goto label_19c1a4;
        }
    }
    ctx->pc = 0x19C180u;
label_19c180:
    // 0x19c180: 0xc0675e0  jal         func_19D780
label_19c184:
    if (ctx->pc == 0x19C184u) {
        ctx->pc = 0x19C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C180u;
        // 0x19c184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C188u;
        goto label_19c188;
    }
    ctx->pc = 0x19C180u;
    SET_GPR_U32(ctx, 31, 0x19C188u);
    ctx->pc = 0x19C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C180u;
    // 0x19c184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D780u, 0x19C180u, 0x19C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C188u;
label_19c188:
    // 0x19c188: 0x10000006  b           . + 4 + (0x6 << 2)
label_19c18c:
    if (ctx->pc == 0x19C18Cu) {
        ctx->pc = 0x19C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C188u;
        // 0x19c18c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C190u;
        goto label_19c190;
    }
    ctx->pc = 0x19C188u;
    {
        const bool branch_taken_0x19c188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C188u;
        // 0x19c18c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c188) {
            ctx->pc = 0x19C1A4u;
            goto label_19c1a4;
        }
    }
    ctx->pc = 0x19C190u;
label_19c190:
    // 0x19c190: 0xc061a1e  jal         func_186878
label_19c194:
    if (ctx->pc == 0x19C194u) {
        ctx->pc = 0x19C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C190u;
        // 0x19c194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C198u;
        goto label_19c198;
    }
    ctx->pc = 0x19C190u;
    SET_GPR_U32(ctx, 31, 0x19C198u);
    ctx->pc = 0x19C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C190u;
    // 0x19c194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19C190u, 0x19C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C198u;
label_19c198:
    // 0x19c198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c19c:
    // 0x19c19c: 0xac430220  sw          $v1, 0x220($v0)
    ctx->pc = 0x19c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
label_19c1a0:
    // 0x19c1a0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x19c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_19c1a4:
    // 0x19c1a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19c1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19c1a8:
    // 0x19c1a8: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x19c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_19c1ac:
    // 0x19c1ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19c1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_19c1b0:
    // 0x19c1b0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x19c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_19c1b4:
    // 0x19c1b4: 0x3e00008  jr          $ra
label_19c1b8:
    if (ctx->pc == 0x19C1B8u) {
        ctx->pc = 0x19C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1B4u;
        // 0x19c1b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C1BCu;
        goto label_19c1bc;
    }
    ctx->pc = 0x19C1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1B4u;
        // 0x19c1b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C1BCu;
label_19c1bc:
    // 0x19c1bc: 0x0  nop
    ctx->pc = 0x19c1bcu;
    // NOP
    ctx->pc = 0x19c1c0u;
}
