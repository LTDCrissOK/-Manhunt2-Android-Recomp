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

// Function: sub_002AF6D8
// Address: 0x2af6d8 - 0x2af7f0
void sub_002AF6D8_0x2af6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF6D8_0x2af6d8");
#endif

    switch (ctx->pc) {
        case 0x2af700u: goto label_2af700;
        case 0x2af7c8u: goto label_2af7c8;
        default: break;
    }

    ctx->pc = 0x2af6d8u;

    // 0x2af6d8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2af6d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af6dc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2af6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2af6e0: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2AF6E0u;
    {
        const bool branch_taken_0x2af6e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6E0u;
        // 0x2af6e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af6e0) {
            ctx->pc = 0x2AF720u;
            goto label_2af720;
        }
    }
    ctx->pc = 0x2AF6E8u;
    // 0x2af6e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2af6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2af6ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF6ECu;
    {
        const bool branch_taken_0x2af6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6ECu;
        // 0x2af6f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af6ec) {
            ctx->pc = 0x2AF700u;
            goto label_2af700;
        }
    }
    ctx->pc = 0x2AF6F4u;
    // 0x2af6f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AF6F4u;
    {
        const bool branch_taken_0x2af6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6F4u;
        // 0x2af6f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af6f4) {
            ctx->pc = 0x2AF720u;
            goto label_2af720;
        }
    }
    ctx->pc = 0x2AF6FCu;
    // 0x2af6fc: 0x0  nop
    ctx->pc = 0x2af6fcu;
    // NOP
label_2af700:
    // 0x2af700: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x2af700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2af704: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF704u;
    {
        const bool branch_taken_0x2af704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF704u;
        // 0x2af708: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af704) {
            ctx->pc = 0x2AF720u;
            goto label_2af720;
        }
    }
    ctx->pc = 0x2AF70Cu;
    // 0x2af70c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2af70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2af710: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2af710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af714: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AF714u;
    {
        const bool branch_taken_0x2af714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af714) {
            ctx->pc = 0x2AF718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF714u;
            // 0x2af718: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af700;
        }
    }
    ctx->pc = 0x2AF71Cu;
    // 0x2af71c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2af71cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2af720:
    // 0x2af720: 0x4e00031  bltz        $a3, . + 4 + (0x31 << 2)
    ctx->pc = 0x2AF720u;
    {
        const bool branch_taken_0x2af720 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2AF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF720u;
        // 0x2af724: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af720) {
            ctx->pc = 0x2AF7E8u;
            goto label_2af7e8;
        }
    }
    ctx->pc = 0x2AF728u;
    // 0x2af728: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2af728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2af72c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2af72cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af730: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2af730u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af734: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2af734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2af738: 0x8c83aa88  lw          $v1, -0x5578($a0)
    ctx->pc = 0x2af738u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x2af73c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2AF73Cu;
    {
        const bool branch_taken_0x2af73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF73Cu;
        // 0x2af740: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af73c) {
            ctx->pc = 0x2AF770u;
            goto label_2af770;
        }
    }
    ctx->pc = 0x2AF744u;
    // 0x2af744: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2af744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2af748: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2af748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2af74c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2af74cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2464u));
    // 0x2af750: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2af750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2af754: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF754u;
    {
        const bool branch_taken_0x2af754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF754u;
        // 0x2af758: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af754) {
            ctx->pc = 0x2AF768u;
            goto label_2af768;
        }
    }
    ctx->pc = 0x2AF75Cu;
    // 0x2af75c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2af75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2af760: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2af760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2af764: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x2af764u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2af768:
    // 0x2af768: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF768u;
    {
        const bool branch_taken_0x2af768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF768u;
        // 0x2af76c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af768) {
            ctx->pc = 0x2AF774u;
            goto label_2af774;
        }
    }
    ctx->pc = 0x2AF770u;
label_2af770:
    // 0x2af770: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2af770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af774:
    // 0x2af774: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF774u;
    {
        const bool branch_taken_0x2af774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF774u;
        // 0x2af778: 0x1051821  addu        $v1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af774) {
            ctx->pc = 0x2AF788u;
            goto label_2af788;
        }
    }
    ctx->pc = 0x2AF77Cu;
    // 0x2af77c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af780: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2AF780u;
    {
        const bool branch_taken_0x2af780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF780u;
        // 0x2af784: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af780) {
            ctx->pc = 0x2AF7E0u;
            goto label_2af7e0;
        }
    }
    ctx->pc = 0x2AF788u;
label_2af788:
    // 0x2af788: 0x8d42aa88  lw          $v0, -0x5578($t2)
    ctx->pc = 0x2af788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294945416)));
    // 0x2af78c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF78Cu;
    {
        const bool branch_taken_0x2af78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF78Cu;
        // 0x2af790: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af78c) {
            ctx->pc = 0x2AF7B4u;
            goto label_2af7b4;
        }
    }
    ctx->pc = 0x2AF794u;
    // 0x2af794: 0x24422450  addiu       $v0, $v0, 0x2450
    ctx->pc = 0x2af794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9296));
    // 0x2af798: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2af798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2af79c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2af79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2af7a0: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF7A0u;
    {
        const bool branch_taken_0x2af7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2AF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7A0u;
        // 0x2af7a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af7a0) {
            ctx->pc = 0x2AF7ACu;
            goto label_2af7ac;
        }
    }
    ctx->pc = 0x2AF7A8u;
    // 0x2af7a8: 0x4382b  sltu        $a3, $zero, $a0
    ctx->pc = 0x2af7a8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2af7ac:
    // 0x2af7ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF7ACu;
    {
        const bool branch_taken_0x2af7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7ACu;
        // 0x2af7b0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af7ac) {
            ctx->pc = 0x2AF7B8u;
            goto label_2af7b8;
        }
    }
    ctx->pc = 0x2AF7B4u;
label_2af7b4:
    // 0x2af7b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2af7b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2af7b8:
    // 0x2af7b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF7B8u;
    {
        const bool branch_taken_0x2af7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af7b8) {
            ctx->pc = 0x2AF7E0u;
            goto label_2af7e0;
        }
    }
    ctx->pc = 0x2AF7C0u;
    // 0x2af7c0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF7C0u;
    {
        const bool branch_taken_0x2af7c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7C0u;
        // 0x2af7c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af7c0) {
            ctx->pc = 0x2AF7E0u;
            goto label_2af7e0;
        }
    }
    ctx->pc = 0x2AF7C8u;
label_2af7c8:
    // 0x2af7c8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2af7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2af7cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2af7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2af7d0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2af7d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2af7d4: 0x0  nop
    ctx->pc = 0x2af7d4u;
    // NOP
    // 0x2af7d8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AF7D8u;
    {
        const bool branch_taken_0x2af7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7D8u;
        // 0x2af7dc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af7d8) {
            ctx->pc = 0x2AF7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af7c8;
        }
    }
    ctx->pc = 0x2AF7E0u;
label_2af7e0:
    // 0x2af7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7E0u;
        // 0x2af7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF7E8u;
label_2af7e8:
    // 0x2af7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7E8u;
        // 0x2af7ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF7F0u;
}
