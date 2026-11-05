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

// Function: sub_001DD9B8
// Address: 0x1dd9b8 - 0x1ddc60
void sub_001DD9B8_0x1dd9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD9B8_0x1dd9b8");
#endif

    switch (ctx->pc) {
        case 0x1dda28u: goto label_1dda28;
        case 0x1dda78u: goto label_1dda78;
        case 0x1ddb00u: goto label_1ddb00;
        case 0x1ddb78u: goto label_1ddb78;
        case 0x1ddb9cu: goto label_1ddb9c;
        case 0x1ddbfcu: goto label_1ddbfc;
        default: break;
    }

    ctx->pc = 0x1dd9b8u;

    // 0x1dd9b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1dd9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1dd9bc: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1dd9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1dd9c0: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1dd9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1dd9c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9c8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1dd9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1dd9cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1dd9ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9d0: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1dd9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1dd9d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dd9d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9d8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1dd9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1dd9dc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1dd9dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9e0: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1dd9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1dd9e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1dd9e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9e8: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1dd9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x1dd9ec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1dd9ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9f0: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x1dd9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x1dd9f4: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1dd9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1dd9f8: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1dd9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1dd9fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1dd9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dda00: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1dda00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1dda04: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDA04u;
    {
        const bool branch_taken_0x1dda04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA04u;
        // 0x1dda08: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda04) {
            ctx->pc = 0x1DDA10u;
            goto label_1dda10;
        }
    }
    ctx->pc = 0x1DDA0Cu;
    // 0x1dda0c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1dda0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dda10:
    // 0x1dda10: 0x12000085  beqz        $s0, . + 4 + (0x85 << 2)
    ctx->pc = 0x1DDA10u;
    {
        const bool branch_taken_0x1dda10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA10u;
        // 0x1dda14: 0x3c170010  lui         $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda10) {
            ctx->pc = 0x1DDC28u;
            goto label_1ddc28;
        }
    }
    ctx->pc = 0x1DDA18u;
    // 0x1dda18: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x1dda18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1dda1c: 0x36f70001  ori         $s7, $s7, 0x1
    ctx->pc = 0x1dda1cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)1);
    // 0x1dda20: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1dda20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dda24: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x1dda24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_1dda28:
    // 0x1dda28: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1dda28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1dda2c: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x1dda2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x490100u));
    // 0x1dda30: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dda30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dda34: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1dda34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1dda38: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DDA38u;
    {
        const bool branch_taken_0x1dda38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA38u;
        // 0x1dda3c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda38) {
            ctx->pc = 0x1DDA78u;
            goto label_1dda78;
        }
    }
    ctx->pc = 0x1DDA40u;
    // 0x1dda40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1dda40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1dda44: 0x8c4391ac  lw          $v1, -0x6E54($v0)
    ctx->pc = 0x1dda44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91ACu));
    // 0x1dda48: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDA48u;
    {
        const bool branch_taken_0x1dda48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dda48) {
            ctx->pc = 0x1DDA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDA48u;
            // 0x1dda4c: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDA60u;
            goto label_1dda60;
        }
    }
    ctx->pc = 0x1DDA50u;
    // 0x1dda50: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1dda50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1dda54: 0x1057001e  beq         $v0, $s7, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DDA54u;
    {
        const bool branch_taken_0x1dda54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x1DDA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA54u;
        // 0x1dda58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda54) {
            ctx->pc = 0x1DDAD0u;
            goto label_1ddad0;
        }
    }
    ctx->pc = 0x1DDA5Cu;
    // 0x1dda5c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1dda5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1dda60:
    // 0x1dda60: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1dda60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1dda64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDA64u;
    {
        const bool branch_taken_0x1dda64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA64u;
        // 0x1dda68: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda64) {
            ctx->pc = 0x1DDA80u;
            goto label_1dda80;
        }
    }
    ctx->pc = 0x1DDA6Cu;
    // 0x1dda6c: 0x8c4391c4  lw          $v1, -0x6E3C($v0)
    ctx->pc = 0x1dda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939076)));
    // 0x1dda70: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DDA70u;
    {
        const bool branch_taken_0x1dda70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA70u;
        // 0x1dda74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda70) {
            ctx->pc = 0x1DDAD0u;
            goto label_1ddad0;
        }
    }
    ctx->pc = 0x1DDA78u;
label_1dda78:
    // 0x1dda78: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1DDA78u;
    {
        const bool branch_taken_0x1dda78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA78u;
        // 0x1dda7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda78) {
            ctx->pc = 0x1DDAD0u;
            goto label_1ddad0;
        }
    }
    ctx->pc = 0x1DDA80u;
label_1dda80:
    // 0x1dda80: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1dda80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1dda84: 0x8c4391c8  lw          $v1, -0x6E38($v0)
    ctx->pc = 0x1dda84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91C8u));
    // 0x1dda88: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DDA88u;
    {
        const bool branch_taken_0x1dda88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA88u;
        // 0x1dda8c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda88) {
            ctx->pc = 0x1DDA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dda78;
        }
    }
    ctx->pc = 0x1DDA90u;
    // 0x1dda90: 0x8c4391b8  lw          $v1, -0x6E48($v0)
    ctx->pc = 0x1dda90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939064)));
    // 0x1dda94: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1DDA94u;
    {
        const bool branch_taken_0x1dda94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA94u;
        // 0x1dda98: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda94) {
            ctx->pc = 0x1DDACCu;
            goto label_1ddacc;
        }
    }
    ctx->pc = 0x1DDA9Cu;
    // 0x1dda9c: 0x84a20054  lh          $v0, 0x54($a1)
    ctx->pc = 0x1dda9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1ddaa0: 0x24637ee0  addiu       $v1, $v1, 0x7EE0
    ctx->pc = 0x1ddaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
    // 0x1ddaa4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ddaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ddaa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddaac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDAACu;
    {
        const bool branch_taken_0x1ddaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDAACu;
        // 0x1ddab0: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddaac) {
            ctx->pc = 0x1DDACCu;
            goto label_1ddacc;
        }
    }
    ctx->pc = 0x1DDAB4u;
    // 0x1ddab4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1ddab4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddab8: 0x24632828  addiu       $v1, $v1, 0x2828
    ctx->pc = 0x1ddab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
    // 0x1ddabc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddac0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ddac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddac4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDAC4u;
    {
        const bool branch_taken_0x1ddac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDAC4u;
        // 0x1ddac8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddac4) {
            ctx->pc = 0x1DDAD0u;
            goto label_1ddad0;
        }
    }
    ctx->pc = 0x1DDACCu;
label_1ddacc:
    // 0x1ddacc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ddaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddad0:
    // 0x1ddad0: 0x1080004b  beqz        $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1DDAD0u;
    {
        const bool branch_taken_0x1ddad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDAD0u;
        // 0x1ddad4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddad0) {
            ctx->pc = 0x1DDC00u;
            goto label_1ddc00;
        }
    }
    ctx->pc = 0x1DDAD8u;
    // 0x1ddad8: 0x8c4391b4  lw          $v1, -0x6E4C($v0)
    ctx->pc = 0x1ddad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939060)));
    // 0x1ddadc: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1DDADCu;
    {
        const bool branch_taken_0x1ddadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDADCu;
        // 0x1ddae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddadc) {
            ctx->pc = 0x1DDBECu;
            goto label_1ddbec;
        }
    }
    ctx->pc = 0x1DDAE4u;
    // 0x1ddae4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ddae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ddae8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1ddae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1ddaec: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1ddaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1ddaf0: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DDAF0u;
    {
        const bool branch_taken_0x1ddaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddaf0) {
            ctx->pc = 0x1DDAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDAF0u;
            // 0x1ddaf4: 0x8e0300c4  lw          $v1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDB84u;
            goto label_1ddb84;
        }
    }
    ctx->pc = 0x1DDAF8u;
    // 0x1ddaf8: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x1DDAF8u;
    SET_GPR_U32(ctx, 31, 0x1DDB00u);
    ctx->pc = 0x1DDAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDAF8u;
    // 0x1ddafc: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x1DDAF8u, 0x1DDB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB00u;
label_1ddb00:
    // 0x1ddb00: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DDB00u;
    {
        const bool branch_taken_0x1ddb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB00u;
        // 0x1ddb04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb00) {
            ctx->pc = 0x1DDB80u;
            goto label_1ddb80;
        }
    }
    ctx->pc = 0x1DDB08u;
    // 0x1ddb08: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1ddb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1ddb0c: 0x93aa0000  lbu         $t2, 0x0($sp)
    ctx->pc = 0x1ddb0cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddb10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ddb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb14: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1ddb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1ddb18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ddb18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb1c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ddb1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb20: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1ddb20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddb24: 0xa3aa0050  sb          $t2, 0x50($sp)
    ctx->pc = 0x1ddb24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 10));
    // 0x1ddb28: 0x25090040  addiu       $t1, $t0, 0x40
    ctx->pc = 0x1ddb28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x1ddb2c: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x1ddb2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1ddb30: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1ddb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1ddb34: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1ddb34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x1ddb38: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1ddb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1ddb3c: 0xc5000030  lwc1        $f0, 0x30($t0)
    ctx->pc = 0x1ddb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddb40: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ddb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ddb44: 0xc5010040  lwc1        $f1, 0x40($t0)
    ctx->pc = 0x1ddb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddb48: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1ddb48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ddb4c: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x1ddb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddb50: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x1ddb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x1ddb54: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x1ddb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddb58: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x1ddb58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x1ddb5c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x1ddb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddb60: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x1ddb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x1ddb64: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x1ddb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1ddb68: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1ddb68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddb6c: 0x79020070  lq          $v0, 0x70($t0)
    ctx->pc = 0x1ddb6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 112)));
    // 0x1ddb70: 0xc0789d6  jal         func_1E2758
    ctx->pc = 0x1DDB70u;
    SET_GPR_U32(ctx, 31, 0x1DDB78u);
    ctx->pc = 0x1DDB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDB70u;
    // 0x1ddb74: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2758u, 0x1DDB70u, 0x1DDB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB78u;
label_1ddb78:
    // 0x1ddb78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DDB78u;
    {
        const bool branch_taken_0x1ddb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddb78) {
            ctx->pc = 0x1DDB9Cu;
            goto label_1ddb9c;
        }
    }
    ctx->pc = 0x1DDB80u;
label_1ddb80:
    // 0x1ddb80: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1ddb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1ddb84:
    // 0x1ddb84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ddb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ddb88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb8c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ddb8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddb90: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1ddb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1ddb94: 0xc0789d6  jal         func_1E2758
    ctx->pc = 0x1DDB94u;
    SET_GPR_U32(ctx, 31, 0x1DDB9Cu);
    ctx->pc = 0x1DDB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDB94u;
    // 0x1ddb98: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2758u, 0x1DDB94u, 0x1DDB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB9Cu;
label_1ddb9c:
    // 0x1ddb9c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DDB9Cu;
    {
        const bool branch_taken_0x1ddb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB9Cu;
        // 0x1ddba0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb9c) {
            ctx->pc = 0x1DDC00u;
            goto label_1ddc00;
        }
    }
    ctx->pc = 0x1DDBA4u;
    // 0x1ddba4: 0xae340024  sw          $s4, 0x24($s1)
    ctx->pc = 0x1ddba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 20));
    // 0x1ddba8: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1ddba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1ddbac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ddbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ddbb0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1ddbb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddbb4: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1ddbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1ddbb8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1ddbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1ddbbc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ddbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddbc0: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x1ddbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x1ddbc4: 0xae24002c  sw          $a0, 0x2C($s1)
    ctx->pc = 0x1ddbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 4));
    // 0x1ddbc8: 0xae3e0030  sw          $fp, 0x30($s1)
    ctx->pc = 0x1ddbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
    // 0x1ddbcc: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x1ddbccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x1ddbd0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1ddbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ddbd4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1ddbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1ddbd8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ddbd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ddbdc: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1ddbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1ddbe0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1ddbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddbe4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDBE4u;
    {
        const bool branch_taken_0x1ddbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBE4u;
        // 0x1ddbe8: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddbe4) {
            ctx->pc = 0x1DDC00u;
            goto label_1ddc00;
        }
    }
    ctx->pc = 0x1DDBECu;
label_1ddbec:
    // 0x1ddbec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ddbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddbf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ddbf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddbf4: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x1DDBF4u;
    SET_GPR_U32(ctx, 31, 0x1DDBFCu);
    ctx->pc = 0x1DDBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDBF4u;
    // 0x1ddbf8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6E0u, 0x1DDBF4u, 0x1DDBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDBFCu;
label_1ddbfc:
    // 0x1ddbfc: 0x3c2b00b  movn        $s6, $fp, $v0
    ctx->pc = 0x1ddbfcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 30));
label_1ddc00:
    // 0x1ddc00: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1ddc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ddc04: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1ddc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1ddc08: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDC08u;
    {
        const bool branch_taken_0x1ddc08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1DDC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC08u;
        // 0x1ddc0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc08) {
            ctx->pc = 0x1DDC20u;
            goto label_1ddc20;
        }
    }
    ctx->pc = 0x1DDC10u;
    // 0x1ddc10: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1ddc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1ddc14: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDC14u;
    {
        const bool branch_taken_0x1ddc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1DDC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC14u;
        // 0x1ddc18: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc14) {
            ctx->pc = 0x1DDC20u;
            goto label_1ddc20;
        }
    }
    ctx->pc = 0x1DDC1Cu;
    // 0x1ddc1c: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1ddc1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ddc20:
    // 0x1ddc20: 0x5600ff81  bnel        $s0, $zero, . + 4 + (-0x7F << 2)
    ctx->pc = 0x1DDC20u;
    {
        const bool branch_taken_0x1ddc20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc20) {
            ctx->pc = 0x1DDC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDC20u;
            // 0x1ddc24: 0x8e0300b8  lw          $v1, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dda28;
        }
    }
    ctx->pc = 0x1DDC28u;
label_1ddc28:
    // 0x1ddc28: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1ddc28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc2c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1ddc2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ddc30: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1ddc30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ddc34: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1ddc34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ddc38: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1ddc38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ddc3c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1ddc3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ddc40: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1ddc40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ddc44: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1ddc44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ddc48: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x1ddc48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ddc4c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1ddc4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ddc50: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1ddc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1ddc54: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC54u;
        // 0x1ddc58: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDC5Cu;
    // 0x1ddc5c: 0x0  nop
    ctx->pc = 0x1ddc5cu;
    // NOP
    ctx->pc = 0x1ddc60u;
}
