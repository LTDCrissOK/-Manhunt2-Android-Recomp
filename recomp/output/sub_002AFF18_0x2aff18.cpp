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

// Function: sub_002AFF18
// Address: 0x2aff18 - 0x2b0028
void sub_002AFF18_0x2aff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFF18_0x2aff18");
#endif

    switch (ctx->pc) {
        case 0x2b0000u: goto label_2b0000;
        case 0x2b0010u: goto label_2b0010;
        default: break;
    }

    ctx->pc = 0x2aff18u;

    // 0x2aff18: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2aff18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aff1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aff20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aff24: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2aff24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2aff28: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x2aff28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2aff2c: 0x8c630594  lw          $v1, 0x594($v1)
    ctx->pc = 0x2aff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1428)));
    // 0x2aff30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aff34: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2AFF34u;
    {
        const bool branch_taken_0x2aff34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF34u;
        // 0x2aff38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff34) {
            ctx->pc = 0x2AFFF0u;
            goto label_2afff0;
        }
    }
    ctx->pc = 0x2AFF3Cu;
    // 0x2aff3c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2aff3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2aff40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AFF40u;
    {
        const bool branch_taken_0x2aff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF40u;
        // 0x2aff44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff40) {
            ctx->pc = 0x2AFF58u;
            goto label_2aff58;
        }
    }
    ctx->pc = 0x2AFF48u;
    // 0x2aff48: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AFF48u;
    {
        const bool branch_taken_0x2aff48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF48u;
        // 0x2aff4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff48) {
            ctx->pc = 0x2AFF60u;
            goto label_2aff60;
        }
    }
    ctx->pc = 0x2AFF50u;
    // 0x2aff50: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2AFF50u;
    {
        const bool branch_taken_0x2aff50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF50u;
        // 0x2aff54: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff50) {
            ctx->pc = 0x2B001Cu;
            goto label_2b001c;
        }
    }
    ctx->pc = 0x2AFF58u;
label_2aff58:
    // 0x2aff58: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2AFF58u;
    {
        const bool branch_taken_0x2aff58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AFF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF58u;
        // 0x2aff5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff58) {
            ctx->pc = 0x2B0018u;
            goto label_2b0018;
        }
    }
    ctx->pc = 0x2AFF60u;
label_2aff60:
    // 0x2aff60: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AFF60u;
    {
        const bool branch_taken_0x2aff60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF60u;
        // 0x2aff64: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff60) {
            ctx->pc = 0x2AFFA8u;
            goto label_2affa8;
        }
    }
    ctx->pc = 0x2AFF68u;
    // 0x2aff68: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2aff68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2aff6c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2aff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2aff70: 0x8c64aa88  lw          $a0, -0x5578($v1)
    ctx->pc = 0x2aff70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x2aff74: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AFF74u;
    {
        const bool branch_taken_0x2aff74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF74u;
        // 0x2aff78: 0x8c450668  lw          $a1, 0x668($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff74) {
            ctx->pc = 0x2AFF94u;
            goto label_2aff94;
        }
    }
    ctx->pc = 0x2AFF7Cu;
    // 0x2aff7c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2aff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2aff80: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2aff80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2aff84: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2aff84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2468u));
    // 0x2aff88: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2aff88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2aff8c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFF8Cu;
    {
        const bool branch_taken_0x2aff8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aff8c) {
            ctx->pc = 0x2AFF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFF8Cu;
            // 0x2aff90: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFF9Cu;
            goto label_2aff9c;
        }
    }
    ctx->pc = 0x2AFF94u;
label_2aff94:
    // 0x2aff94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AFF94u;
    {
        const bool branch_taken_0x2aff94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF94u;
        // 0x2aff98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff94) {
            ctx->pc = 0x2AFFA0u;
            goto label_2affa0;
        }
    }
    ctx->pc = 0x2AFF9Cu;
label_2aff9c:
    // 0x2aff9c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2aff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2affa0:
    // 0x2affa0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2AFFA0u;
    {
        const bool branch_taken_0x2affa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFA0u;
        // 0x2affa4: 0x2402b  sltu        $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2affa0) {
            ctx->pc = 0x2B0014u;
            goto label_2b0014;
        }
    }
    ctx->pc = 0x2AFFA8u;
label_2affa8:
    // 0x2affa8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2affa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2affac: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2affacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2affb0: 0x8c64aa88  lw          $a0, -0x5578($v1)
    ctx->pc = 0x2affb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x2affb4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AFFB4u;
    {
        const bool branch_taken_0x2affb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFB4u;
        // 0x2affb8: 0x8c450668  lw          $a1, 0x668($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2affb4) {
            ctx->pc = 0x2AFFE4u;
            goto label_2affe4;
        }
    }
    ctx->pc = 0x2AFFBCu;
    // 0x2affbc: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2affbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2affc0: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2affc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2affc4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2affc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2464u));
    // 0x2affc8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2affc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2affcc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AFFCCu;
    {
        const bool branch_taken_0x2affcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFCCu;
        // 0x2affd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2affcc) {
            ctx->pc = 0x2AFFE8u;
            goto label_2affe8;
        }
    }
    ctx->pc = 0x2AFFD4u;
    // 0x2affd4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2affd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2affd8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2affd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2affdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AFFDCu;
    {
        const bool branch_taken_0x2affdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFDCu;
        // 0x2affe0: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2affdc) {
            ctx->pc = 0x2AFFE8u;
            goto label_2affe8;
        }
    }
    ctx->pc = 0x2AFFE4u;
label_2affe4:
    // 0x2affe4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2affe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2affe8:
    // 0x2affe8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AFFE8u;
    {
        const bool branch_taken_0x2affe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFE8u;
        // 0x2affec: 0x4402b  sltu        $t0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2affe8) {
            ctx->pc = 0x2B0014u;
            goto label_2b0014;
        }
    }
    ctx->pc = 0x2AFFF0u;
label_2afff0:
    // 0x2afff0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AFFF0u;
    {
        const bool branch_taken_0x2afff0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFF0u;
        // 0x2afff4: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afff0) {
            ctx->pc = 0x2B0008u;
            goto label_2b0008;
        }
    }
    ctx->pc = 0x2AFFF8u;
    // 0x2afff8: 0xc0abe06  jal         func_2AF818
    ctx->pc = 0x2AFFF8u;
    SET_GPR_U32(ctx, 31, 0x2B0000u);
    ctx->pc = 0x2AFFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFFF8u;
    // 0x2afffc: 0x8c440668  lw          $a0, 0x668($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF818u, 0x2AFFF8u, 0x2B0000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0000u;
label_2b0000:
    // 0x2b0000: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0000u;
    {
        const bool branch_taken_0x2b0000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0000u;
        // 0x2b0004: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0000) {
            ctx->pc = 0x2B0014u;
            goto label_2b0014;
        }
    }
    ctx->pc = 0x2B0008u;
label_2b0008:
    // 0x2b0008: 0xc0abe12  jal         func_2AF848
    ctx->pc = 0x2B0008u;
    SET_GPR_U32(ctx, 31, 0x2B0010u);
    ctx->pc = 0x2B000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0008u;
    // 0x2b000c: 0x8c440668  lw          $a0, 0x668($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF848u, 0x2B0008u, 0x2B0010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0010u;
label_2b0010:
    // 0x2b0010: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2b0010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0014:
    // 0x2b0014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b0018:
    // 0x2b0018: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2b0018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2b001c:
    // 0x2b001c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B001Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B001Cu;
        // 0x2b0020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B001Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0024u;
    // 0x2b0024: 0x0  nop
    ctx->pc = 0x2b0024u;
    // NOP
    ctx->pc = 0x2b0028u;
}
