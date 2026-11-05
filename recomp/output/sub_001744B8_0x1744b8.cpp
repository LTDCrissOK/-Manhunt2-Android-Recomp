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

// Function: sub_001744B8
// Address: 0x1744b8 - 0x174540
void sub_001744B8_0x1744b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001744B8_0x1744b8");
#endif

    switch (ctx->pc) {
        case 0x1744b8u: goto label_1744b8;
        case 0x1744bcu: goto label_1744bc;
        case 0x1744c0u: goto label_1744c0;
        case 0x1744c4u: goto label_1744c4;
        case 0x1744c8u: goto label_1744c8;
        case 0x1744ccu: goto label_1744cc;
        case 0x1744d0u: goto label_1744d0;
        case 0x1744d4u: goto label_1744d4;
        case 0x1744d8u: goto label_1744d8;
        case 0x1744dcu: goto label_1744dc;
        case 0x1744e0u: goto label_1744e0;
        case 0x1744e4u: goto label_1744e4;
        case 0x1744e8u: goto label_1744e8;
        case 0x1744ecu: goto label_1744ec;
        case 0x1744f0u: goto label_1744f0;
        case 0x1744f4u: goto label_1744f4;
        case 0x1744f8u: goto label_1744f8;
        case 0x1744fcu: goto label_1744fc;
        case 0x174500u: goto label_174500;
        case 0x174504u: goto label_174504;
        case 0x174508u: goto label_174508;
        case 0x17450cu: goto label_17450c;
        case 0x174510u: goto label_174510;
        case 0x174514u: goto label_174514;
        case 0x174518u: goto label_174518;
        case 0x17451cu: goto label_17451c;
        case 0x174520u: goto label_174520;
        case 0x174524u: goto label_174524;
        case 0x174528u: goto label_174528;
        case 0x17452cu: goto label_17452c;
        case 0x174530u: goto label_174530;
        case 0x174534u: goto label_174534;
        case 0x174538u: goto label_174538;
        case 0x17453cu: goto label_17453c;
        default: break;
    }

    ctx->pc = 0x1744b8u;

label_1744b8:
    // 0x1744b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1744b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1744bc:
    // 0x1744bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1744bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1744c0:
    // 0x1744c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1744c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1744c4:
    // 0x1744c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1744c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1744c8:
    // 0x1744c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1744c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1744cc:
    // 0x1744cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1744ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1744d0:
    // 0x1744d0: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x1744d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_1744d4:
    // 0x1744d4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_1744d8:
    if (ctx->pc == 0x1744D8u) {
        ctx->pc = 0x1744D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744D4u;
        // 0x1744d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1744DCu;
        goto label_1744dc;
    }
    ctx->pc = 0x1744D4u;
    {
        const bool branch_taken_0x1744d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1744D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744D4u;
        // 0x1744d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1744d4) {
            ctx->pc = 0x174528u;
            goto label_174528;
        }
    }
    ctx->pc = 0x1744DCu;
label_1744dc:
    // 0x1744dc: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x1744dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1744e0:
    // 0x1744e0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1744e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1744e4:
    // 0x1744e4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1744e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1744e8:
    // 0x1744e8: 0x40f809  jalr        $v0
label_1744ec:
    if (ctx->pc == 0x1744ECu) {
        ctx->pc = 0x1744F0u;
        goto label_1744f0;
    }
    ctx->pc = 0x1744E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1744F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1744E8u, 0x1744F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1744F0u;
label_1744f0:
    // 0x1744f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1744f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1744f4:
    // 0x1744f4: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
label_1744f8:
    if (ctx->pc == 0x1744F8u) {
        ctx->pc = 0x1744F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744F4u;
        // 0x1744f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1744FCu;
        goto label_1744fc;
    }
    ctx->pc = 0x1744F4u;
    {
        const bool branch_taken_0x1744f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1744f4) {
            ctx->pc = 0x1744F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1744F4u;
            // 0x1744f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17452Cu;
            goto label_17452c;
        }
    }
    ctx->pc = 0x1744FCu;
label_1744fc:
    // 0x1744fc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1744fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_174500:
    // 0x174500: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x174500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_174504:
    // 0x174504: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x174504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_174508:
    // 0x174508: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x174508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17450c:
    // 0x17450c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x17450cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_174510:
    // 0x174510: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_174514:
    if (ctx->pc == 0x174514u) {
        ctx->pc = 0x174514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174510u;
        // 0x174514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174518u;
        goto label_174518;
    }
    ctx->pc = 0x174510u;
    {
        const bool branch_taken_0x174510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174510u;
        // 0x174514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174510) {
            ctx->pc = 0x174528u;
            goto label_174528;
        }
    }
    ctx->pc = 0x174518u;
label_174518:
    // 0x174518: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x174518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17451c:
    // 0x17451c: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x17451cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_174520:
    // 0x174520: 0xc04fb7a  jal         func_13EDE8
label_174524:
    if (ctx->pc == 0x174524u) {
        ctx->pc = 0x174524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174520u;
        // 0x174524: 0x2407000d  addiu       $a3, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174528u;
        goto label_174528;
    }
    ctx->pc = 0x174520u;
    SET_GPR_U32(ctx, 31, 0x174528u);
    ctx->pc = 0x174524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174520u;
    // 0x174524: 0x2407000d  addiu       $a3, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EDE8u, 0x174520u, 0x174528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174528u;
label_174528:
    // 0x174528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17452c:
    // 0x17452c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17452cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_174530:
    // 0x174530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174534:
    // 0x174534: 0x3e00008  jr          $ra
label_174538:
    if (ctx->pc == 0x174538u) {
        ctx->pc = 0x174538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174534u;
        // 0x174538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17453Cu;
        goto label_17453c;
    }
    ctx->pc = 0x174534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174534u;
        // 0x174538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17453Cu;
label_17453c:
    // 0x17453c: 0x0  nop
    ctx->pc = 0x17453cu;
    // NOP
    ctx->pc = 0x174540u;
}
