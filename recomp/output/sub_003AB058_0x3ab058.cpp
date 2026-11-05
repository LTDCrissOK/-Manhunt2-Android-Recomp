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

// Function: sub_003AB058
// Address: 0x3ab058 - 0x3ab1d8
void sub_003AB058_0x3ab058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB058_0x3ab058");
#endif

    switch (ctx->pc) {
        case 0x3ab058u: goto label_3ab058;
        case 0x3ab05cu: goto label_3ab05c;
        case 0x3ab060u: goto label_3ab060;
        case 0x3ab064u: goto label_3ab064;
        case 0x3ab068u: goto label_3ab068;
        case 0x3ab06cu: goto label_3ab06c;
        case 0x3ab070u: goto label_3ab070;
        case 0x3ab074u: goto label_3ab074;
        case 0x3ab078u: goto label_3ab078;
        case 0x3ab07cu: goto label_3ab07c;
        case 0x3ab080u: goto label_3ab080;
        case 0x3ab084u: goto label_3ab084;
        case 0x3ab088u: goto label_3ab088;
        case 0x3ab08cu: goto label_3ab08c;
        case 0x3ab090u: goto label_3ab090;
        case 0x3ab094u: goto label_3ab094;
        case 0x3ab098u: goto label_3ab098;
        case 0x3ab09cu: goto label_3ab09c;
        case 0x3ab0a0u: goto label_3ab0a0;
        case 0x3ab0a4u: goto label_3ab0a4;
        case 0x3ab0a8u: goto label_3ab0a8;
        case 0x3ab0acu: goto label_3ab0ac;
        case 0x3ab0b0u: goto label_3ab0b0;
        case 0x3ab0b4u: goto label_3ab0b4;
        case 0x3ab0b8u: goto label_3ab0b8;
        case 0x3ab0bcu: goto label_3ab0bc;
        case 0x3ab0c0u: goto label_3ab0c0;
        case 0x3ab0c4u: goto label_3ab0c4;
        case 0x3ab0c8u: goto label_3ab0c8;
        case 0x3ab0ccu: goto label_3ab0cc;
        case 0x3ab0d0u: goto label_3ab0d0;
        case 0x3ab0d4u: goto label_3ab0d4;
        case 0x3ab0d8u: goto label_3ab0d8;
        case 0x3ab0dcu: goto label_3ab0dc;
        case 0x3ab0e0u: goto label_3ab0e0;
        case 0x3ab0e4u: goto label_3ab0e4;
        case 0x3ab0e8u: goto label_3ab0e8;
        case 0x3ab0ecu: goto label_3ab0ec;
        case 0x3ab0f0u: goto label_3ab0f0;
        case 0x3ab0f4u: goto label_3ab0f4;
        case 0x3ab0f8u: goto label_3ab0f8;
        case 0x3ab0fcu: goto label_3ab0fc;
        case 0x3ab100u: goto label_3ab100;
        case 0x3ab104u: goto label_3ab104;
        case 0x3ab108u: goto label_3ab108;
        case 0x3ab10cu: goto label_3ab10c;
        case 0x3ab110u: goto label_3ab110;
        case 0x3ab114u: goto label_3ab114;
        case 0x3ab118u: goto label_3ab118;
        case 0x3ab11cu: goto label_3ab11c;
        case 0x3ab120u: goto label_3ab120;
        case 0x3ab124u: goto label_3ab124;
        case 0x3ab128u: goto label_3ab128;
        case 0x3ab12cu: goto label_3ab12c;
        case 0x3ab130u: goto label_3ab130;
        case 0x3ab134u: goto label_3ab134;
        case 0x3ab138u: goto label_3ab138;
        case 0x3ab13cu: goto label_3ab13c;
        case 0x3ab140u: goto label_3ab140;
        case 0x3ab144u: goto label_3ab144;
        case 0x3ab148u: goto label_3ab148;
        case 0x3ab14cu: goto label_3ab14c;
        case 0x3ab150u: goto label_3ab150;
        case 0x3ab154u: goto label_3ab154;
        case 0x3ab158u: goto label_3ab158;
        case 0x3ab15cu: goto label_3ab15c;
        case 0x3ab160u: goto label_3ab160;
        case 0x3ab164u: goto label_3ab164;
        case 0x3ab168u: goto label_3ab168;
        case 0x3ab16cu: goto label_3ab16c;
        case 0x3ab170u: goto label_3ab170;
        case 0x3ab174u: goto label_3ab174;
        case 0x3ab178u: goto label_3ab178;
        case 0x3ab17cu: goto label_3ab17c;
        case 0x3ab180u: goto label_3ab180;
        case 0x3ab184u: goto label_3ab184;
        case 0x3ab188u: goto label_3ab188;
        case 0x3ab18cu: goto label_3ab18c;
        case 0x3ab190u: goto label_3ab190;
        case 0x3ab194u: goto label_3ab194;
        case 0x3ab198u: goto label_3ab198;
        case 0x3ab19cu: goto label_3ab19c;
        case 0x3ab1a0u: goto label_3ab1a0;
        case 0x3ab1a4u: goto label_3ab1a4;
        case 0x3ab1a8u: goto label_3ab1a8;
        case 0x3ab1acu: goto label_3ab1ac;
        case 0x3ab1b0u: goto label_3ab1b0;
        case 0x3ab1b4u: goto label_3ab1b4;
        case 0x3ab1b8u: goto label_3ab1b8;
        case 0x3ab1bcu: goto label_3ab1bc;
        case 0x3ab1c0u: goto label_3ab1c0;
        case 0x3ab1c4u: goto label_3ab1c4;
        case 0x3ab1c8u: goto label_3ab1c8;
        case 0x3ab1ccu: goto label_3ab1cc;
        case 0x3ab1d0u: goto label_3ab1d0;
        case 0x3ab1d4u: goto label_3ab1d4;
        default: break;
    }

    ctx->pc = 0x3ab058u;

label_3ab058:
    // 0x3ab058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ab058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ab05c:
    // 0x3ab05c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3ab05cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ab060:
    // 0x3ab060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ab060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ab064:
    // 0x3ab064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ab064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ab068:
    // 0x3ab068: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ab068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ab06c:
    // 0x3ab06c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3ab06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ab070:
    // 0x3ab070: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_3ab074:
    if (ctx->pc == 0x3AB074u) {
        ctx->pc = 0x3AB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB070u;
        // 0x3ab074: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB078u;
        goto label_3ab078;
    }
    ctx->pc = 0x3AB070u;
    {
        const bool branch_taken_0x3ab070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB070u;
        // 0x3ab074: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab070) {
            ctx->pc = 0x3AB0A0u;
            goto label_3ab0a0;
        }
    }
    ctx->pc = 0x3AB078u;
label_3ab078:
    // 0x3ab078: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ab078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3ab07c:
    // 0x3ab07c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ab07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3ab080:
    // 0x3ab080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ab084:
    // 0x3ab084: 0x2484eff8  addiu       $a0, $a0, -0x1008
    ctx->pc = 0x3ab084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963192));
label_3ab088:
    // 0x3ab088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ab088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ab08c:
    // 0x3ab08c: 0x24a5eef0  addiu       $a1, $a1, -0x1110
    ctx->pc = 0x3ab08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
label_3ab090:
    // 0x3ab090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ab090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ab094:
    // 0x3ab094: 0x80eaa6e  j           func_3AA9B8
label_3ab098:
    if (ctx->pc == 0x3AB098u) {
        ctx->pc = 0x3AB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB094u;
        // 0x3ab098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB09Cu;
        goto label_3ab09c;
    }
    ctx->pc = 0x3AB094u;
    ctx->pc = 0x3AB098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB094u;
    // 0x3ab098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA9B8u;
    sub_003AA9B8_0x3aa9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB09Cu;
label_3ab09c:
    // 0x3ab09c: 0x0  nop
    ctx->pc = 0x3ab09cu;
    // NOP
label_3ab0a0:
    // 0x3ab0a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ab0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ab0a4:
    // 0x3ab0a4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3ab0a8:
    if (ctx->pc == 0x3AB0A8u) {
        ctx->pc = 0x3AB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0A4u;
        // 0x3ab0a8: 0x8e280004  lw          $t0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB0ACu;
        goto label_3ab0ac;
    }
    ctx->pc = 0x3AB0A4u;
    {
        const bool branch_taken_0x3ab0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab0a4) {
            ctx->pc = 0x3AB0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB0A4u;
            // 0x3ab0a8: 0x8e280004  lw          $t0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB0D0u;
            goto label_3ab0d0;
        }
    }
    ctx->pc = 0x3AB0ACu;
label_3ab0ac:
    // 0x3ab0ac: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ab0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3ab0b0:
    // 0x3ab0b0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ab0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3ab0b4:
    // 0x3ab0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ab0b8:
    // 0x3ab0b8: 0x2484f008  addiu       $a0, $a0, -0xFF8
    ctx->pc = 0x3ab0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963208));
label_3ab0bc:
    // 0x3ab0bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ab0bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ab0c0:
    // 0x3ab0c0: 0x24a5ef70  addiu       $a1, $a1, -0x1090
    ctx->pc = 0x3ab0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963056));
label_3ab0c4:
    // 0x3ab0c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ab0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ab0c8:
    // 0x3ab0c8: 0x80eaa6e  j           func_3AA9B8
label_3ab0cc:
    if (ctx->pc == 0x3AB0CCu) {
        ctx->pc = 0x3AB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0C8u;
        // 0x3ab0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB0D0u;
        goto label_3ab0d0;
    }
    ctx->pc = 0x3AB0C8u;
    ctx->pc = 0x3AB0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB0C8u;
    // 0x3ab0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA9B8u;
    sub_003AA9B8_0x3aa9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB0D0u;
label_3ab0d0:
    // 0x3ab0d0: 0x1900003b  blez        $t0, . + 4 + (0x3B << 2)
label_3ab0d4:
    if (ctx->pc == 0x3AB0D4u) {
        ctx->pc = 0x3AB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0D0u;
        // 0x3ab0d4: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB0D8u;
        goto label_3ab0d8;
    }
    ctx->pc = 0x3AB0D0u;
    {
        const bool branch_taken_0x3ab0d0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3AB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0D0u;
        // 0x3ab0d4: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab0d0) {
            ctx->pc = 0x3AB1C0u;
            goto label_3ab1c0;
        }
    }
    ctx->pc = 0x3AB0D8u;
label_3ab0d8:
    // 0x3ab0d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3ab0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ab0dc:
    // 0x3ab0dc: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
label_3ab0e0:
    if (ctx->pc == 0x3AB0E0u) {
        ctx->pc = 0x3AB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0DCu;
        // 0x3ab0e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB0E4u;
        goto label_3ab0e4;
    }
    ctx->pc = 0x3AB0DCu;
    {
        const bool branch_taken_0x3ab0dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0DCu;
        // 0x3ab0e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab0dc) {
            ctx->pc = 0x3AB1C0u;
            goto label_3ab1c0;
        }
    }
    ctx->pc = 0x3AB0E4u;
label_3ab0e4:
    // 0x3ab0e4: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_3ab0e8:
    if (ctx->pc == 0x3AB0E8u) {
        ctx->pc = 0x3AB0ECu;
        goto label_3ab0ec;
    }
    ctx->pc = 0x3AB0E4u;
    {
        const bool branch_taken_0x3ab0e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ab0e4) {
            ctx->pc = 0x3AB180u;
            goto label_3ab180;
        }
    }
    ctx->pc = 0x3AB0ECu;
label_3ab0ec:
    // 0x3ab0ec: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x3ab0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3ab0f0:
    // 0x3ab0f0: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x3ab0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3ab0f4:
    // 0x3ab0f4: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x3ab0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3ab0f8:
    // 0x3ab0f8: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x3ab0f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3ab0fc:
    // 0x3ab0fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3ab100:
    if (ctx->pc == 0x3AB100u) {
        ctx->pc = 0x3AB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0FCu;
        // 0x3ab100: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB104u;
        goto label_3ab104;
    }
    ctx->pc = 0x3AB0FCu;
    {
        const bool branch_taken_0x3ab0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0FCu;
        // 0x3ab100: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab0fc) {
            ctx->pc = 0x3AB130u;
            goto label_3ab130;
        }
    }
    ctx->pc = 0x3AB104u;
label_3ab104:
    // 0x3ab104: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x3ab104u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3ab108:
    // 0x3ab108: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x3ab108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3ab10c:
    // 0x3ab10c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ab10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ab110:
    // 0x3ab110: 0x102300b  movn        $a2, $t0, $v0
    ctx->pc = 0x3ab110u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
label_3ab114:
    // 0x3ab114: 0xc0efa49  jal         func_3BE924
label_3ab118:
    if (ctx->pc == 0x3AB118u) {
        ctx->pc = 0x3AB118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB114u;
        // 0x3ab118: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB11Cu;
        goto label_3ab11c;
    }
    ctx->pc = 0x3AB114u;
    SET_GPR_U32(ctx, 31, 0x3AB11Cu);
    ctx->pc = 0x3AB118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB114u;
    // 0x3ab118: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3AB114u, 0x3AB11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB11Cu;
label_3ab11c:
    // 0x3ab11c: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x3ab11cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ab120:
    // 0x3ab120: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3ab120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ab124:
    // 0x3ab124: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x3ab124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3ab128:
    // 0x3ab128: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x3ab128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3ab12c:
    // 0x3ab12c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x3ab12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3ab130:
    // 0x3ab130: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3ab130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3ab134:
    // 0x3ab134: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x3ab134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3ab138:
    // 0x3ab138: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_3ab13c:
    if (ctx->pc == 0x3AB13Cu) {
        ctx->pc = 0x3AB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB138u;
        // 0x3ab13c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB140u;
        goto label_3ab140;
    }
    ctx->pc = 0x3AB138u;
    {
        const bool branch_taken_0x3ab138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab138) {
            ctx->pc = 0x3AB13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB138u;
            // 0x3ab13c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB164u;
            goto label_3ab164;
        }
    }
    ctx->pc = 0x3AB140u;
label_3ab140:
    // 0x3ab140: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x3ab140u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ab144:
    // 0x3ab144: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3ab144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ab148:
    // 0x3ab148: 0x126102a  slt         $v0, $t1, $a2
    ctx->pc = 0x3ab148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3ab14c:
    // 0x3ab14c: 0x122300b  movn        $a2, $t1, $v0
    ctx->pc = 0x3ab14cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
label_3ab150:
    // 0x3ab150: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x3ab150u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3ab154:
    // 0x3ab154: 0xc0efa49  jal         func_3BE924
label_3ab158:
    if (ctx->pc == 0x3AB158u) {
        ctx->pc = 0x3AB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB154u;
        // 0x3ab158: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB15Cu;
        goto label_3ab15c;
    }
    ctx->pc = 0x3AB154u;
    SET_GPR_U32(ctx, 31, 0x3AB15Cu);
    ctx->pc = 0x3AB158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB154u;
    // 0x3ab158: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3AB154u, 0x3AB15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB15Cu;
label_3ab15c:
    // 0x3ab15c: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x3ab15cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ab160:
    // 0x3ab160: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3ab160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3ab164:
    // 0x3ab164: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x3ab164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3ab168:
    // 0x3ab168: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3ab168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_3ab16c:
    // 0x3ab16c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3ab16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_3ab170:
    // 0x3ab170: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ab170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ab174:
    // 0x3ab174: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ab174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ab178:
    // 0x3ab178: 0x10000011  b           . + 4 + (0x11 << 2)
label_3ab17c:
    if (ctx->pc == 0x3AB17Cu) {
        ctx->pc = 0x3AB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB178u;
        // 0x3ab17c: 0xae040034  sw          $a0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB180u;
        goto label_3ab180;
    }
    ctx->pc = 0x3AB178u;
    {
        const bool branch_taken_0x3ab178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB178u;
        // 0x3ab17c: 0xae040034  sw          $a0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab178) {
            ctx->pc = 0x3AB1C0u;
            goto label_3ab1c0;
        }
    }
    ctx->pc = 0x3AB180u;
label_3ab180:
    // 0x3ab180: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_3ab184:
    if (ctx->pc == 0x3AB184u) {
        ctx->pc = 0x3AB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB180u;
        // 0x3ab184: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB188u;
        goto label_3ab188;
    }
    ctx->pc = 0x3AB180u;
    {
        const bool branch_taken_0x3ab180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab180) {
            ctx->pc = 0x3AB184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB180u;
            // 0x3ab184: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB1A8u;
            goto label_3ab1a8;
        }
    }
    ctx->pc = 0x3AB188u;
label_3ab188:
    // 0x3ab188: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3ab188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3ab18c:
    // 0x3ab18c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x3ab18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3ab190:
    // 0x3ab190: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3ab190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_3ab194:
    // 0x3ab194: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3ab194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_3ab198:
    // 0x3ab198: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ab198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ab19c:
    // 0x3ab19c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ab19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ab1a0:
    // 0x3ab1a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ab1a4:
    if (ctx->pc == 0x3AB1A4u) {
        ctx->pc = 0x3AB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1A0u;
        // 0x3ab1a4: 0xae04002c  sw          $a0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB1A8u;
        goto label_3ab1a8;
    }
    ctx->pc = 0x3AB1A0u;
    {
        const bool branch_taken_0x3ab1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1A0u;
        // 0x3ab1a4: 0xae04002c  sw          $a0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab1a0) {
            ctx->pc = 0x3AB1C0u;
            goto label_3ab1c0;
        }
    }
    ctx->pc = 0x3AB1A8u;
label_3ab1a8:
    // 0x3ab1a8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3ab1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3ab1ac:
    // 0x3ab1ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ab1b0:
    if (ctx->pc == 0x3AB1B0u) {
        ctx->pc = 0x3AB1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1ACu;
        // 0x3ab1b0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB1B4u;
        goto label_3ab1b4;
    }
    ctx->pc = 0x3AB1ACu;
    {
        const bool branch_taken_0x3ab1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1ACu;
        // 0x3ab1b0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab1ac) {
            ctx->pc = 0x3AB1C0u;
            goto label_3ab1c0;
        }
    }
    ctx->pc = 0x3AB1B4u;
label_3ab1b4:
    // 0x3ab1b4: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x3ab1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3ab1b8:
    // 0x3ab1b8: 0x40f809  jalr        $v0
label_3ab1bc:
    if (ctx->pc == 0x3AB1BCu) {
        ctx->pc = 0x3AB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1B8u;
        // 0x3ab1bc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB1C0u;
        goto label_3ab1c0;
    }
    ctx->pc = 0x3AB1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB1C0u);
        ctx->pc = 0x3AB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1B8u;
        // 0x3ab1bc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB1B8u, 0x3AB1C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB1C0u;
label_3ab1c0:
    // 0x3ab1c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ab1c4:
    // 0x3ab1c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ab1c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ab1c8:
    // 0x3ab1c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ab1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ab1cc:
    // 0x3ab1cc: 0x3e00008  jr          $ra
label_3ab1d0:
    if (ctx->pc == 0x3AB1D0u) {
        ctx->pc = 0x3AB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1CCu;
        // 0x3ab1d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB1D4u;
        goto label_3ab1d4;
    }
    ctx->pc = 0x3AB1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB1CCu;
        // 0x3ab1d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB1D4u;
label_3ab1d4:
    // 0x3ab1d4: 0x0  nop
    ctx->pc = 0x3ab1d4u;
    // NOP
    ctx->pc = 0x3ab1d8u;
}
