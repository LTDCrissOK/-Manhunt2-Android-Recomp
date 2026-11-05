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

// Function: sub_00294500
// Address: 0x294500 - 0x2945c8
void sub_00294500_0x294500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294500_0x294500");
#endif

    switch (ctx->pc) {
        case 0x294528u: goto label_294528;
        case 0x294538u: goto label_294538;
        case 0x294548u: goto label_294548;
        case 0x294558u: goto label_294558;
        case 0x294568u: goto label_294568;
        case 0x294578u: goto label_294578;
        case 0x294588u: goto label_294588;
        case 0x294598u: goto label_294598;
        default: break;
    }

    ctx->pc = 0x294500u;

label_294500:
    // 0x294500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294504: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x294504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x294508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29450c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29450cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x294510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294518: 0x14a20021  bne         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x294518u;
    {
        const bool branch_taken_0x294518 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x29451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294518u;
        // 0x29451c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294518) {
            ctx->pc = 0x2945A0u;
            goto label_2945a0;
        }
    }
    ctx->pc = 0x294520u;
    // 0x294520: 0xc0a5140  jal         func_294500
    ctx->pc = 0x294520u;
    SET_GPR_U32(ctx, 31, 0x294528u);
    ctx->pc = 0x294524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294520u;
    // 0x294524: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294500u;
    goto label_294500;
    ctx->pc = 0x294528u;
label_294528:
    // 0x294528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29452c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29452cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294530: 0xc0a5140  jal         func_294500
    ctx->pc = 0x294530u;
    SET_GPR_U32(ctx, 31, 0x294538u);
    ctx->pc = 0x294534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294530u;
    // 0x294534: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294500u;
    goto label_294500;
    ctx->pc = 0x294538u;
label_294538:
    // 0x294538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29453c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29453cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x294540: 0xc0a5140  jal         func_294500
    ctx->pc = 0x294540u;
    SET_GPR_U32(ctx, 31, 0x294548u);
    ctx->pc = 0x294544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294540u;
    // 0x294544: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294500u;
    goto label_294500;
    ctx->pc = 0x294548u;
label_294548:
    // 0x294548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29454c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x29454cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x294550: 0xc0a5140  jal         func_294500
    ctx->pc = 0x294550u;
    SET_GPR_U32(ctx, 31, 0x294558u);
    ctx->pc = 0x294554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294550u;
    // 0x294554: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294500u;
    goto label_294500;
    ctx->pc = 0x294558u;
label_294558:
    // 0x294558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29455c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29455cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294560: 0xc0a5140  jal         func_294500
    ctx->pc = 0x294560u;
    SET_GPR_U32(ctx, 31, 0x294568u);
    ctx->pc = 0x294564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294560u;
    // 0x294564: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294500u;
    goto label_294500;
    ctx->pc = 0x294568u;
label_294568:
    // 0x294568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29456c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29456cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x294570: 0xc0a5140  jal         func_294500
    ctx->pc = 0x294570u;
    SET_GPR_U32(ctx, 31, 0x294578u);
    ctx->pc = 0x294574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294570u;
    // 0x294574: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294500u;
    goto label_294500;
    ctx->pc = 0x294578u;
label_294578:
    // 0x294578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29457c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29457cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x294580: 0xc0a5140  jal         func_294500
    ctx->pc = 0x294580u;
    SET_GPR_U32(ctx, 31, 0x294588u);
    ctx->pc = 0x294584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294580u;
    // 0x294584: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294500u;
    goto label_294500;
    ctx->pc = 0x294588u;
label_294588:
    // 0x294588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29458c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29458cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294590: 0xc0a5140  jal         func_294500
    ctx->pc = 0x294590u;
    SET_GPR_U32(ctx, 31, 0x294598u);
    ctx->pc = 0x294594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294590u;
    // 0x294594: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294500u;
    goto label_294500;
    ctx->pc = 0x294598u;
label_294598:
    // 0x294598: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x294598u;
    {
        const bool branch_taken_0x294598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294598u;
        // 0x29459c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294598) {
            ctx->pc = 0x2945B8u;
            goto label_2945b8;
        }
    }
    ctx->pc = 0x2945A0u;
label_2945a0:
    // 0x2945a0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2945a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2945a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2945a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2945a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2945a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2945ac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2945ACu;
    {
        const bool branch_taken_0x2945ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2945ac) {
            ctx->pc = 0x2945B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2945ACu;
            // 0x2945b0: 0xa0510000  sb          $s1, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2945B4u;
            goto label_2945b4;
        }
    }
    ctx->pc = 0x2945B4u;
label_2945b4:
    // 0x2945b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2945b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2945b8:
    // 0x2945b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2945b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2945bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2945bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2945c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2945C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2945C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945C0u;
        // 0x2945c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2945C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2945C8u;
}
