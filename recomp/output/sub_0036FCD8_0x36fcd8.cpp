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

// Function: sub_0036FCD8
// Address: 0x36fcd8 - 0x36fefc
void sub_0036FCD8_0x36fcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FCD8_0x36fcd8");
#endif

    switch (ctx->pc) {
        case 0x36fcd8u: goto label_36fcd8;
        case 0x36fcdcu: goto label_36fcdc;
        case 0x36fce0u: goto label_36fce0;
        case 0x36fce4u: goto label_36fce4;
        case 0x36fce8u: goto label_36fce8;
        case 0x36fcecu: goto label_36fcec;
        case 0x36fcf0u: goto label_36fcf0;
        case 0x36fcf4u: goto label_36fcf4;
        case 0x36fcf8u: goto label_36fcf8;
        case 0x36fcfcu: goto label_36fcfc;
        case 0x36fd00u: goto label_36fd00;
        case 0x36fd04u: goto label_36fd04;
        case 0x36fd08u: goto label_36fd08;
        case 0x36fd0cu: goto label_36fd0c;
        case 0x36fd10u: goto label_36fd10;
        case 0x36fd14u: goto label_36fd14;
        case 0x36fd18u: goto label_36fd18;
        case 0x36fd1cu: goto label_36fd1c;
        case 0x36fd20u: goto label_36fd20;
        case 0x36fd24u: goto label_36fd24;
        case 0x36fd28u: goto label_36fd28;
        case 0x36fd2cu: goto label_36fd2c;
        case 0x36fd30u: goto label_36fd30;
        case 0x36fd34u: goto label_36fd34;
        case 0x36fd38u: goto label_36fd38;
        case 0x36fd3cu: goto label_36fd3c;
        case 0x36fd40u: goto label_36fd40;
        case 0x36fd44u: goto label_36fd44;
        case 0x36fd48u: goto label_36fd48;
        case 0x36fd4cu: goto label_36fd4c;
        case 0x36fd50u: goto label_36fd50;
        case 0x36fd54u: goto label_36fd54;
        case 0x36fd58u: goto label_36fd58;
        case 0x36fd5cu: goto label_36fd5c;
        case 0x36fd60u: goto label_36fd60;
        case 0x36fd64u: goto label_36fd64;
        case 0x36fd68u: goto label_36fd68;
        case 0x36fd6cu: goto label_36fd6c;
        case 0x36fd70u: goto label_36fd70;
        case 0x36fd74u: goto label_36fd74;
        case 0x36fd78u: goto label_36fd78;
        case 0x36fd7cu: goto label_36fd7c;
        case 0x36fd80u: goto label_36fd80;
        case 0x36fd84u: goto label_36fd84;
        case 0x36fd88u: goto label_36fd88;
        case 0x36fd8cu: goto label_36fd8c;
        case 0x36fd90u: goto label_36fd90;
        case 0x36fd94u: goto label_36fd94;
        case 0x36fd98u: goto label_36fd98;
        case 0x36fd9cu: goto label_36fd9c;
        case 0x36fda0u: goto label_36fda0;
        case 0x36fda4u: goto label_36fda4;
        case 0x36fda8u: goto label_36fda8;
        case 0x36fdacu: goto label_36fdac;
        case 0x36fdb0u: goto label_36fdb0;
        case 0x36fdb4u: goto label_36fdb4;
        case 0x36fdb8u: goto label_36fdb8;
        case 0x36fdbcu: goto label_36fdbc;
        case 0x36fdc0u: goto label_36fdc0;
        case 0x36fdc4u: goto label_36fdc4;
        case 0x36fdc8u: goto label_36fdc8;
        case 0x36fdccu: goto label_36fdcc;
        case 0x36fdd0u: goto label_36fdd0;
        case 0x36fdd4u: goto label_36fdd4;
        case 0x36fdd8u: goto label_36fdd8;
        case 0x36fddcu: goto label_36fddc;
        case 0x36fde0u: goto label_36fde0;
        case 0x36fde4u: goto label_36fde4;
        case 0x36fde8u: goto label_36fde8;
        case 0x36fdecu: goto label_36fdec;
        case 0x36fdf0u: goto label_36fdf0;
        case 0x36fdf4u: goto label_36fdf4;
        case 0x36fdf8u: goto label_36fdf8;
        case 0x36fdfcu: goto label_36fdfc;
        case 0x36fe00u: goto label_36fe00;
        case 0x36fe04u: goto label_36fe04;
        case 0x36fe08u: goto label_36fe08;
        case 0x36fe0cu: goto label_36fe0c;
        case 0x36fe10u: goto label_36fe10;
        case 0x36fe14u: goto label_36fe14;
        case 0x36fe18u: goto label_36fe18;
        case 0x36fe1cu: goto label_36fe1c;
        case 0x36fe20u: goto label_36fe20;
        case 0x36fe24u: goto label_36fe24;
        case 0x36fe28u: goto label_36fe28;
        case 0x36fe2cu: goto label_36fe2c;
        case 0x36fe30u: goto label_36fe30;
        case 0x36fe34u: goto label_36fe34;
        case 0x36fe38u: goto label_36fe38;
        case 0x36fe3cu: goto label_36fe3c;
        case 0x36fe40u: goto label_36fe40;
        case 0x36fe44u: goto label_36fe44;
        case 0x36fe48u: goto label_36fe48;
        case 0x36fe4cu: goto label_36fe4c;
        case 0x36fe50u: goto label_36fe50;
        case 0x36fe54u: goto label_36fe54;
        case 0x36fe58u: goto label_36fe58;
        case 0x36fe5cu: goto label_36fe5c;
        case 0x36fe60u: goto label_36fe60;
        case 0x36fe64u: goto label_36fe64;
        case 0x36fe68u: goto label_36fe68;
        case 0x36fe6cu: goto label_36fe6c;
        case 0x36fe70u: goto label_36fe70;
        case 0x36fe74u: goto label_36fe74;
        case 0x36fe78u: goto label_36fe78;
        case 0x36fe7cu: goto label_36fe7c;
        case 0x36fe80u: goto label_36fe80;
        case 0x36fe84u: goto label_36fe84;
        case 0x36fe88u: goto label_36fe88;
        case 0x36fe8cu: goto label_36fe8c;
        case 0x36fe90u: goto label_36fe90;
        case 0x36fe94u: goto label_36fe94;
        case 0x36fe98u: goto label_36fe98;
        case 0x36fe9cu: goto label_36fe9c;
        case 0x36fea0u: goto label_36fea0;
        case 0x36fea4u: goto label_36fea4;
        case 0x36fea8u: goto label_36fea8;
        case 0x36feacu: goto label_36feac;
        case 0x36feb0u: goto label_36feb0;
        case 0x36feb4u: goto label_36feb4;
        case 0x36feb8u: goto label_36feb8;
        case 0x36febcu: goto label_36febc;
        case 0x36fec0u: goto label_36fec0;
        case 0x36fec4u: goto label_36fec4;
        case 0x36fec8u: goto label_36fec8;
        case 0x36feccu: goto label_36fecc;
        case 0x36fed0u: goto label_36fed0;
        case 0x36fed4u: goto label_36fed4;
        case 0x36fed8u: goto label_36fed8;
        case 0x36fedcu: goto label_36fedc;
        case 0x36fee0u: goto label_36fee0;
        case 0x36fee4u: goto label_36fee4;
        case 0x36fee8u: goto label_36fee8;
        case 0x36feecu: goto label_36feec;
        case 0x36fef0u: goto label_36fef0;
        case 0x36fef4u: goto label_36fef4;
        case 0x36fef8u: goto label_36fef8;
        default: break;
    }

    ctx->pc = 0x36fcd8u;

label_36fcd8:
    // 0x36fcd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36fcd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36fcdc:
    // 0x36fcdc: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_36fce0:
    if (ctx->pc == 0x36FCE0u) {
        ctx->pc = 0x36FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCDCu;
        // 0x36fce0: 0x24a7ffff  addiu       $a3, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FCE4u;
        goto label_36fce4;
    }
    ctx->pc = 0x36FCDCu;
    {
        const bool branch_taken_0x36fcdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCDCu;
        // 0x36fce0: 0x24a7ffff  addiu       $a3, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fcdc) {
            ctx->pc = 0x36FD14u;
            goto label_36fd14;
        }
    }
    ctx->pc = 0x36FCE4u;
label_36fce4:
    // 0x36fce4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x36fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_36fce8:
    // 0x36fce8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x36fce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_36fcec:
    // 0x36fcec: 0x0  nop
    ctx->pc = 0x36fcecu;
    // NOP
label_36fcf0:
    // 0x36fcf0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x36fcf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_36fcf4:
    // 0x36fcf4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x36fcf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_36fcf8:
    // 0x36fcf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x36fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_36fcfc:
    // 0x36fcfc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x36fcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_36fd00:
    // 0x36fd00: 0x61a80  sll         $v1, $a2, 10
    ctx->pc = 0x36fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 10));
label_36fd04:
    // 0x36fd04: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x36fd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_36fd08:
    // 0x36fd08: 0x61182  srl         $v0, $a2, 6
    ctx->pc = 0x36fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
label_36fd0c:
    // 0x36fd0c: 0x14e5fff8  bne         $a3, $a1, . + 4 + (-0x8 << 2)
label_36fd10:
    if (ctx->pc == 0x36FD10u) {
        ctx->pc = 0x36FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD0Cu;
        // 0x36fd10: 0xc23026  xor         $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FD14u;
        goto label_36fd14;
    }
    ctx->pc = 0x36FD0Cu;
    {
        const bool branch_taken_0x36fd0c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x36FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD0Cu;
        // 0x36fd10: 0xc23026  xor         $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fd0c) {
            ctx->pc = 0x36FCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36fcf0;
        }
    }
    ctx->pc = 0x36FD14u;
label_36fd14:
    // 0x36fd14: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x36fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_36fd18:
    // 0x36fd18: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x36fd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_36fd1c:
    // 0x36fd1c: 0x61ac2  srl         $v1, $a2, 11
    ctx->pc = 0x36fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 11));
label_36fd20:
    // 0x36fd20: 0xc33026  xor         $a2, $a2, $v1
    ctx->pc = 0x36fd20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
label_36fd24:
    // 0x36fd24: 0x613c0  sll         $v0, $a2, 15
    ctx->pc = 0x36fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
label_36fd28:
    // 0x36fd28: 0x3e00008  jr          $ra
label_36fd2c:
    if (ctx->pc == 0x36FD2Cu) {
        ctx->pc = 0x36FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD28u;
        // 0x36fd2c: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FD30u;
        goto label_36fd30;
    }
    ctx->pc = 0x36FD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD28u;
        // 0x36fd2c: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FD30u;
label_36fd30:
    // 0x36fd30: 0x3c02dead  lui         $v0, 0xDEAD
    ctx->pc = 0x36fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57005 << 16));
label_36fd34:
    // 0x36fd34: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x36fd34u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36fd38:
    // 0x36fd38: 0x3442beef  ori         $v0, $v0, 0xBEEF
    ctx->pc = 0x36fd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48879);
label_36fd3c:
    // 0x36fd3c: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x36fd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_36fd40:
    // 0x36fd40: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x36fd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_36fd44:
    // 0x36fd44: 0x1c66021  addu        $t4, $t6, $a2
    ctx->pc = 0x36fd44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
label_36fd48:
    // 0x36fd48: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x36fd48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_36fd4c:
    // 0x36fd4c: 0x14600071  bnez        $v1, . + 4 + (0x71 << 2)
label_36fd50:
    if (ctx->pc == 0x36FD50u) {
        ctx->pc = 0x36FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD4Cu;
        // 0x36fd50: 0x180502d  daddu       $t2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FD54u;
        goto label_36fd54;
    }
    ctx->pc = 0x36FD4Cu;
    {
        const bool branch_taken_0x36fd4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD4Cu;
        // 0x36fd50: 0x180502d  daddu       $t2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fd4c) {
            ctx->pc = 0x36FF14u;
            return;
        }
    }
    ctx->pc = 0x36FD54u;
label_36fd54:
    // 0x36fd54: 0x2dc2000d  sltiu       $v0, $t6, 0xD
    ctx->pc = 0x36fd54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_36fd58:
    // 0x36fd58: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_36fd5c:
    if (ctx->pc == 0x36FD5Cu) {
        ctx->pc = 0x36FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD58u;
        // 0x36fd5c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FD60u;
        goto label_36fd60;
    }
    ctx->pc = 0x36FD58u;
    {
        const bool branch_taken_0x36fd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD58u;
        // 0x36fd5c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fd58) {
            ctx->pc = 0x36FE18u;
            goto label_36fe18;
        }
    }
    ctx->pc = 0x36FD60u;
label_36fd60:
    // 0x36fd60: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x36fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_36fd64:
    // 0x36fd64: 0x25cefff4  addiu       $t6, $t6, -0xC
    ctx->pc = 0x36fd64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967284));
label_36fd68:
    // 0x36fd68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x36fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fd6c:
    // 0x36fd6c: 0x2dc5000d  sltiu       $a1, $t6, 0xD
    ctx->pc = 0x36fd6cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_36fd70:
    // 0x36fd70: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x36fd70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_36fd74:
    // 0x36fd74: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x36fd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_36fd78:
    // 0x36fd78: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x36fd78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_36fd7c:
    // 0x36fd7c: 0xc1100  sll         $v0, $t4, 4
    ctx->pc = 0x36fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_36fd80:
    // 0x36fd80: 0xc1f02  srl         $v1, $t4, 28
    ctx->pc = 0x36fd80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 28));
label_36fd84:
    // 0x36fd84: 0x14c5023  subu        $t2, $t2, $t4
    ctx->pc = 0x36fd84u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_36fd88:
    // 0x36fd88: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x36fd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_36fd8c:
    // 0x36fd8c: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x36fd8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_36fd90:
    // 0x36fd90: 0x1425026  xor         $t2, $t2, $v0
    ctx->pc = 0x36fd90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 2));
label_36fd94:
    // 0x36fd94: 0x18b6021  addu        $t4, $t4, $t3
    ctx->pc = 0x36fd94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_36fd98:
    // 0x36fd98: 0xa1682  srl         $v0, $t2, 26
    ctx->pc = 0x36fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 26));
label_36fd9c:
    // 0x36fd9c: 0xa1980  sll         $v1, $t2, 6
    ctx->pc = 0x36fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
label_36fda0:
    // 0x36fda0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x36fda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_36fda4:
    // 0x36fda4: 0x16a5823  subu        $t3, $t3, $t2
    ctx->pc = 0x36fda4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_36fda8:
    // 0x36fda8: 0x1635826  xor         $t3, $t3, $v1
    ctx->pc = 0x36fda8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 3));
label_36fdac:
    // 0x36fdac: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x36fdacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_36fdb0:
    // 0x36fdb0: 0xb1602  srl         $v0, $t3, 24
    ctx->pc = 0x36fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 24));
label_36fdb4:
    // 0x36fdb4: 0xb1a00  sll         $v1, $t3, 8
    ctx->pc = 0x36fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
label_36fdb8:
    // 0x36fdb8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x36fdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_36fdbc:
    // 0x36fdbc: 0x18b6023  subu        $t4, $t4, $t3
    ctx->pc = 0x36fdbcu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_36fdc0:
    // 0x36fdc0: 0x1836026  xor         $t4, $t4, $v1
    ctx->pc = 0x36fdc0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 3));
label_36fdc4:
    // 0x36fdc4: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x36fdc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_36fdc8:
    // 0x36fdc8: 0xc1402  srl         $v0, $t4, 16
    ctx->pc = 0x36fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
label_36fdcc:
    // 0x36fdcc: 0xc1c00  sll         $v1, $t4, 16
    ctx->pc = 0x36fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_36fdd0:
    // 0x36fdd0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x36fdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_36fdd4:
    // 0x36fdd4: 0x14c5023  subu        $t2, $t2, $t4
    ctx->pc = 0x36fdd4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_36fdd8:
    // 0x36fdd8: 0x1435026  xor         $t2, $t2, $v1
    ctx->pc = 0x36fdd8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
label_36fddc:
    // 0x36fddc: 0x18b6021  addu        $t4, $t4, $t3
    ctx->pc = 0x36fddcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_36fde0:
    // 0x36fde0: 0xa1342  srl         $v0, $t2, 13
    ctx->pc = 0x36fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 13));
label_36fde4:
    // 0x36fde4: 0xa1cc0  sll         $v1, $t2, 19
    ctx->pc = 0x36fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 19));
label_36fde8:
    // 0x36fde8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x36fde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_36fdec:
    // 0x36fdec: 0x16a5823  subu        $t3, $t3, $t2
    ctx->pc = 0x36fdecu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_36fdf0:
    // 0x36fdf0: 0x1635826  xor         $t3, $t3, $v1
    ctx->pc = 0x36fdf0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 3));
label_36fdf4:
    // 0x36fdf4: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x36fdf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_36fdf8:
    // 0x36fdf8: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x36fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_36fdfc:
    // 0x36fdfc: 0xb1702  srl         $v0, $t3, 28
    ctx->pc = 0x36fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 28));
label_36fe00:
    // 0x36fe00: 0x18b6023  subu        $t4, $t4, $t3
    ctx->pc = 0x36fe00u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_36fe04:
    // 0x36fe04: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x36fe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_36fe08:
    // 0x36fe08: 0x1836026  xor         $t4, $t4, $v1
    ctx->pc = 0x36fe08u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 3));
label_36fe0c:
    // 0x36fe0c: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x36fe0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_36fe10:
    // 0x36fe10: 0x10a0ffd3  beqz        $a1, . + 4 + (-0x2D << 2)
label_36fe14:
    if (ctx->pc == 0x36FE14u) {
        ctx->pc = 0x36FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE10u;
        // 0x36fe14: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FE18u;
        goto label_36fe18;
    }
    ctx->pc = 0x36FE10u;
    {
        const bool branch_taken_0x36fe10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE10u;
        // 0x36fe14: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe10) {
            ctx->pc = 0x36FD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36fd60;
        }
    }
    ctx->pc = 0x36FE18u;
label_36fe18:
    // 0x36fe18: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x36fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_36fe1c:
    // 0x36fe1c: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x36fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_36fe20:
    // 0x36fe20: 0x24427fa0  addiu       $v0, $v0, 0x7FA0
    ctx->pc = 0x36fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32672));
label_36fe24:
    // 0x36fe24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x36fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_36fe28:
    // 0x36fe28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_36fe2c:
    // 0x36fe2c: 0x800008  jr          $a0
label_36fe30:
    if (ctx->pc == 0x36FE30u) {
        ctx->pc = 0x36FE34u;
        goto label_36fe34;
    }
    ctx->pc = 0x36FE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FE2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x36FE34u;
label_36fe34:
    // 0x36fe34: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fe38:
    // 0x36fe38: 0x10000010  b           . + 4 + (0x10 << 2)
label_36fe3c:
    if (ctx->pc == 0x36FE3Cu) {
        ctx->pc = 0x36FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE38u;
        // 0x36fe3c: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FE40u;
        goto label_36fe40;
    }
    ctx->pc = 0x36FE38u;
    {
        const bool branch_taken_0x36fe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE38u;
        // 0x36fe3c: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe38) {
            ctx->pc = 0x36FE7Cu;
            goto label_36fe7c;
        }
    }
    ctx->pc = 0x36FE40u;
label_36fe40:
    // 0x36fe40: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x36fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_36fe44:
    // 0x36fe44: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x36fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_36fe48:
    // 0x36fe48: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x36fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fe4c:
    // 0x36fe4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x36fe4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_36fe50:
    // 0x36fe50: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x36fe50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_36fe54:
    // 0x36fe54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x36fe54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36fe58:
    // 0x36fe58: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x36fe58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_36fe5c:
    // 0x36fe5c: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x36fe5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_36fe60:
    // 0x36fe60: 0x10000126  b           . + 4 + (0x126 << 2)
label_36fe64:
    if (ctx->pc == 0x36FE64u) {
        ctx->pc = 0x36FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE60u;
        // 0x36fe64: 0x1645821  addu        $t3, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FE68u;
        goto label_36fe68;
    }
    ctx->pc = 0x36FE60u;
    {
        const bool branch_taken_0x36fe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE60u;
        // 0x36fe64: 0x1645821  addu        $t3, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe60) {
            ctx->pc = 0x3702FCu;
            return;
        }
    }
    ctx->pc = 0x36FE68u;
label_36fe68:
    // 0x36fe68: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fe6c:
    // 0x36fe6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_36fe70:
    if (ctx->pc == 0x36FE70u) {
        ctx->pc = 0x36FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE6Cu;
        // 0x36fe70: 0x94c30008  lhu         $v1, 0x8($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FE74u;
        goto label_36fe74;
    }
    ctx->pc = 0x36FE6Cu;
    {
        const bool branch_taken_0x36fe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE6Cu;
        // 0x36fe70: 0x94c30008  lhu         $v1, 0x8($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe6c) {
            ctx->pc = 0x36FE7Cu;
            goto label_36fe7c;
        }
    }
    ctx->pc = 0x36FE74u;
label_36fe74:
    // 0x36fe74: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fe78:
    // 0x36fe78: 0x90c30008  lbu         $v1, 0x8($a2)
    ctx->pc = 0x36fe78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
label_36fe7c:
    // 0x36fe7c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x36fe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_36fe80:
    // 0x36fe80: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x36fe80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_36fe84:
    // 0x36fe84: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x36fe84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_36fe88:
    // 0x36fe88: 0x1000011c  b           . + 4 + (0x11C << 2)
label_36fe8c:
    if (ctx->pc == 0x36FE8Cu) {
        ctx->pc = 0x36FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE88u;
        // 0x36fe8c: 0x1645821  addu        $t3, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FE90u;
        goto label_36fe90;
    }
    ctx->pc = 0x36FE88u;
    {
        const bool branch_taken_0x36fe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE88u;
        // 0x36fe8c: 0x1645821  addu        $t3, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe88) {
            ctx->pc = 0x3702FCu;
            return;
        }
    }
    ctx->pc = 0x36FE90u;
label_36fe90:
    // 0x36fe90: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fe94:
    // 0x36fe94: 0x1000000e  b           . + 4 + (0xE << 2)
label_36fe98:
    if (ctx->pc == 0x36FE98u) {
        ctx->pc = 0x36FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE94u;
        // 0x36fe98: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FE9Cu;
        goto label_36fe9c;
    }
    ctx->pc = 0x36FE94u;
    {
        const bool branch_taken_0x36fe94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE94u;
        // 0x36fe98: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe94) {
            ctx->pc = 0x36FED0u;
            goto label_36fed0;
        }
    }
    ctx->pc = 0x36FE9Cu;
label_36fe9c:
    // 0x36fe9c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x36fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_36fea0:
    // 0x36fea0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x36fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_36fea4:
    // 0x36fea4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x36fea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fea8:
    // 0x36fea8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x36fea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_36feac:
    // 0x36feac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x36feacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_36feb0:
    // 0x36feb0: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x36feb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_36feb4:
    // 0x36feb4: 0x10000111  b           . + 4 + (0x111 << 2)
label_36feb8:
    if (ctx->pc == 0x36FEB8u) {
        ctx->pc = 0x36FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEB4u;
        // 0x36feb8: 0x1445021  addu        $t2, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FEBCu;
        goto label_36febc;
    }
    ctx->pc = 0x36FEB4u;
    {
        const bool branch_taken_0x36feb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEB4u;
        // 0x36feb8: 0x1445021  addu        $t2, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36feb4) {
            ctx->pc = 0x3702FCu;
            return;
        }
    }
    ctx->pc = 0x36FEBCu;
label_36febc:
    // 0x36febc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36febcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fec0:
    // 0x36fec0: 0x10000003  b           . + 4 + (0x3 << 2)
label_36fec4:
    if (ctx->pc == 0x36FEC4u) {
        ctx->pc = 0x36FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEC0u;
        // 0x36fec4: 0x94c30004  lhu         $v1, 0x4($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FEC8u;
        goto label_36fec8;
    }
    ctx->pc = 0x36FEC0u;
    {
        const bool branch_taken_0x36fec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEC0u;
        // 0x36fec4: 0x94c30004  lhu         $v1, 0x4($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fec0) {
            ctx->pc = 0x36FED0u;
            goto label_36fed0;
        }
    }
    ctx->pc = 0x36FEC8u;
label_36fec8:
    // 0x36fec8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x36fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fecc:
    // 0x36fecc: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x36feccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_36fed0:
    // 0x36fed0: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x36fed0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_36fed4:
    // 0x36fed4: 0x10000109  b           . + 4 + (0x109 << 2)
label_36fed8:
    if (ctx->pc == 0x36FED8u) {
        ctx->pc = 0x36FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FED4u;
        // 0x36fed8: 0x1635821  addu        $t3, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FEDCu;
        goto label_36fedc;
    }
    ctx->pc = 0x36FED4u;
    {
        const bool branch_taken_0x36fed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FED4u;
        // 0x36fed8: 0x1635821  addu        $t3, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fed4) {
            ctx->pc = 0x3702FCu;
            return;
        }
    }
    ctx->pc = 0x36FEDCu;
label_36fedc:
    // 0x36fedc: 0x10000106  b           . + 4 + (0x106 << 2)
label_36fee0:
    if (ctx->pc == 0x36FEE0u) {
        ctx->pc = 0x36FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEDCu;
        // 0x36fee0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FEE4u;
        goto label_36fee4;
    }
    ctx->pc = 0x36FEDCu;
    {
        const bool branch_taken_0x36fedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEDCu;
        // 0x36fee0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fedc) {
            ctx->pc = 0x3702F8u;
            return;
        }
    }
    ctx->pc = 0x36FEE4u;
label_36fee4:
    // 0x36fee4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x36fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_36fee8:
    // 0x36fee8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x36fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_36feec:
    // 0x36feec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x36feecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_36fef0:
    // 0x36fef0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x36fef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36fef4:
    // 0x36fef4: 0x10000101  b           . + 4 + (0x101 << 2)
label_36fef8:
    if (ctx->pc == 0x36FEF8u) {
        ctx->pc = 0x36FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEF4u;
        // 0x36fef8: 0x1435021  addu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36FEFCu;
        goto label_fallthrough_0x36fef4;
    }
    ctx->pc = 0x36FEF4u;
    {
        const bool branch_taken_0x36fef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEF4u;
        // 0x36fef8: 0x1435021  addu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fef4) {
            ctx->pc = 0x3702FCu;
            return;
        }
    }
label_fallthrough_0x36fef4:
    ctx->pc = 0x36FEFCu;
}
