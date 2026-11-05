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

// Function: sub_002945C8
// Address: 0x2945c8 - 0x294690
void sub_002945C8_0x2945c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002945C8_0x2945c8");
#endif

    switch (ctx->pc) {
        case 0x2945f0u: goto label_2945f0;
        case 0x294600u: goto label_294600;
        case 0x294610u: goto label_294610;
        case 0x294620u: goto label_294620;
        case 0x294630u: goto label_294630;
        case 0x294640u: goto label_294640;
        case 0x294650u: goto label_294650;
        case 0x294660u: goto label_294660;
        default: break;
    }

    ctx->pc = 0x2945c8u;

label_2945c8:
    // 0x2945c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2945c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2945cc: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x2945ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2945d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2945d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2945d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2945d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2945d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2945d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2945dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2945dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2945e0: 0x14a20021  bne         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2945E0u;
    {
        const bool branch_taken_0x2945e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2945E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945E0u;
        // 0x2945e4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2945e0) {
            ctx->pc = 0x294668u;
            goto label_294668;
        }
    }
    ctx->pc = 0x2945E8u;
    // 0x2945e8: 0xc0a5172  jal         func_2945C8
    ctx->pc = 0x2945E8u;
    SET_GPR_U32(ctx, 31, 0x2945F0u);
    ctx->pc = 0x2945ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2945E8u;
    // 0x2945ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2945C8u;
    goto label_2945c8;
    ctx->pc = 0x2945F0u;
label_2945f0:
    // 0x2945f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2945f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2945f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2945f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2945f8: 0xc0a5172  jal         func_2945C8
    ctx->pc = 0x2945F8u;
    SET_GPR_U32(ctx, 31, 0x294600u);
    ctx->pc = 0x2945FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2945F8u;
    // 0x2945fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2945C8u;
    goto label_2945c8;
    ctx->pc = 0x294600u;
label_294600:
    // 0x294600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294604: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x294604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x294608: 0xc0a5172  jal         func_2945C8
    ctx->pc = 0x294608u;
    SET_GPR_U32(ctx, 31, 0x294610u);
    ctx->pc = 0x29460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294608u;
    // 0x29460c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2945C8u;
    goto label_2945c8;
    ctx->pc = 0x294610u;
label_294610:
    // 0x294610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294614: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x294614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x294618: 0xc0a5172  jal         func_2945C8
    ctx->pc = 0x294618u;
    SET_GPR_U32(ctx, 31, 0x294620u);
    ctx->pc = 0x29461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294618u;
    // 0x29461c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2945C8u;
    goto label_2945c8;
    ctx->pc = 0x294620u;
label_294620:
    // 0x294620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294624: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x294624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294628: 0xc0a5172  jal         func_2945C8
    ctx->pc = 0x294628u;
    SET_GPR_U32(ctx, 31, 0x294630u);
    ctx->pc = 0x29462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294628u;
    // 0x29462c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2945C8u;
    goto label_2945c8;
    ctx->pc = 0x294630u;
label_294630:
    // 0x294630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294634: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x294634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x294638: 0xc0a5172  jal         func_2945C8
    ctx->pc = 0x294638u;
    SET_GPR_U32(ctx, 31, 0x294640u);
    ctx->pc = 0x29463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294638u;
    // 0x29463c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2945C8u;
    goto label_2945c8;
    ctx->pc = 0x294640u;
label_294640:
    // 0x294640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294644: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x294644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x294648: 0xc0a5172  jal         func_2945C8
    ctx->pc = 0x294648u;
    SET_GPR_U32(ctx, 31, 0x294650u);
    ctx->pc = 0x29464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294648u;
    // 0x29464c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2945C8u;
    goto label_2945c8;
    ctx->pc = 0x294650u;
label_294650:
    // 0x294650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294654: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x294654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294658: 0xc0a5172  jal         func_2945C8
    ctx->pc = 0x294658u;
    SET_GPR_U32(ctx, 31, 0x294660u);
    ctx->pc = 0x29465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294658u;
    // 0x29465c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2945C8u;
    goto label_2945c8;
    ctx->pc = 0x294660u;
label_294660:
    // 0x294660: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x294660u;
    {
        const bool branch_taken_0x294660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294660u;
        // 0x294664: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294660) {
            ctx->pc = 0x294680u;
            goto label_294680;
        }
    }
    ctx->pc = 0x294668u;
label_294668:
    // 0x294668: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x294668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29466c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x29466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x294670: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x294670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294674: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x294674u;
    {
        const bool branch_taken_0x294674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294674) {
            ctx->pc = 0x294678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294674u;
            // 0x294678: 0xa0510001  sb          $s1, 0x1($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29467Cu;
            goto label_29467c;
        }
    }
    ctx->pc = 0x29467Cu;
label_29467c:
    // 0x29467c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29467cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294680:
    // 0x294680: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x294680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x294684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294688: 0x3e00008  jr          $ra
    ctx->pc = 0x294688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294688u;
        // 0x29468c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294690u;
}
