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

// Function: sub_00385848
// Address: 0x385848 - 0x385b00
void sub_00385848_0x385848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385848_0x385848");
#endif

    switch (ctx->pc) {
        case 0x385a10u: goto label_385a10;
        default: break;
    }

    ctx->pc = 0x385848u;

    // 0x385848: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x385848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38584c: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x38584cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x385850: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x385850u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x385854: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x385854u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x385858: 0x8cea0160  lw          $t2, 0x160($a3)
    ctx->pc = 0x385858u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x38585c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38585cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385860: 0x39220003  xori        $v0, $t1, 0x3
    ctx->pc = 0x385860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)3);
    // 0x385864: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x385864u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385868: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x385868u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38586c: 0x154e0044  bne         $t2, $t6, . + 4 + (0x44 << 2)
    ctx->pc = 0x38586Cu;
    {
        const bool branch_taken_0x38586c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        ctx->pc = 0x385870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38586Cu;
        // 0x385870: 0x182580a  movz        $t3, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38586c) {
            ctx->pc = 0x385980u;
            goto label_385980;
        }
    }
    ctx->pc = 0x385874u;
    // 0x385874: 0x8ce200b4  lw          $v0, 0xB4($a3)
    ctx->pc = 0x385874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x385878: 0x8ce300b8  lw          $v1, 0xB8($a3)
    ctx->pc = 0x385878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x38587c: 0x8ce501d4  lw          $a1, 0x1D4($a3)
    ctx->pc = 0x38587cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 468)));
    // 0x385880: 0x8ce601e4  lw          $a2, 0x1E4($a3)
    ctx->pc = 0x385880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x385884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x385884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x385888: 0x8ce401f4  lw          $a0, 0x1F4($a3)
    ctx->pc = 0x385888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 500)));
    // 0x38588c: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x38588cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x385890: 0xace501d0  sw          $a1, 0x1D0($a3)
    ctx->pc = 0x385890u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 5));
    // 0x385894: 0xace601e0  sw          $a2, 0x1E0($a3)
    ctx->pc = 0x385894u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 6));
    // 0x385898: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385898u;
    {
        const bool branch_taken_0x385898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385898u;
        // 0x38589c: 0xace401f0  sw          $a0, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385898) {
            ctx->pc = 0x3858ACu;
            goto label_3858ac;
        }
    }
    ctx->pc = 0x3858A0u;
    // 0x3858a0: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x3858a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
    // 0x3858a4: 0xace001b8  sw          $zero, 0x1B8($a3)
    ctx->pc = 0x3858a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
    // 0x3858a8: 0xace001b4  sw          $zero, 0x1B4($a3)
    ctx->pc = 0x3858a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 436), GPR_U32(ctx, 0));
label_3858ac:
    // 0x3858ac: 0x8ce200fc  lw          $v0, 0xFC($a3)
    ctx->pc = 0x3858acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 252)));
    // 0x3858b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3858B0u;
    {
        const bool branch_taken_0x3858b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3858b0) {
            ctx->pc = 0x3858B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3858B0u;
            // 0x3858b4: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3858C8u;
            goto label_3858c8;
        }
    }
    ctx->pc = 0x3858B8u;
    // 0x3858b8: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x3858b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x3858bc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3858BCu;
    {
        const bool branch_taken_0x3858bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3858bc) {
            ctx->pc = 0x3858C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3858BCu;
            // 0x3858c0: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3858F0u;
            goto label_3858f0;
        }
    }
    ctx->pc = 0x3858C4u;
    // 0x3858c4: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x3858c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_3858c8:
    // 0x3858c8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3858C8u;
    {
        const bool branch_taken_0x3858c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3858c8) {
            ctx->pc = 0x3858CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3858C8u;
            // 0x3858cc: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3858F0u;
            goto label_3858f0;
        }
    }
    ctx->pc = 0x3858D0u;
    // 0x3858d0: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x3858d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x3858d4: 0x8ce401d8  lw          $a0, 0x1D8($a3)
    ctx->pc = 0x3858d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x3858d8: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x3858d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x3858dc: 0x8ce301e8  lw          $v1, 0x1E8($a3)
    ctx->pc = 0x3858dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x3858e0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x3858e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x3858e4: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x3858e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x3858e8: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x3858e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x3858ec: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x3858ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
label_3858f0:
    // 0x3858f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3858f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3858f4: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3858F4u;
    {
        const bool branch_taken_0x3858f4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x3858F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3858F4u;
        // 0x3858f8: 0xace001b8  sw          $zero, 0x1B8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3858f4) {
            ctx->pc = 0x385924u;
            goto label_385924;
        }
    }
    ctx->pc = 0x3858FCu;
    // 0x3858fc: 0x8ce301c8  lw          $v1, 0x1C8($a3)
    ctx->pc = 0x3858fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x385900: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x385900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x385904: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x385904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x385908: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x385908u;
    {
        const bool branch_taken_0x385908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x385908) {
            ctx->pc = 0x38590Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385908u;
            // 0x38590c: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38596Cu;
            goto label_38596c;
        }
    }
    ctx->pc = 0x385910u;
    // 0x385910: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x385910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x385914: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x385914u;
    {
        const bool branch_taken_0x385914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385914u;
        // 0x385918: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385914) {
            ctx->pc = 0x385A38u;
            goto label_385a38;
        }
    }
    ctx->pc = 0x38591Cu;
    // 0x38591c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x38591Cu;
    {
        const bool branch_taken_0x38591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38591Cu;
        // 0x385920: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38591c) {
            ctx->pc = 0x38596Cu;
            goto label_38596c;
        }
    }
    ctx->pc = 0x385924u;
label_385924:
    // 0x385924: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x385924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x385928: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x385928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38592c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x38592cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x385930: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x385930u;
    {
        const bool branch_taken_0x385930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x385930) {
            ctx->pc = 0x385934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385930u;
            // 0x385934: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38594Cu;
            goto label_38594c;
        }
    }
    ctx->pc = 0x385938u;
    // 0x385938: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x385938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x38593c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x38593cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x385940: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x385940u;
    {
        const bool branch_taken_0x385940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x385940) {
            ctx->pc = 0x385944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385940u;
            // 0x385944: 0x8ce201dc  lw          $v0, 0x1DC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385958u;
            goto label_385958;
        }
    }
    ctx->pc = 0x385948u;
    // 0x385948: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x385948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_38594c:
    // 0x38594c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x38594Cu;
    {
        const bool branch_taken_0x38594c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38594Cu;
        // 0x385950: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38594c) {
            ctx->pc = 0x385A38u;
            goto label_385a38;
        }
    }
    ctx->pc = 0x385954u;
    // 0x385954: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x385954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_385958:
    // 0x385958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x385958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38595c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x38595cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x385960: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x385960u;
    {
        const bool branch_taken_0x385960 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x385964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385960u;
        // 0x385964: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385960) {
            ctx->pc = 0x385A38u;
            goto label_385a38;
        }
    }
    ctx->pc = 0x385968u;
    // 0x385968: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x385968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
label_38596c:
    // 0x38596c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x38596cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385970: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x385970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x385974: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x385974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x385978: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x385978u;
    {
        const bool branch_taken_0x385978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385978u;
        // 0x38597c: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385978) {
            ctx->pc = 0x385A34u;
            goto label_385a34;
        }
    }
    ctx->pc = 0x385980u;
label_385980:
    // 0x385980: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x385980u;
    {
        const bool branch_taken_0x385980 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x385980) {
            ctx->pc = 0x385984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385980u;
            // 0x385984: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3859BCu;
            goto label_3859bc;
        }
    }
    ctx->pc = 0x385988u;
    // 0x385988: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x385988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x38598c: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x38598cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x385990: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x385990u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
    // 0x385994: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x385994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x385998: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x385998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x38599c: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x38599cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
    // 0x3859a0: 0x8ce601e8  lw          $a2, 0x1E8($a3)
    ctx->pc = 0x3859a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x3859a4: 0x8ce201ec  lw          $v0, 0x1EC($a3)
    ctx->pc = 0x3859a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x3859a8: 0xace401c8  sw          $a0, 0x1C8($a3)
    ctx->pc = 0x3859a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 4));
    // 0x3859ac: 0xace301d8  sw          $v1, 0x1D8($a3)
    ctx->pc = 0x3859acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 3));
    // 0x3859b0: 0xace201e8  sw          $v0, 0x1E8($a3)
    ctx->pc = 0x3859b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 488), GPR_U32(ctx, 2));
    // 0x3859b4: 0xace601ec  sw          $a2, 0x1EC($a3)
    ctx->pc = 0x3859b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 492), GPR_U32(ctx, 6));
    // 0x3859b8: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x3859b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_3859bc:
    // 0x3859bc: 0x8ce401dc  lw          $a0, 0x1DC($a3)
    ctx->pc = 0x3859bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x3859c0: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x3859c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x3859c4: 0xace201d0  sw          $v0, 0x1D0($a3)
    ctx->pc = 0x3859c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 2));
    // 0x3859c8: 0xace401e0  sw          $a0, 0x1E0($a3)
    ctx->pc = 0x3859c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
    // 0x3859cc: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x3859CCu;
    {
        const bool branch_taken_0x3859cc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x3859D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859CCu;
        // 0x3859d0: 0xace301f0  sw          $v1, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3859cc) {
            ctx->pc = 0x3859E8u;
            goto label_3859e8;
        }
    }
    ctx->pc = 0x3859D4u;
    // 0x3859d4: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x3859D4u;
    {
        const bool branch_taken_0x3859d4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x3859d4) {
            ctx->pc = 0x3859D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3859D4u;
            // 0x3859d8: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385A34u;
            goto label_385a34;
        }
    }
    ctx->pc = 0x3859DCu;
    // 0x3859dc: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x3859dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x3859e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3859E0u;
    {
        const bool branch_taken_0x3859e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3859E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859E0u;
        // 0x3859e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3859e0) {
            ctx->pc = 0x385A24u;
            goto label_385a24;
        }
    }
    ctx->pc = 0x3859E8u;
label_3859e8:
    // 0x3859e8: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x3859e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x3859ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3859ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3859f0: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x3859f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x3859f4: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x3859F4u;
    {
        const bool branch_taken_0x3859f4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x3859F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859F4u;
        // 0x3859f8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3859f4) {
            ctx->pc = 0x385A30u;
            goto label_385a30;
        }
    }
    ctx->pc = 0x3859FCu;
    // 0x3859fc: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3859FCu;
    {
        const bool branch_taken_0x3859fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3859fc) {
            ctx->pc = 0x385A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3859FCu;
            // 0x385a00: 0x8ce201d8  lw          $v0, 0x1D8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385A14u;
            goto label_385a14;
        }
    }
    ctx->pc = 0x385A04u;
    // 0x385a04: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x385a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x385a08: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x385A08u;
    {
        const bool branch_taken_0x385a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x385a08) {
            ctx->pc = 0x385A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385A08u;
            // 0x385a0c: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385A34u;
            goto label_385a34;
        }
    }
    ctx->pc = 0x385A10u;
label_385a10:
    // 0x385a10: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x385a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_385a14:
    // 0x385a14: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x385a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x385a18: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x385A18u;
    {
        const bool branch_taken_0x385a18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x385A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A18u;
        // 0x385a1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a18) {
            ctx->pc = 0x385A38u;
            goto label_385a38;
        }
    }
    ctx->pc = 0x385A20u;
    // 0x385a20: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x385a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_385a24:
    // 0x385a24: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x385a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x385a28: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x385A28u;
    {
        const bool branch_taken_0x385a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x385A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A28u;
        // 0x385a2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a28) {
            ctx->pc = 0x385A38u;
            goto label_385a38;
        }
    }
    ctx->pc = 0x385A30u;
label_385a30:
    // 0x385a30: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x385a30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385a34:
    // 0x385a34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x385a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_385a38:
    // 0x385a38: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x385A38u;
    {
        const bool branch_taken_0x385a38 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x385A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A38u;
        // 0x385a3c: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a38) {
            ctx->pc = 0x385A6Cu;
            goto label_385a6c;
        }
    }
    ctx->pc = 0x385A40u;
    // 0x385a40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x385A40u;
    {
        const bool branch_taken_0x385a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A40u;
        // 0x385a44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a40) {
            ctx->pc = 0x385A58u;
            goto label_385a58;
        }
    }
    ctx->pc = 0x385A48u;
    // 0x385a48: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x385A48u;
    {
        const bool branch_taken_0x385a48 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x385a48) {
            ctx->pc = 0x385A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385A48u;
            // 0x385a4c: 0x8ce801e0  lw          $t0, 0x1E0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385A70u;
            goto label_385a70;
        }
    }
    ctx->pc = 0x385A50u;
    // 0x385a50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x385A50u;
    {
        const bool branch_taken_0x385a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A50u;
        // 0x385a54: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a50) {
            ctx->pc = 0x385A74u;
            goto label_385a74;
        }
    }
    ctx->pc = 0x385A58u;
label_385a58:
    // 0x385a58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x385a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x385a5c: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385A5Cu;
    {
        const bool branch_taken_0x385a5c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x385a5c) {
            ctx->pc = 0x385A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385A5Cu;
            // 0x385a60: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385A70u;
            goto label_385a70;
        }
    }
    ctx->pc = 0x385A64u;
    // 0x385a64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x385A64u;
    {
        const bool branch_taken_0x385a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A64u;
        // 0x385a68: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a64) {
            ctx->pc = 0x385A74u;
            goto label_385a74;
        }
    }
    ctx->pc = 0x385A6Cu;
label_385a6c:
    // 0x385a6c: 0x8ce801f0  lw          $t0, 0x1F0($a3)
    ctx->pc = 0x385a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
label_385a70:
    // 0x385a70: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x385a70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_385a74:
    // 0x385a74: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x385a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385a78: 0xdce30838  ld          $v1, 0x838($a3)
    ctx->pc = 0x385a78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2104)));
    // 0x385a7c: 0x8ce40160  lw          $a0, 0x160($a3)
    ctx->pc = 0x385a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x385a80: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x385a80u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x385a84: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x385a84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
    // 0x385a88: 0xdce30840  ld          $v1, 0x840($a3)
    ctx->pc = 0x385a88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2112)));
    // 0x385a8c: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x385a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x385a90: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x385a90u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x385a94: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x385a94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x385a98: 0x8ce3014c  lw          $v1, 0x14C($a3)
    ctx->pc = 0x385a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x385a9c: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x385a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x385aa0: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x385aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
    // 0x385aa4: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x385aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
    // 0x385aa8: 0x8ce30188  lw          $v1, 0x188($a3)
    ctx->pc = 0x385aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x385aac: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x385aacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
    // 0x385ab0: 0x8ce40194  lw          $a0, 0x194($a3)
    ctx->pc = 0x385ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x385ab4: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x385ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x385ab8: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x385ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
    // 0x385abc: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x385abcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
    // 0x385ac0: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x385ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x385ac4: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x385ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
    // 0x385ac8: 0x8ce301a4  lw          $v1, 0x1A4($a3)
    ctx->pc = 0x385ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x385acc: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x385accu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x385ad0: 0x8ce401a8  lw          $a0, 0x1A8($a3)
    ctx->pc = 0x385ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
    // 0x385ad4: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x385ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x385ad8: 0x8ce301ac  lw          $v1, 0x1AC($a3)
    ctx->pc = 0x385ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 428)));
    // 0x385adc: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x385adcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x385ae0: 0x8ce401b0  lw          $a0, 0x1B0($a3)
    ctx->pc = 0x385ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 432)));
    // 0x385ae4: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x385ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
    // 0x385ae8: 0x8ce30158  lw          $v1, 0x158($a3)
    ctx->pc = 0x385ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x385aec: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x385aecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
    // 0x385af0: 0x8ce4015c  lw          $a0, 0x15C($a3)
    ctx->pc = 0x385af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x385af4: 0x3e00008  jr          $ra
    ctx->pc = 0x385AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AF4u;
        // 0x385af8: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385AFCu;
    // 0x385afc: 0x0  nop
    ctx->pc = 0x385afcu;
    // NOP
    ctx->pc = 0x385b00u;
}
