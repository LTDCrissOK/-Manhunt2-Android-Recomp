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

// Function: sub_002EF870
// Address: 0x2ef870 - 0x2efa88
void sub_002EF870_0x2ef870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF870_0x2ef870");
#endif

    switch (ctx->pc) {
        case 0x2ef870u: goto label_2ef870;
        case 0x2ef874u: goto label_2ef874;
        case 0x2ef878u: goto label_2ef878;
        case 0x2ef87cu: goto label_2ef87c;
        case 0x2ef880u: goto label_2ef880;
        case 0x2ef884u: goto label_2ef884;
        case 0x2ef888u: goto label_2ef888;
        case 0x2ef88cu: goto label_2ef88c;
        case 0x2ef890u: goto label_2ef890;
        case 0x2ef894u: goto label_2ef894;
        case 0x2ef898u: goto label_2ef898;
        case 0x2ef89cu: goto label_2ef89c;
        case 0x2ef8a0u: goto label_2ef8a0;
        case 0x2ef8a4u: goto label_2ef8a4;
        case 0x2ef8a8u: goto label_2ef8a8;
        case 0x2ef8acu: goto label_2ef8ac;
        case 0x2ef8b0u: goto label_2ef8b0;
        case 0x2ef8b4u: goto label_2ef8b4;
        case 0x2ef8b8u: goto label_2ef8b8;
        case 0x2ef8bcu: goto label_2ef8bc;
        case 0x2ef8c0u: goto label_2ef8c0;
        case 0x2ef8c4u: goto label_2ef8c4;
        case 0x2ef8c8u: goto label_2ef8c8;
        case 0x2ef8ccu: goto label_2ef8cc;
        case 0x2ef8d0u: goto label_2ef8d0;
        case 0x2ef8d4u: goto label_2ef8d4;
        case 0x2ef8d8u: goto label_2ef8d8;
        case 0x2ef8dcu: goto label_2ef8dc;
        case 0x2ef8e0u: goto label_2ef8e0;
        case 0x2ef8e4u: goto label_2ef8e4;
        case 0x2ef8e8u: goto label_2ef8e8;
        case 0x2ef8ecu: goto label_2ef8ec;
        case 0x2ef8f0u: goto label_2ef8f0;
        case 0x2ef8f4u: goto label_2ef8f4;
        case 0x2ef8f8u: goto label_2ef8f8;
        case 0x2ef8fcu: goto label_2ef8fc;
        case 0x2ef900u: goto label_2ef900;
        case 0x2ef904u: goto label_2ef904;
        case 0x2ef908u: goto label_2ef908;
        case 0x2ef90cu: goto label_2ef90c;
        case 0x2ef910u: goto label_2ef910;
        case 0x2ef914u: goto label_2ef914;
        case 0x2ef918u: goto label_2ef918;
        case 0x2ef91cu: goto label_2ef91c;
        case 0x2ef920u: goto label_2ef920;
        case 0x2ef924u: goto label_2ef924;
        case 0x2ef928u: goto label_2ef928;
        case 0x2ef92cu: goto label_2ef92c;
        case 0x2ef930u: goto label_2ef930;
        case 0x2ef934u: goto label_2ef934;
        case 0x2ef938u: goto label_2ef938;
        case 0x2ef93cu: goto label_2ef93c;
        case 0x2ef940u: goto label_2ef940;
        case 0x2ef944u: goto label_2ef944;
        case 0x2ef948u: goto label_2ef948;
        case 0x2ef94cu: goto label_2ef94c;
        case 0x2ef950u: goto label_2ef950;
        case 0x2ef954u: goto label_2ef954;
        case 0x2ef958u: goto label_2ef958;
        case 0x2ef95cu: goto label_2ef95c;
        case 0x2ef960u: goto label_2ef960;
        case 0x2ef964u: goto label_2ef964;
        case 0x2ef968u: goto label_2ef968;
        case 0x2ef96cu: goto label_2ef96c;
        case 0x2ef970u: goto label_2ef970;
        case 0x2ef974u: goto label_2ef974;
        case 0x2ef978u: goto label_2ef978;
        case 0x2ef97cu: goto label_2ef97c;
        case 0x2ef980u: goto label_2ef980;
        case 0x2ef984u: goto label_2ef984;
        case 0x2ef988u: goto label_2ef988;
        case 0x2ef98cu: goto label_2ef98c;
        case 0x2ef990u: goto label_2ef990;
        case 0x2ef994u: goto label_2ef994;
        case 0x2ef998u: goto label_2ef998;
        case 0x2ef99cu: goto label_2ef99c;
        case 0x2ef9a0u: goto label_2ef9a0;
        case 0x2ef9a4u: goto label_2ef9a4;
        case 0x2ef9a8u: goto label_2ef9a8;
        case 0x2ef9acu: goto label_2ef9ac;
        case 0x2ef9b0u: goto label_2ef9b0;
        case 0x2ef9b4u: goto label_2ef9b4;
        case 0x2ef9b8u: goto label_2ef9b8;
        case 0x2ef9bcu: goto label_2ef9bc;
        case 0x2ef9c0u: goto label_2ef9c0;
        case 0x2ef9c4u: goto label_2ef9c4;
        case 0x2ef9c8u: goto label_2ef9c8;
        case 0x2ef9ccu: goto label_2ef9cc;
        case 0x2ef9d0u: goto label_2ef9d0;
        case 0x2ef9d4u: goto label_2ef9d4;
        case 0x2ef9d8u: goto label_2ef9d8;
        case 0x2ef9dcu: goto label_2ef9dc;
        case 0x2ef9e0u: goto label_2ef9e0;
        case 0x2ef9e4u: goto label_2ef9e4;
        case 0x2ef9e8u: goto label_2ef9e8;
        case 0x2ef9ecu: goto label_2ef9ec;
        case 0x2ef9f0u: goto label_2ef9f0;
        case 0x2ef9f4u: goto label_2ef9f4;
        case 0x2ef9f8u: goto label_2ef9f8;
        case 0x2ef9fcu: goto label_2ef9fc;
        case 0x2efa00u: goto label_2efa00;
        case 0x2efa04u: goto label_2efa04;
        case 0x2efa08u: goto label_2efa08;
        case 0x2efa0cu: goto label_2efa0c;
        case 0x2efa10u: goto label_2efa10;
        case 0x2efa14u: goto label_2efa14;
        case 0x2efa18u: goto label_2efa18;
        case 0x2efa1cu: goto label_2efa1c;
        case 0x2efa20u: goto label_2efa20;
        case 0x2efa24u: goto label_2efa24;
        case 0x2efa28u: goto label_2efa28;
        case 0x2efa2cu: goto label_2efa2c;
        case 0x2efa30u: goto label_2efa30;
        case 0x2efa34u: goto label_2efa34;
        case 0x2efa38u: goto label_2efa38;
        case 0x2efa3cu: goto label_2efa3c;
        case 0x2efa40u: goto label_2efa40;
        case 0x2efa44u: goto label_2efa44;
        case 0x2efa48u: goto label_2efa48;
        case 0x2efa4cu: goto label_2efa4c;
        case 0x2efa50u: goto label_2efa50;
        case 0x2efa54u: goto label_2efa54;
        case 0x2efa58u: goto label_2efa58;
        case 0x2efa5cu: goto label_2efa5c;
        case 0x2efa60u: goto label_2efa60;
        case 0x2efa64u: goto label_2efa64;
        case 0x2efa68u: goto label_2efa68;
        case 0x2efa6cu: goto label_2efa6c;
        case 0x2efa70u: goto label_2efa70;
        case 0x2efa74u: goto label_2efa74;
        case 0x2efa78u: goto label_2efa78;
        case 0x2efa7cu: goto label_2efa7c;
        case 0x2efa80u: goto label_2efa80;
        case 0x2efa84u: goto label_2efa84;
        default: break;
    }

    ctx->pc = 0x2ef870u;

label_2ef870:
    // 0x2ef870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ef870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ef874:
    // 0x2ef874: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ef874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2ef878:
    // 0x2ef878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ef878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ef87c:
    // 0x2ef87c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ef87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef880:
    // 0x2ef880: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ef880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2ef884:
    // 0x2ef884: 0x2410002c  addiu       $s0, $zero, 0x2C
    ctx->pc = 0x2ef884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2ef888:
    // 0x2ef888: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ef888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2ef88c:
    // 0x2ef88c: 0xc0bf868  jal         func_2FE1A0
label_2ef890:
    if (ctx->pc == 0x2EF890u) {
        ctx->pc = 0x2EF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF88Cu;
        // 0x2ef890: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF894u;
        goto label_2ef894;
    }
    ctx->pc = 0x2EF88Cu;
    SET_GPR_U32(ctx, 31, 0x2EF894u);
    ctx->pc = 0x2EF890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF88Cu;
    // 0x2ef890: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EF88Cu, 0x2EF894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF894u;
label_2ef894:
    // 0x2ef894: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ef894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ef898:
    // 0x2ef898: 0xc0bf868  jal         func_2FE1A0
label_2ef89c:
    if (ctx->pc == 0x2EF89Cu) {
        ctx->pc = 0x2EF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF898u;
        // 0x2ef89c: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF8A0u;
        goto label_2ef8a0;
    }
    ctx->pc = 0x2EF898u;
    SET_GPR_U32(ctx, 31, 0x2EF8A0u);
    ctx->pc = 0x2EF89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF898u;
    // 0x2ef89c: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EF898u, 0x2EF8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF8A0u;
label_2ef8a0:
    // 0x2ef8a0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2ef8a4:
    if (ctx->pc == 0x2EF8A4u) {
        ctx->pc = 0x2EF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8A0u;
        // 0x2ef8a4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF8A8u;
        goto label_2ef8a8;
    }
    ctx->pc = 0x2EF8A0u;
    {
        const bool branch_taken_0x2ef8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8A0u;
        // 0x2ef8a4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8a0) {
            ctx->pc = 0x2EF90Cu;
            goto label_2ef90c;
        }
    }
    ctx->pc = 0x2EF8A8u;
label_2ef8a8:
    // 0x2ef8a8: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x2ef8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945416)));
label_2ef8ac:
    // 0x2ef8ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ef8b0:
    if (ctx->pc == 0x2EF8B0u) {
        ctx->pc = 0x2EF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8ACu;
        // 0x2ef8b0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF8B4u;
        goto label_2ef8b4;
    }
    ctx->pc = 0x2EF8ACu;
    {
        const bool branch_taken_0x2ef8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8ACu;
        // 0x2ef8b0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8ac) {
            ctx->pc = 0x2EF8CCu;
            goto label_2ef8cc;
        }
    }
    ctx->pc = 0x2EF8B4u;
label_2ef8b4:
    // 0x2ef8b4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2ef8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_2ef8b8:
    // 0x2ef8b8: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2ef8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
label_2ef8bc:
    // 0x2ef8bc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2ef8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2ef8c0:
    // 0x2ef8c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2ef8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2ef8c4:
    // 0x2ef8c4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2ef8c8:
    if (ctx->pc == 0x2EF8C8u) {
        ctx->pc = 0x2EF8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8C4u;
        // 0x2ef8c8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF8CCu;
        goto label_2ef8cc;
    }
    ctx->pc = 0x2EF8C4u;
    {
        const bool branch_taken_0x2ef8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef8c4) {
            ctx->pc = 0x2EF8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF8C4u;
            // 0x2ef8c8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF8D4u;
            goto label_2ef8d4;
        }
    }
    ctx->pc = 0x2EF8CCu;
label_2ef8cc:
    // 0x2ef8cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ef8d0:
    if (ctx->pc == 0x2EF8D0u) {
        ctx->pc = 0x2EF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8CCu;
        // 0x2ef8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF8D4u;
        goto label_2ef8d4;
    }
    ctx->pc = 0x2EF8CCu;
    {
        const bool branch_taken_0x2ef8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8CCu;
        // 0x2ef8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8cc) {
            ctx->pc = 0x2EF8D8u;
            goto label_2ef8d8;
        }
    }
    ctx->pc = 0x2EF8D4u;
label_2ef8d4:
    // 0x2ef8d4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2ef8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2ef8d8:
    // 0x2ef8d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2ef8dc:
    if (ctx->pc == 0x2EF8DCu) {
        ctx->pc = 0x2EF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8D8u;
        // 0x2ef8dc: 0x8c82aa88  lw          $v0, -0x5578($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF8E0u;
        goto label_2ef8e0;
    }
    ctx->pc = 0x2EF8D8u;
    {
        const bool branch_taken_0x2ef8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8D8u;
        // 0x2ef8dc: 0x8c82aa88  lw          $v0, -0x5578($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8d8) {
            ctx->pc = 0x2EF90Cu;
            goto label_2ef90c;
        }
    }
    ctx->pc = 0x2EF8E0u;
label_2ef8e0:
    // 0x2ef8e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ef8e4:
    if (ctx->pc == 0x2EF8E4u) {
        ctx->pc = 0x2EF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8E0u;
        // 0x2ef8e4: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF8E8u;
        goto label_2ef8e8;
    }
    ctx->pc = 0x2EF8E0u;
    {
        const bool branch_taken_0x2ef8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8E0u;
        // 0x2ef8e4: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8e0) {
            ctx->pc = 0x2EF8FCu;
            goto label_2ef8fc;
        }
    }
    ctx->pc = 0x2EF8E8u;
label_2ef8e8:
    // 0x2ef8e8: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2ef8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
label_2ef8ec:
    // 0x2ef8ec: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2ef8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2ef8f0:
    // 0x2ef8f0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2ef8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2ef8f4:
    // 0x2ef8f4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2ef8f8:
    if (ctx->pc == 0x2EF8F8u) {
        ctx->pc = 0x2EF8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8F4u;
        // 0x2ef8f8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF8FCu;
        goto label_2ef8fc;
    }
    ctx->pc = 0x2EF8F4u;
    {
        const bool branch_taken_0x2ef8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef8f4) {
            ctx->pc = 0x2EF8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF8F4u;
            // 0x2ef8f8: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF904u;
            goto label_2ef904;
        }
    }
    ctx->pc = 0x2EF8FCu;
label_2ef8fc:
    // 0x2ef8fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ef900:
    if (ctx->pc == 0x2EF900u) {
        ctx->pc = 0x2EF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8FCu;
        // 0x2ef900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF904u;
        goto label_2ef904;
    }
    ctx->pc = 0x2EF8FCu;
    {
        const bool branch_taken_0x2ef8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8FCu;
        // 0x2ef900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8fc) {
            ctx->pc = 0x2EF908u;
            goto label_2ef908;
        }
    }
    ctx->pc = 0x2EF904u;
label_2ef904:
    // 0x2ef904: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2ef904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2ef908:
    // 0x2ef908: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x2ef908u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ef90c:
    // 0x2ef90c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2ef90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2ef910:
    // 0x2ef910: 0xa2201386  sb          $zero, 0x1386($s1)
    ctx->pc = 0x2ef910u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4998), (uint8_t)GPR_U32(ctx, 0));
label_2ef914:
    // 0x2ef914: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2ef914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2ef918:
    // 0x2ef918: 0x8c430534  lw          $v1, 0x534($v0)
    ctx->pc = 0x2ef918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1332)));
label_2ef91c:
    // 0x2ef91c: 0x5060004e  beql        $v1, $zero, . + 4 + (0x4E << 2)
label_2ef920:
    if (ctx->pc == 0x2EF920u) {
        ctx->pc = 0x2EF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF91Cu;
        // 0x2ef920: 0xc6201288  lwc1        $f0, 0x1288($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF924u;
        goto label_2ef924;
    }
    ctx->pc = 0x2EF91Cu;
    {
        const bool branch_taken_0x2ef91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef91c) {
            ctx->pc = 0x2EF920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF91Cu;
            // 0x2ef920: 0xc6201288  lwc1        $f0, 0x1288($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFA58u;
            goto label_2efa58;
        }
    }
    ctx->pc = 0x2EF924u;
label_2ef924:
    // 0x2ef924: 0x5640004c  bnel        $s2, $zero, . + 4 + (0x4C << 2)
label_2ef928:
    if (ctx->pc == 0x2EF928u) {
        ctx->pc = 0x2EF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF924u;
        // 0x2ef928: 0xc6201288  lwc1        $f0, 0x1288($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF92Cu;
        goto label_2ef92c;
    }
    ctx->pc = 0x2EF924u;
    {
        const bool branch_taken_0x2ef924 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef924) {
            ctx->pc = 0x2EF928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF924u;
            // 0x2ef928: 0xc6201288  lwc1        $f0, 0x1288($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFA58u;
            goto label_2efa58;
        }
    }
    ctx->pc = 0x2EF92Cu;
label_2ef92c:
    // 0x2ef92c: 0x8e2211e0  lw          $v0, 0x11E0($s1)
    ctx->pc = 0x2ef92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_2ef930:
    // 0x2ef930: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ef934:
    if (ctx->pc == 0x2EF934u) {
        ctx->pc = 0x2EF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF930u;
        // 0x2ef934: 0xae2005e0  sw          $zero, 0x5E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF938u;
        goto label_2ef938;
    }
    ctx->pc = 0x2EF930u;
    {
        const bool branch_taken_0x2ef930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF930u;
        // 0x2ef934: 0xae2005e0  sw          $zero, 0x5E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef930) {
            ctx->pc = 0x2EF940u;
            goto label_2ef940;
        }
    }
    ctx->pc = 0x2EF938u;
label_2ef938:
    // 0x2ef938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef93c:
    // 0x2ef93c: 0xa2221386  sb          $v0, 0x1386($s1)
    ctx->pc = 0x2ef93cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4998), (uint8_t)GPR_U32(ctx, 2));
label_2ef940:
    // 0x2ef940: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2ef940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2ef944:
    // 0x2ef944: 0xc6211288  lwc1        $f1, 0x1288($s1)
    ctx->pc = 0x2ef944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ef948:
    // 0x2ef948: 0xc4405320  lwc1        $f0, 0x5320($v0)
    ctx->pc = 0x2ef948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ef94c:
    // 0x2ef94c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ef94cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ef950:
    // 0x2ef950: 0x0  nop
    ctx->pc = 0x2ef950u;
    // NOP
label_2ef954:
    // 0x2ef954: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_2ef958:
    if (ctx->pc == 0x2EF958u) {
        ctx->pc = 0x2EF958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF954u;
        // 0x2ef958: 0x8e2211e0  lw          $v0, 0x11E0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF95Cu;
        goto label_2ef95c;
    }
    ctx->pc = 0x2EF954u;
    {
        const bool branch_taken_0x2ef954 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ef954) {
            ctx->pc = 0x2EF958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF954u;
            // 0x2ef958: 0x8e2211e0  lw          $v0, 0x11E0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF984u;
            goto label_2ef984;
        }
    }
    ctx->pc = 0x2EF95Cu;
label_2ef95c:
    // 0x2ef95c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ef95cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ef960:
    // 0x2ef960: 0x0  nop
    ctx->pc = 0x2ef960u;
    // NOP
label_2ef964:
    // 0x2ef964: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ef964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ef968:
    // 0x2ef968: 0x0  nop
    ctx->pc = 0x2ef968u;
    // NOP
label_2ef96c:
    // 0x2ef96c: 0x45000040  bc1f        . + 4 + (0x40 << 2)
label_2ef970:
    if (ctx->pc == 0x2EF970u) {
        ctx->pc = 0x2EF970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF96Cu;
        // 0x2ef970: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF974u;
        goto label_2ef974;
    }
    ctx->pc = 0x2EF96Cu;
    {
        const bool branch_taken_0x2ef96c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF96Cu;
        // 0x2ef970: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef96c) {
            ctx->pc = 0x2EFA70u;
            goto label_2efa70;
        }
    }
    ctx->pc = 0x2EF974u;
label_2ef974:
    // 0x2ef974: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2ef974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ef978:
    // 0x2ef978: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ef978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ef97c:
    // 0x2ef97c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2ef980:
    if (ctx->pc == 0x2EF980u) {
        ctx->pc = 0x2EF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF97Cu;
        // 0x2ef980: 0xe6201288  swc1        $f0, 0x1288($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4744), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF984u;
        goto label_2ef984;
    }
    ctx->pc = 0x2EF97Cu;
    {
        const bool branch_taken_0x2ef97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF97Cu;
        // 0x2ef980: 0xe6201288  swc1        $f0, 0x1288($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef97c) {
            ctx->pc = 0x2EFA70u;
            goto label_2efa70;
        }
    }
    ctx->pc = 0x2EF984u;
label_2ef984:
    // 0x2ef984: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_2ef988:
    if (ctx->pc == 0x2EF988u) {
        ctx->pc = 0x2EF988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF984u;
        // 0x2ef988: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF98Cu;
        goto label_2ef98c;
    }
    ctx->pc = 0x2EF984u;
    {
        const bool branch_taken_0x2ef984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF984u;
        // 0x2ef988: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef984) {
            ctx->pc = 0x2EFA50u;
            goto label_2efa50;
        }
    }
    ctx->pc = 0x2EF98Cu;
label_2ef98c:
    // 0x2ef98c: 0xae2005e0  sw          $zero, 0x5E0($s1)
    ctx->pc = 0x2ef98cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1504), GPR_U32(ctx, 0));
label_2ef990:
    // 0x2ef990: 0xc0899bc  jal         func_2266F0
label_2ef994:
    if (ctx->pc == 0x2EF994u) {
        ctx->pc = 0x2EF994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF990u;
        // 0x2ef994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF998u;
        goto label_2ef998;
    }
    ctx->pc = 0x2EF990u;
    SET_GPR_U32(ctx, 31, 0x2EF998u);
    ctx->pc = 0x2EF994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF990u;
    // 0x2ef994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2EF990u, 0x2EF998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF998u;
label_2ef998:
    // 0x2ef998: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2ef99c:
    if (ctx->pc == 0x2EF99Cu) {
        ctx->pc = 0x2EF99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF998u;
        // 0x2ef99c: 0x8e2411e0  lw          $a0, 0x11E0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9A0u;
        goto label_2ef9a0;
    }
    ctx->pc = 0x2EF998u;
    {
        const bool branch_taken_0x2ef998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef998) {
            ctx->pc = 0x2EF99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF998u;
            // 0x2ef99c: 0x8e2411e0  lw          $a0, 0x11E0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF9C8u;
            goto label_2ef9c8;
        }
    }
    ctx->pc = 0x2EF9A0u;
label_2ef9a0:
    // 0x2ef9a0: 0xc0899bc  jal         func_2266F0
label_2ef9a4:
    if (ctx->pc == 0x2EF9A4u) {
        ctx->pc = 0x2EF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9A0u;
        // 0x2ef9a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9A8u;
        goto label_2ef9a8;
    }
    ctx->pc = 0x2EF9A0u;
    SET_GPR_U32(ctx, 31, 0x2EF9A8u);
    ctx->pc = 0x2EF9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF9A0u;
    // 0x2ef9a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2EF9A0u, 0x2EF9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF9A8u;
label_2ef9a8:
    // 0x2ef9a8: 0xc097f2a  jal         func_25FCA8
label_2ef9ac:
    if (ctx->pc == 0x2EF9ACu) {
        ctx->pc = 0x2EF9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9A8u;
        // 0x2ef9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9B0u;
        goto label_2ef9b0;
    }
    ctx->pc = 0x2EF9A8u;
    SET_GPR_U32(ctx, 31, 0x2EF9B0u);
    ctx->pc = 0x2EF9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF9A8u;
    // 0x2ef9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x2EF9A8u, 0x2EF9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF9B0u;
label_2ef9b0:
    // 0x2ef9b0: 0x8e2411e0  lw          $a0, 0x11E0($s1)
    ctx->pc = 0x2ef9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_2ef9b4:
    // 0x2ef9b4: 0xc097f2a  jal         func_25FCA8
label_2ef9b8:
    if (ctx->pc == 0x2EF9B8u) {
        ctx->pc = 0x2EF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9B4u;
        // 0x2ef9b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9BCu;
        goto label_2ef9bc;
    }
    ctx->pc = 0x2EF9B4u;
    SET_GPR_U32(ctx, 31, 0x2EF9BCu);
    ctx->pc = 0x2EF9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF9B4u;
    // 0x2ef9b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x2EF9B4u, 0x2EF9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF9BCu;
label_2ef9bc:
    // 0x2ef9bc: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x2ef9bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_2ef9c0:
    // 0x2ef9c0: 0x2e120001  sltiu       $s2, $s0, 0x1
    ctx->pc = 0x2ef9c0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ef9c4:
    // 0x2ef9c4: 0x8e2411e0  lw          $a0, 0x11E0($s1)
    ctx->pc = 0x2ef9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_2ef9c8:
    // 0x2ef9c8: 0xc097f2a  jal         func_25FCA8
label_2ef9cc:
    if (ctx->pc == 0x2EF9CCu) {
        ctx->pc = 0x2EF9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9C8u;
        // 0x2ef9cc: 0x8e300224  lw          $s0, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9D0u;
        goto label_2ef9d0;
    }
    ctx->pc = 0x2EF9C8u;
    SET_GPR_U32(ctx, 31, 0x2EF9D0u);
    ctx->pc = 0x2EF9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF9C8u;
    // 0x2ef9cc: 0x8e300224  lw          $s0, 0x224($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x2EF9C8u, 0x2EF9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF9D0u;
label_2ef9d0:
    // 0x2ef9d0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ef9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ef9d4:
    // 0x2ef9d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ef9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ef9d8:
    // 0x2ef9d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef9dc:
    // 0x2ef9dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ef9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ef9e0:
    // 0x2ef9e0: 0xc0bb776  jal         func_2EDDD8
label_2ef9e4:
    if (ctx->pc == 0x2EF9E4u) {
        ctx->pc = 0x2EF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9E0u;
        // 0x2ef9e4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF9E8u;
        goto label_2ef9e8;
    }
    ctx->pc = 0x2EF9E0u;
    SET_GPR_U32(ctx, 31, 0x2EF9E8u);
    ctx->pc = 0x2EF9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF9E0u;
    // 0x2ef9e4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDD8u, 0x2EF9E0u, 0x2EF9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF9E8u;
label_2ef9e8:
    // 0x2ef9e8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2ef9ec:
    if (ctx->pc == 0x2EF9ECu) {
        ctx->pc = 0x2EF9F0u;
        goto label_2ef9f0;
    }
    ctx->pc = 0x2EF9E8u;
    {
        const bool branch_taken_0x2ef9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef9e8) {
            ctx->pc = 0x2EFA40u;
            goto label_2efa40;
        }
    }
    ctx->pc = 0x2EF9F0u;
label_2ef9f0:
    // 0x2ef9f0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_2ef9f4:
    if (ctx->pc == 0x2EF9F4u) {
        ctx->pc = 0x2EF9F8u;
        goto label_2ef9f8;
    }
    ctx->pc = 0x2EF9F0u;
    {
        const bool branch_taken_0x2ef9f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef9f0) {
            ctx->pc = 0x2EFA40u;
            goto label_2efa40;
        }
    }
    ctx->pc = 0x2EF9F8u;
label_2ef9f8:
    // 0x2ef9f8: 0xc097f26  jal         func_25FC98
label_2ef9fc:
    if (ctx->pc == 0x2EF9FCu) {
        ctx->pc = 0x2EF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9F8u;
        // 0x2ef9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA00u;
        goto label_2efa00;
    }
    ctx->pc = 0x2EF9F8u;
    SET_GPR_U32(ctx, 31, 0x2EFA00u);
    ctx->pc = 0x2EF9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF9F8u;
    // 0x2ef9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2EF9F8u, 0x2EFA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA00u;
label_2efa00:
    // 0x2efa00: 0x8e2411e0  lw          $a0, 0x11E0($s1)
    ctx->pc = 0x2efa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_2efa04:
    // 0x2efa04: 0xc097f26  jal         func_25FC98
label_2efa08:
    if (ctx->pc == 0x2EFA08u) {
        ctx->pc = 0x2EFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA04u;
        // 0x2efa08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA0Cu;
        goto label_2efa0c;
    }
    ctx->pc = 0x2EFA04u;
    SET_GPR_U32(ctx, 31, 0x2EFA0Cu);
    ctx->pc = 0x2EFA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFA04u;
    // 0x2efa08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2EFA04u, 0x2EFA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA0Cu;
label_2efa0c:
    // 0x2efa0c: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
label_2efa10:
    if (ctx->pc == 0x2EFA10u) {
        ctx->pc = 0x2EFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA0Cu;
        // 0x2efa10: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA14u;
        goto label_2efa14;
    }
    ctx->pc = 0x2EFA0Cu;
    {
        const bool branch_taken_0x2efa0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA0Cu;
        // 0x2efa10: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa0c) {
            ctx->pc = 0x2EFA40u;
            goto label_2efa40;
        }
    }
    ctx->pc = 0x2EFA14u;
label_2efa14:
    // 0x2efa14: 0x8e2411e0  lw          $a0, 0x11E0($s1)
    ctx->pc = 0x2efa14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_2efa18:
    // 0x2efa18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2efa18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2efa1c:
    // 0x2efa1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2efa1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efa20:
    // 0x2efa20: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2efa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2efa24:
    // 0x2efa24: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2efa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2efa28:
    // 0x2efa28: 0x40f809  jalr        $v0
label_2efa2c:
    if (ctx->pc == 0x2EFA2Cu) {
        ctx->pc = 0x2EFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA28u;
        // 0x2efa2c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA30u;
        goto label_2efa30;
    }
    ctx->pc = 0x2EFA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EFA30u);
        ctx->pc = 0x2EFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA28u;
        // 0x2efa2c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFA28u, 0x2EFA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EFA30u;
label_2efa30:
    // 0x2efa30: 0xc0bf868  jal         func_2FE1A0
label_2efa34:
    if (ctx->pc == 0x2EFA34u) {
        ctx->pc = 0x2EFA38u;
        goto label_2efa38;
    }
    ctx->pc = 0x2EFA30u;
    SET_GPR_U32(ctx, 31, 0x2EFA38u);
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EFA30u, 0x2EFA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFA38u;
label_2efa38:
    // 0x2efa38: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2efa3c:
    if (ctx->pc == 0x2EFA3Cu) {
        ctx->pc = 0x2EFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA38u;
        // 0x2efa3c: 0xae2005e4  sw          $zero, 0x5E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1508), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA40u;
        goto label_2efa40;
    }
    ctx->pc = 0x2EFA38u;
    {
        const bool branch_taken_0x2efa38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efa38) {
            ctx->pc = 0x2EFA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFA38u;
            // 0x2efa3c: 0xae2005e4  sw          $zero, 0x5E4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1508), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFA40u;
            goto label_2efa40;
        }
    }
    ctx->pc = 0x2EFA40u;
label_2efa40:
    // 0x2efa40: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2efa40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2efa44:
    // 0x2efa44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2efa44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2efa48:
    // 0x2efa48: 0x10000009  b           . + 4 + (0x9 << 2)
label_2efa4c:
    if (ctx->pc == 0x2EFA4Cu) {
        ctx->pc = 0x2EFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA48u;
        // 0x2efa4c: 0xe6201288  swc1        $f0, 0x1288($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4744), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA50u;
        goto label_2efa50;
    }
    ctx->pc = 0x2EFA48u;
    {
        const bool branch_taken_0x2efa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA48u;
        // 0x2efa4c: 0xe6201288  swc1        $f0, 0x1288($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa48) {
            ctx->pc = 0x2EFA70u;
            goto label_2efa70;
        }
    }
    ctx->pc = 0x2EFA50u;
label_2efa50:
    // 0x2efa50: 0x10000007  b           . + 4 + (0x7 << 2)
label_2efa54:
    if (ctx->pc == 0x2EFA54u) {
        ctx->pc = 0x2EFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA50u;
        // 0x2efa54: 0xae201288  sw          $zero, 0x1288($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA58u;
        goto label_2efa58;
    }
    ctx->pc = 0x2EFA50u;
    {
        const bool branch_taken_0x2efa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA50u;
        // 0x2efa54: 0xae201288  sw          $zero, 0x1288($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa50) {
            ctx->pc = 0x2EFA70u;
            goto label_2efa70;
        }
    }
    ctx->pc = 0x2EFA58u;
label_2efa58:
    // 0x2efa58: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2efa58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2efa5c:
    // 0x2efa5c: 0x0  nop
    ctx->pc = 0x2efa5cu;
    // NOP
label_2efa60:
    // 0x2efa60: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2efa60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2efa64:
    // 0x2efa64: 0x0  nop
    ctx->pc = 0x2efa64u;
    // NOP
label_2efa68:
    // 0x2efa68: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2efa6c:
    if (ctx->pc == 0x2EFA6Cu) {
        ctx->pc = 0x2EFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA68u;
        // 0x2efa6c: 0xe6211288  swc1        $f1, 0x1288($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4744), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA70u;
        goto label_2efa70;
    }
    ctx->pc = 0x2EFA68u;
    {
        const bool branch_taken_0x2efa68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2efa68) {
            ctx->pc = 0x2EFA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFA68u;
            // 0x2efa6c: 0xe6211288  swc1        $f1, 0x1288($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4744), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFA70u;
            goto label_2efa70;
        }
    }
    ctx->pc = 0x2EFA70u;
label_2efa70:
    // 0x2efa70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2efa70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2efa74:
    // 0x2efa74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2efa74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2efa78:
    // 0x2efa78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2efa78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2efa7c:
    // 0x2efa7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2efa7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2efa80:
    // 0x2efa80: 0x3e00008  jr          $ra
label_2efa84:
    if (ctx->pc == 0x2EFA84u) {
        ctx->pc = 0x2EFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA80u;
        // 0x2efa84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFA88u;
        goto label_fallthrough_0x2efa80;
    }
    ctx->pc = 0x2EFA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFA80u;
        // 0x2efa84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2efa80:
    ctx->pc = 0x2EFA88u;
}
