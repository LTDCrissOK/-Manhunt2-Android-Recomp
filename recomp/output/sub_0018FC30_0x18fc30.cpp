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

// Function: sub_0018FC30
// Address: 0x18fc30 - 0x190098
void sub_0018FC30_0x18fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FC30_0x18fc30");
#endif

    switch (ctx->pc) {
        case 0x18fc30u: goto label_18fc30;
        case 0x18fc34u: goto label_18fc34;
        case 0x18fc38u: goto label_18fc38;
        case 0x18fc3cu: goto label_18fc3c;
        case 0x18fc40u: goto label_18fc40;
        case 0x18fc44u: goto label_18fc44;
        case 0x18fc48u: goto label_18fc48;
        case 0x18fc4cu: goto label_18fc4c;
        case 0x18fc50u: goto label_18fc50;
        case 0x18fc54u: goto label_18fc54;
        case 0x18fc58u: goto label_18fc58;
        case 0x18fc5cu: goto label_18fc5c;
        case 0x18fc60u: goto label_18fc60;
        case 0x18fc64u: goto label_18fc64;
        case 0x18fc68u: goto label_18fc68;
        case 0x18fc6cu: goto label_18fc6c;
        case 0x18fc70u: goto label_18fc70;
        case 0x18fc74u: goto label_18fc74;
        case 0x18fc78u: goto label_18fc78;
        case 0x18fc7cu: goto label_18fc7c;
        case 0x18fc80u: goto label_18fc80;
        case 0x18fc84u: goto label_18fc84;
        case 0x18fc88u: goto label_18fc88;
        case 0x18fc8cu: goto label_18fc8c;
        case 0x18fc90u: goto label_18fc90;
        case 0x18fc94u: goto label_18fc94;
        case 0x18fc98u: goto label_18fc98;
        case 0x18fc9cu: goto label_18fc9c;
        case 0x18fca0u: goto label_18fca0;
        case 0x18fca4u: goto label_18fca4;
        case 0x18fca8u: goto label_18fca8;
        case 0x18fcacu: goto label_18fcac;
        case 0x18fcb0u: goto label_18fcb0;
        case 0x18fcb4u: goto label_18fcb4;
        case 0x18fcb8u: goto label_18fcb8;
        case 0x18fcbcu: goto label_18fcbc;
        case 0x18fcc0u: goto label_18fcc0;
        case 0x18fcc4u: goto label_18fcc4;
        case 0x18fcc8u: goto label_18fcc8;
        case 0x18fcccu: goto label_18fccc;
        case 0x18fcd0u: goto label_18fcd0;
        case 0x18fcd4u: goto label_18fcd4;
        case 0x18fcd8u: goto label_18fcd8;
        case 0x18fcdcu: goto label_18fcdc;
        case 0x18fce0u: goto label_18fce0;
        case 0x18fce4u: goto label_18fce4;
        case 0x18fce8u: goto label_18fce8;
        case 0x18fcecu: goto label_18fcec;
        case 0x18fcf0u: goto label_18fcf0;
        case 0x18fcf4u: goto label_18fcf4;
        case 0x18fcf8u: goto label_18fcf8;
        case 0x18fcfcu: goto label_18fcfc;
        case 0x18fd00u: goto label_18fd00;
        case 0x18fd04u: goto label_18fd04;
        case 0x18fd08u: goto label_18fd08;
        case 0x18fd0cu: goto label_18fd0c;
        case 0x18fd10u: goto label_18fd10;
        case 0x18fd14u: goto label_18fd14;
        case 0x18fd18u: goto label_18fd18;
        case 0x18fd1cu: goto label_18fd1c;
        case 0x18fd20u: goto label_18fd20;
        case 0x18fd24u: goto label_18fd24;
        case 0x18fd28u: goto label_18fd28;
        case 0x18fd2cu: goto label_18fd2c;
        case 0x18fd30u: goto label_18fd30;
        case 0x18fd34u: goto label_18fd34;
        case 0x18fd38u: goto label_18fd38;
        case 0x18fd3cu: goto label_18fd3c;
        case 0x18fd40u: goto label_18fd40;
        case 0x18fd44u: goto label_18fd44;
        case 0x18fd48u: goto label_18fd48;
        case 0x18fd4cu: goto label_18fd4c;
        case 0x18fd50u: goto label_18fd50;
        case 0x18fd54u: goto label_18fd54;
        case 0x18fd58u: goto label_18fd58;
        case 0x18fd5cu: goto label_18fd5c;
        case 0x18fd60u: goto label_18fd60;
        case 0x18fd64u: goto label_18fd64;
        case 0x18fd68u: goto label_18fd68;
        case 0x18fd6cu: goto label_18fd6c;
        case 0x18fd70u: goto label_18fd70;
        case 0x18fd74u: goto label_18fd74;
        case 0x18fd78u: goto label_18fd78;
        case 0x18fd7cu: goto label_18fd7c;
        case 0x18fd80u: goto label_18fd80;
        case 0x18fd84u: goto label_18fd84;
        case 0x18fd88u: goto label_18fd88;
        case 0x18fd8cu: goto label_18fd8c;
        case 0x18fd90u: goto label_18fd90;
        case 0x18fd94u: goto label_18fd94;
        case 0x18fd98u: goto label_18fd98;
        case 0x18fd9cu: goto label_18fd9c;
        case 0x18fda0u: goto label_18fda0;
        case 0x18fda4u: goto label_18fda4;
        case 0x18fda8u: goto label_18fda8;
        case 0x18fdacu: goto label_18fdac;
        case 0x18fdb0u: goto label_18fdb0;
        case 0x18fdb4u: goto label_18fdb4;
        case 0x18fdb8u: goto label_18fdb8;
        case 0x18fdbcu: goto label_18fdbc;
        case 0x18fdc0u: goto label_18fdc0;
        case 0x18fdc4u: goto label_18fdc4;
        case 0x18fdc8u: goto label_18fdc8;
        case 0x18fdccu: goto label_18fdcc;
        case 0x18fdd0u: goto label_18fdd0;
        case 0x18fdd4u: goto label_18fdd4;
        case 0x18fdd8u: goto label_18fdd8;
        case 0x18fddcu: goto label_18fddc;
        case 0x18fde0u: goto label_18fde0;
        case 0x18fde4u: goto label_18fde4;
        case 0x18fde8u: goto label_18fde8;
        case 0x18fdecu: goto label_18fdec;
        case 0x18fdf0u: goto label_18fdf0;
        case 0x18fdf4u: goto label_18fdf4;
        case 0x18fdf8u: goto label_18fdf8;
        case 0x18fdfcu: goto label_18fdfc;
        case 0x18fe00u: goto label_18fe00;
        case 0x18fe04u: goto label_18fe04;
        case 0x18fe08u: goto label_18fe08;
        case 0x18fe0cu: goto label_18fe0c;
        case 0x18fe10u: goto label_18fe10;
        case 0x18fe14u: goto label_18fe14;
        case 0x18fe18u: goto label_18fe18;
        case 0x18fe1cu: goto label_18fe1c;
        case 0x18fe20u: goto label_18fe20;
        case 0x18fe24u: goto label_18fe24;
        case 0x18fe28u: goto label_18fe28;
        case 0x18fe2cu: goto label_18fe2c;
        case 0x18fe30u: goto label_18fe30;
        case 0x18fe34u: goto label_18fe34;
        case 0x18fe38u: goto label_18fe38;
        case 0x18fe3cu: goto label_18fe3c;
        case 0x18fe40u: goto label_18fe40;
        case 0x18fe44u: goto label_18fe44;
        case 0x18fe48u: goto label_18fe48;
        case 0x18fe4cu: goto label_18fe4c;
        case 0x18fe50u: goto label_18fe50;
        case 0x18fe54u: goto label_18fe54;
        case 0x18fe58u: goto label_18fe58;
        case 0x18fe5cu: goto label_18fe5c;
        case 0x18fe60u: goto label_18fe60;
        case 0x18fe64u: goto label_18fe64;
        case 0x18fe68u: goto label_18fe68;
        case 0x18fe6cu: goto label_18fe6c;
        case 0x18fe70u: goto label_18fe70;
        case 0x18fe74u: goto label_18fe74;
        case 0x18fe78u: goto label_18fe78;
        case 0x18fe7cu: goto label_18fe7c;
        case 0x18fe80u: goto label_18fe80;
        case 0x18fe84u: goto label_18fe84;
        case 0x18fe88u: goto label_18fe88;
        case 0x18fe8cu: goto label_18fe8c;
        case 0x18fe90u: goto label_18fe90;
        case 0x18fe94u: goto label_18fe94;
        case 0x18fe98u: goto label_18fe98;
        case 0x18fe9cu: goto label_18fe9c;
        case 0x18fea0u: goto label_18fea0;
        case 0x18fea4u: goto label_18fea4;
        case 0x18fea8u: goto label_18fea8;
        case 0x18feacu: goto label_18feac;
        case 0x18feb0u: goto label_18feb0;
        case 0x18feb4u: goto label_18feb4;
        case 0x18feb8u: goto label_18feb8;
        case 0x18febcu: goto label_18febc;
        case 0x18fec0u: goto label_18fec0;
        case 0x18fec4u: goto label_18fec4;
        case 0x18fec8u: goto label_18fec8;
        case 0x18feccu: goto label_18fecc;
        case 0x18fed0u: goto label_18fed0;
        case 0x18fed4u: goto label_18fed4;
        case 0x18fed8u: goto label_18fed8;
        case 0x18fedcu: goto label_18fedc;
        case 0x18fee0u: goto label_18fee0;
        case 0x18fee4u: goto label_18fee4;
        case 0x18fee8u: goto label_18fee8;
        case 0x18feecu: goto label_18feec;
        case 0x18fef0u: goto label_18fef0;
        case 0x18fef4u: goto label_18fef4;
        case 0x18fef8u: goto label_18fef8;
        case 0x18fefcu: goto label_18fefc;
        case 0x18ff00u: goto label_18ff00;
        case 0x18ff04u: goto label_18ff04;
        case 0x18ff08u: goto label_18ff08;
        case 0x18ff0cu: goto label_18ff0c;
        case 0x18ff10u: goto label_18ff10;
        case 0x18ff14u: goto label_18ff14;
        case 0x18ff18u: goto label_18ff18;
        case 0x18ff1cu: goto label_18ff1c;
        case 0x18ff20u: goto label_18ff20;
        case 0x18ff24u: goto label_18ff24;
        case 0x18ff28u: goto label_18ff28;
        case 0x18ff2cu: goto label_18ff2c;
        case 0x18ff30u: goto label_18ff30;
        case 0x18ff34u: goto label_18ff34;
        case 0x18ff38u: goto label_18ff38;
        case 0x18ff3cu: goto label_18ff3c;
        case 0x18ff40u: goto label_18ff40;
        case 0x18ff44u: goto label_18ff44;
        case 0x18ff48u: goto label_18ff48;
        case 0x18ff4cu: goto label_18ff4c;
        case 0x18ff50u: goto label_18ff50;
        case 0x18ff54u: goto label_18ff54;
        case 0x18ff58u: goto label_18ff58;
        case 0x18ff5cu: goto label_18ff5c;
        case 0x18ff60u: goto label_18ff60;
        case 0x18ff64u: goto label_18ff64;
        case 0x18ff68u: goto label_18ff68;
        case 0x18ff6cu: goto label_18ff6c;
        case 0x18ff70u: goto label_18ff70;
        case 0x18ff74u: goto label_18ff74;
        case 0x18ff78u: goto label_18ff78;
        case 0x18ff7cu: goto label_18ff7c;
        case 0x18ff80u: goto label_18ff80;
        case 0x18ff84u: goto label_18ff84;
        case 0x18ff88u: goto label_18ff88;
        case 0x18ff8cu: goto label_18ff8c;
        case 0x18ff90u: goto label_18ff90;
        case 0x18ff94u: goto label_18ff94;
        case 0x18ff98u: goto label_18ff98;
        case 0x18ff9cu: goto label_18ff9c;
        case 0x18ffa0u: goto label_18ffa0;
        case 0x18ffa4u: goto label_18ffa4;
        case 0x18ffa8u: goto label_18ffa8;
        case 0x18ffacu: goto label_18ffac;
        case 0x18ffb0u: goto label_18ffb0;
        case 0x18ffb4u: goto label_18ffb4;
        case 0x18ffb8u: goto label_18ffb8;
        case 0x18ffbcu: goto label_18ffbc;
        case 0x18ffc0u: goto label_18ffc0;
        case 0x18ffc4u: goto label_18ffc4;
        case 0x18ffc8u: goto label_18ffc8;
        case 0x18ffccu: goto label_18ffcc;
        case 0x18ffd0u: goto label_18ffd0;
        case 0x18ffd4u: goto label_18ffd4;
        case 0x18ffd8u: goto label_18ffd8;
        case 0x18ffdcu: goto label_18ffdc;
        case 0x18ffe0u: goto label_18ffe0;
        case 0x18ffe4u: goto label_18ffe4;
        case 0x18ffe8u: goto label_18ffe8;
        case 0x18ffecu: goto label_18ffec;
        case 0x18fff0u: goto label_18fff0;
        case 0x18fff4u: goto label_18fff4;
        case 0x18fff8u: goto label_18fff8;
        case 0x18fffcu: goto label_18fffc;
        case 0x190000u: goto label_190000;
        case 0x190004u: goto label_190004;
        case 0x190008u: goto label_190008;
        case 0x19000cu: goto label_19000c;
        case 0x190010u: goto label_190010;
        case 0x190014u: goto label_190014;
        case 0x190018u: goto label_190018;
        case 0x19001cu: goto label_19001c;
        case 0x190020u: goto label_190020;
        case 0x190024u: goto label_190024;
        case 0x190028u: goto label_190028;
        case 0x19002cu: goto label_19002c;
        case 0x190030u: goto label_190030;
        case 0x190034u: goto label_190034;
        case 0x190038u: goto label_190038;
        case 0x19003cu: goto label_19003c;
        case 0x190040u: goto label_190040;
        case 0x190044u: goto label_190044;
        case 0x190048u: goto label_190048;
        case 0x19004cu: goto label_19004c;
        case 0x190050u: goto label_190050;
        case 0x190054u: goto label_190054;
        case 0x190058u: goto label_190058;
        case 0x19005cu: goto label_19005c;
        case 0x190060u: goto label_190060;
        case 0x190064u: goto label_190064;
        case 0x190068u: goto label_190068;
        case 0x19006cu: goto label_19006c;
        case 0x190070u: goto label_190070;
        case 0x190074u: goto label_190074;
        case 0x190078u: goto label_190078;
        case 0x19007cu: goto label_19007c;
        case 0x190080u: goto label_190080;
        case 0x190084u: goto label_190084;
        case 0x190088u: goto label_190088;
        case 0x19008cu: goto label_19008c;
        case 0x190090u: goto label_190090;
        case 0x190094u: goto label_190094;
        default: break;
    }

    ctx->pc = 0x18fc30u;

label_18fc30:
    // 0x18fc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18fc34:
    // 0x18fc34: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x18fc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_18fc38:
    // 0x18fc38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18fc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18fc3c:
    // 0x18fc3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x18fc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_18fc40:
    // 0x18fc40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18fc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18fc44:
    // 0x18fc44: 0xc0f6a96  jal         func_3DAA58
label_18fc48:
    if (ctx->pc == 0x18FC48u) {
        ctx->pc = 0x18FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC44u;
        // 0x18fc48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FC4Cu;
        goto label_18fc4c;
    }
    ctx->pc = 0x18FC44u;
    SET_GPR_U32(ctx, 31, 0x18FC4Cu);
    ctx->pc = 0x18FC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FC44u;
    // 0x18fc48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18FC44u, 0x18FC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FC4Cu;
label_18fc4c:
    // 0x18fc4c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18fc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18fc50:
    // 0x18fc50: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x18fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_18fc54:
    // 0x18fc54: 0x10700027  beq         $v1, $s0, . + 4 + (0x27 << 2)
label_18fc58:
    if (ctx->pc == 0x18FC58u) {
        ctx->pc = 0x18FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC54u;
        // 0x18fc58: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FC5Cu;
        goto label_18fc5c;
    }
    ctx->pc = 0x18FC54u;
    {
        const bool branch_taken_0x18fc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x18FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC54u;
        // 0x18fc58: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc54) {
            ctx->pc = 0x18FCF4u;
            goto label_18fcf4;
        }
    }
    ctx->pc = 0x18FC5Cu;
label_18fc5c:
    // 0x18fc5c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_18fc60:
    if (ctx->pc == 0x18FC60u) {
        ctx->pc = 0x18FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC5Cu;
        // 0x18fc60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FC64u;
        goto label_18fc64;
    }
    ctx->pc = 0x18FC5Cu;
    {
        const bool branch_taken_0x18fc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fc5c) {
            ctx->pc = 0x18FC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FC5Cu;
            // 0x18fc60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FC74u;
            goto label_18fc74;
        }
    }
    ctx->pc = 0x18FC64u;
label_18fc64:
    // 0x18fc64: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_18fc68:
    if (ctx->pc == 0x18FC68u) {
        ctx->pc = 0x18FC6Cu;
        goto label_18fc6c;
    }
    ctx->pc = 0x18FC64u;
    {
        const bool branch_taken_0x18fc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fc64) {
            ctx->pc = 0x18FC84u;
            goto label_18fc84;
        }
    }
    ctx->pc = 0x18FC6Cu;
label_18fc6c:
    // 0x18fc6c: 0x10000105  b           . + 4 + (0x105 << 2)
label_18fc70:
    if (ctx->pc == 0x18FC70u) {
        ctx->pc = 0x18FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC6Cu;
        // 0x18fc70: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FC74u;
        goto label_18fc74;
    }
    ctx->pc = 0x18FC6Cu;
    {
        const bool branch_taken_0x18fc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC6Cu;
        // 0x18fc70: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc6c) {
            ctx->pc = 0x190084u;
            goto label_190084;
        }
    }
    ctx->pc = 0x18FC74u;
label_18fc74:
    // 0x18fc74: 0x106200da  beq         $v1, $v0, . + 4 + (0xDA << 2)
label_18fc78:
    if (ctx->pc == 0x18FC78u) {
        ctx->pc = 0x18FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC74u;
        // 0x18fc78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FC7Cu;
        goto label_18fc7c;
    }
    ctx->pc = 0x18FC74u;
    {
        const bool branch_taken_0x18fc74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC74u;
        // 0x18fc78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc74) {
            ctx->pc = 0x18FFE0u;
            goto label_18ffe0;
        }
    }
    ctx->pc = 0x18FC7Cu;
label_18fc7c:
    // 0x18fc7c: 0x10000102  b           . + 4 + (0x102 << 2)
label_18fc80:
    if (ctx->pc == 0x18FC80u) {
        ctx->pc = 0x18FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC7Cu;
        // 0x18fc80: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FC84u;
        goto label_18fc84;
    }
    ctx->pc = 0x18FC7Cu;
    {
        const bool branch_taken_0x18fc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC7Cu;
        // 0x18fc80: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc7c) {
            ctx->pc = 0x190088u;
            goto label_190088;
        }
    }
    ctx->pc = 0x18FC84u;
label_18fc84:
    // 0x18fc84: 0xc061a16  jal         func_186858
label_18fc88:
    if (ctx->pc == 0x18FC88u) {
        ctx->pc = 0x18FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC84u;
        // 0x18fc88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FC8Cu;
        goto label_18fc8c;
    }
    ctx->pc = 0x18FC84u;
    SET_GPR_U32(ctx, 31, 0x18FC8Cu);
    ctx->pc = 0x18FC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FC84u;
    // 0x18fc88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18FC84u, 0x18FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FC8Cu;
label_18fc8c:
    // 0x18fc8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18fc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_18fc90:
    // 0x18fc90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18fc90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18fc94:
    // 0x18fc94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18fc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18fc98:
    // 0x18fc98: 0xc061a12  jal         func_186848
label_18fc9c:
    if (ctx->pc == 0x18FC9Cu) {
        ctx->pc = 0x18FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC98u;
        // 0x18fc9c: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FCA0u;
        goto label_18fca0;
    }
    ctx->pc = 0x18FC98u;
    SET_GPR_U32(ctx, 31, 0x18FCA0u);
    ctx->pc = 0x18FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FC98u;
    // 0x18fc9c: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18FC98u, 0x18FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCA0u;
label_18fca0:
    // 0x18fca0: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18fca4:
    // 0x18fca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18fca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fca8:
    // 0x18fca8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18fcac:
    // 0x18fcac: 0x40f809  jalr        $v0
label_18fcb0:
    if (ctx->pc == 0x18FCB0u) {
        ctx->pc = 0x18FCB4u;
        goto label_18fcb4;
    }
    ctx->pc = 0x18FCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FCB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FCACu, 0x18FCB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FCB4u;
label_18fcb4:
    // 0x18fcb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18fcb8:
    if (ctx->pc == 0x18FCB8u) {
        ctx->pc = 0x18FCBCu;
        goto label_18fcbc;
    }
    ctx->pc = 0x18FCB4u;
    {
        const bool branch_taken_0x18fcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fcb4) {
            ctx->pc = 0x18FCC4u;
            goto label_18fcc4;
        }
    }
    ctx->pc = 0x18FCBCu;
label_18fcbc:
    // 0x18fcbc: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_18fcc0:
    if (ctx->pc == 0x18FCC0u) {
        ctx->pc = 0x18FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCBCu;
        // 0x18fcc0: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FCC4u;
        goto label_18fcc4;
    }
    ctx->pc = 0x18FCBCu;
    {
        const bool branch_taken_0x18fcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCBCu;
        // 0x18fcc0: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcbc) {
            ctx->pc = 0x190080u;
            goto label_190080;
        }
    }
    ctx->pc = 0x18FCC4u;
label_18fcc4:
    // 0x18fcc4: 0xc061a1a  jal         func_186868
label_18fcc8:
    if (ctx->pc == 0x18FCC8u) {
        ctx->pc = 0x18FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCC4u;
        // 0x18fcc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FCCCu;
        goto label_18fccc;
    }
    ctx->pc = 0x18FCC4u;
    SET_GPR_U32(ctx, 31, 0x18FCCCu);
    ctx->pc = 0x18FCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCC4u;
    // 0x18fcc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x18FCC4u, 0x18FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCCCu;
label_18fccc:
    // 0x18fccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18fcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fcd0:
    // 0x18fcd0: 0xc061a12  jal         func_186848
label_18fcd4:
    if (ctx->pc == 0x18FCD4u) {
        ctx->pc = 0x18FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCD0u;
        // 0x18fcd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FCD8u;
        goto label_18fcd8;
    }
    ctx->pc = 0x18FCD0u;
    SET_GPR_U32(ctx, 31, 0x18FCD8u);
    ctx->pc = 0x18FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCD0u;
    // 0x18fcd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18FCD0u, 0x18FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCD8u;
label_18fcd8:
    // 0x18fcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18fcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18fcdc:
    // 0x18fcdc: 0xc072596  jal         func_1C9658
label_18fce0:
    if (ctx->pc == 0x18FCE0u) {
        ctx->pc = 0x18FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCDCu;
        // 0x18fce0: 0x24450110  addiu       $a1, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FCE4u;
        goto label_18fce4;
    }
    ctx->pc = 0x18FCDCu;
    SET_GPR_U32(ctx, 31, 0x18FCE4u);
    ctx->pc = 0x18FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCDCu;
    // 0x18fce0: 0x24450110  addiu       $a1, $v0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9658u, 0x18FCDCu, 0x18FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FCE4u;
label_18fce4:
    // 0x18fce4: 0x104000e6  beqz        $v0, . + 4 + (0xE6 << 2)
label_18fce8:
    if (ctx->pc == 0x18FCE8u) {
        ctx->pc = 0x18FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCE4u;
        // 0x18fce8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FCECu;
        goto label_18fcec;
    }
    ctx->pc = 0x18FCE4u;
    {
        const bool branch_taken_0x18fce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCE4u;
        // 0x18fce8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fce4) {
            ctx->pc = 0x190080u;
            goto label_190080;
        }
    }
    ctx->pc = 0x18FCECu;
label_18fcec:
    // 0x18fcec: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_18fcf0:
    if (ctx->pc == 0x18FCF0u) {
        ctx->pc = 0x18FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCECu;
        // 0x18fcf0: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FCF4u;
        goto label_18fcf4;
    }
    ctx->pc = 0x18FCECu;
    {
        const bool branch_taken_0x18fcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCECu;
        // 0x18fcf0: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcec) {
            ctx->pc = 0x190080u;
            goto label_190080;
        }
    }
    ctx->pc = 0x18FCF4u;
label_18fcf4:
    // 0x18fcf4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x18fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_18fcf8:
    // 0x18fcf8: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x18fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
label_18fcfc:
    // 0x18fcfc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18fcfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_18fd00:
    // 0x18fd00: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x18fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_18fd04:
    // 0x18fd04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18fd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_18fd08:
    // 0x18fd08: 0x1443006a  bne         $v0, $v1, . + 4 + (0x6A << 2)
label_18fd0c:
    if (ctx->pc == 0x18FD0Cu) {
        ctx->pc = 0x18FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD08u;
        // 0x18fd0c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FD10u;
        goto label_18fd10;
    }
    ctx->pc = 0x18FD08u;
    {
        const bool branch_taken_0x18fd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD08u;
        // 0x18fd0c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd08) {
            ctx->pc = 0x18FEB4u;
            goto label_18feb4;
        }
    }
    ctx->pc = 0x18FD10u;
label_18fd10:
    // 0x18fd10: 0x8c840104  lw          $a0, 0x104($a0)
    ctx->pc = 0x18fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_18fd14:
    // 0x18fd14: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x18fd14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_18fd18:
    // 0x18fd18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18fd1c:
    // 0x18fd1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18fd20:
    // 0x18fd20: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x18fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_18fd24:
    // 0x18fd24: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x18fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_18fd28:
    // 0x18fd28: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x18fd28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_18fd2c:
    // 0x18fd2c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18fd2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18fd30:
    // 0x18fd30: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18fd30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_18fd34:
    // 0x18fd34: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18fd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_18fd38:
    // 0x18fd38: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x18fd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18fd3c:
    // 0x18fd3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fd3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fd40:
    // 0x18fd40: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x18fd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_18fd44:
    // 0x18fd44: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x18fd44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_18fd48:
    // 0x18fd48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18fd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18fd4c:
    // 0x18fd4c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x18fd4cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_18fd50:
    // 0x18fd50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18fd50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18fd54:
    // 0x18fd54: 0x0  nop
    ctx->pc = 0x18fd54u;
    // NOP
label_18fd58:
    // 0x18fd58: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18fd5c:
    if (ctx->pc == 0x18FD5Cu) {
        ctx->pc = 0x18FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD58u;
        // 0x18fd5c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FD60u;
        goto label_18fd60;
    }
    ctx->pc = 0x18FD58u;
    {
        const bool branch_taken_0x18fd58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD58u;
        // 0x18fd5c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd58) {
            ctx->pc = 0x18FD78u;
            goto label_18fd78;
        }
    }
    ctx->pc = 0x18FD60u;
label_18fd60:
    // 0x18fd60: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x18fd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18fd64:
    // 0x18fd64: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x18fd64u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_18fd68:
    // 0x18fd68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18fd68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18fd6c:
    // 0x18fd6c: 0x0  nop
    ctx->pc = 0x18fd6cu;
    // NOP
label_18fd70:
    // 0x18fd70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_18fd74:
    if (ctx->pc == 0x18FD74u) {
        ctx->pc = 0x18FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD70u;
        // 0x18fd74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FD78u;
        goto label_18fd78;
    }
    ctx->pc = 0x18FD70u;
    {
        const bool branch_taken_0x18fd70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18fd70) {
            ctx->pc = 0x18FD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FD70u;
            // 0x18fd74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FD78u;
            goto label_18fd78;
        }
    }
    ctx->pc = 0x18FD78u;
label_18fd78:
    // 0x18fd78: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_18fd7c:
    if (ctx->pc == 0x18FD7Cu) {
        ctx->pc = 0x18FD80u;
        goto label_18fd80;
    }
    ctx->pc = 0x18FD78u;
    {
        const bool branch_taken_0x18fd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fd78) {
            ctx->pc = 0x18FDC4u;
            goto label_18fdc4;
        }
    }
    ctx->pc = 0x18FD80u;
label_18fd80:
    // 0x18fd80: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18fd80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18fd84:
    // 0x18fd84: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x18fd84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18fd88:
    // 0x18fd88: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x18fd88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18fd8c:
    // 0x18fd8c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x18fd8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18fd90:
    // 0x18fd90: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x18fd90u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_18fd94:
    // 0x18fd94: 0x4a0003bf  vwaitq
    ctx->pc = 0x18fd94u;
    // VWAITQ (Q already resolved in this runtime)
label_18fd98:
    // 0x18fd98: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x18fd98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_18fd9c:
    // 0x18fd9c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18fd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_18fda0:
    // 0x18fda0: 0xc061a12  jal         func_186848
label_18fda4:
    if (ctx->pc == 0x18FDA4u) {
        ctx->pc = 0x18FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDA0u;
        // 0x18fda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FDA8u;
        goto label_18fda8;
    }
    ctx->pc = 0x18FDA0u;
    SET_GPR_U32(ctx, 31, 0x18FDA8u);
    ctx->pc = 0x18FDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FDA0u;
    // 0x18fda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18FDA0u, 0x18FDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FDA8u;
label_18fda8:
    // 0x18fda8: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18fdac:
    // 0x18fdac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18fdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fdb0:
    // 0x18fdb0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18fdb4:
    // 0x18fdb4: 0x40f809  jalr        $v0
label_18fdb8:
    if (ctx->pc == 0x18FDB8u) {
        ctx->pc = 0x18FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDB4u;
        // 0x18fdb8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FDBCu;
        goto label_18fdbc;
    }
    ctx->pc = 0x18FDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FDBCu);
        ctx->pc = 0x18FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDB4u;
        // 0x18fdb8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FDB4u, 0x18FDBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FDBCu;
label_18fdbc:
    // 0x18fdbc: 0x10000009  b           . + 4 + (0x9 << 2)
label_18fdc0:
    if (ctx->pc == 0x18FDC0u) {
        ctx->pc = 0x18FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDBCu;
        // 0x18fdc0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FDC4u;
        goto label_18fdc4;
    }
    ctx->pc = 0x18FDBCu;
    {
        const bool branch_taken_0x18fdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDBCu;
        // 0x18fdc0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdbc) {
            ctx->pc = 0x18FDE4u;
            goto label_18fde4;
        }
    }
    ctx->pc = 0x18FDC4u;
label_18fdc4:
    // 0x18fdc4: 0xc061a12  jal         func_186848
label_18fdc8:
    if (ctx->pc == 0x18FDC8u) {
        ctx->pc = 0x18FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDC4u;
        // 0x18fdc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FDCCu;
        goto label_18fdcc;
    }
    ctx->pc = 0x18FDC4u;
    SET_GPR_U32(ctx, 31, 0x18FDCCu);
    ctx->pc = 0x18FDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FDC4u;
    // 0x18fdc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18FDC4u, 0x18FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FDCCu;
label_18fdcc:
    // 0x18fdcc: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18fdd0:
    // 0x18fdd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18fdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fdd4:
    // 0x18fdd4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18fdd8:
    // 0x18fdd8: 0x40f809  jalr        $v0
label_18fddc:
    if (ctx->pc == 0x18FDDCu) {
        ctx->pc = 0x18FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDD8u;
        // 0x18fddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FDE0u;
        goto label_18fde0;
    }
    ctx->pc = 0x18FDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FDE0u);
        ctx->pc = 0x18FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDD8u;
        // 0x18fddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FDD8u, 0x18FDE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FDE0u;
label_18fde0:
    // 0x18fde0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18fde4:
    // 0x18fde4: 0xc08dbd8  jal         func_236F60
label_18fde8:
    if (ctx->pc == 0x18FDE8u) {
        ctx->pc = 0x18FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDE4u;
        // 0x18fde8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FDECu;
        goto label_18fdec;
    }
    ctx->pc = 0x18FDE4u;
    SET_GPR_U32(ctx, 31, 0x18FDECu);
    ctx->pc = 0x18FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FDE4u;
    // 0x18fde8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236F60u, 0x18FDE4u, 0x18FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FDECu;
label_18fdec:
    // 0x18fdec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18fdf0:
    // 0x18fdf0: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x18fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_18fdf4:
    // 0x18fdf4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18fdf8:
    // 0x18fdf8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x18fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18fdfc:
    // 0x18fdfc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x18fdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18fe00:
    // 0x18fe00: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x18fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18fe04:
    // 0x18fe04: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x18fe04u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_18fe08:
    // 0x18fe08: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x18fe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18fe0c:
    // 0x18fe0c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x18fe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18fe10:
    // 0x18fe10: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x18fe10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_18fe14:
    // 0x18fe14: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x18fe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18fe18:
    // 0x18fe18: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x18fe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18fe1c:
    // 0x18fe1c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x18fe1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_18fe20:
    // 0x18fe20: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x18fe20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
label_18fe24:
    // 0x18fe24: 0x3421a440  ori         $at, $at, 0xA440
    ctx->pc = 0x18fe24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42048);
label_18fe28:
    // 0x18fe28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18fe28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18fe2c:
    // 0x18fe2c: 0x0  nop
    ctx->pc = 0x18fe2cu;
    // NOP
label_18fe30:
    // 0x18fe30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18fe30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18fe34:
    // 0x18fe34: 0x0  nop
    ctx->pc = 0x18fe34u;
    // NOP
label_18fe38:
    // 0x18fe38: 0x45000092  bc1f        . + 4 + (0x92 << 2)
label_18fe3c:
    if (ctx->pc == 0x18FE3Cu) {
        ctx->pc = 0x18FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE38u;
        // 0x18fe3c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FE40u;
        goto label_18fe40;
    }
    ctx->pc = 0x18FE38u;
    {
        const bool branch_taken_0x18fe38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE38u;
        // 0x18fe3c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe38) {
            ctx->pc = 0x190084u;
            goto label_190084;
        }
    }
    ctx->pc = 0x18FE40u;
label_18fe40:
    // 0x18fe40: 0xc09550c  jal         func_255430
label_18fe44:
    if (ctx->pc == 0x18FE44u) {
        ctx->pc = 0x18FE48u;
        goto label_18fe48;
    }
    ctx->pc = 0x18FE40u;
    SET_GPR_U32(ctx, 31, 0x18FE48u);
    ctx->pc = 0x255430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255430u, 0x18FE40u, 0x18FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FE48u;
label_18fe48:
    // 0x18fe48: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_18fe4c:
    // 0x18fe4c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_18fe50:
    // 0x18fe50: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18fe54:
    if (ctx->pc == 0x18FE54u) {
        ctx->pc = 0x18FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE50u;
        // 0x18fe54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FE58u;
        goto label_18fe58;
    }
    ctx->pc = 0x18FE50u;
    {
        const bool branch_taken_0x18fe50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE50u;
        // 0x18fe54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe50) {
            ctx->pc = 0x18FE6Cu;
            goto label_18fe6c;
        }
    }
    ctx->pc = 0x18FE58u;
label_18fe58:
    // 0x18fe58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18fe58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18fe5c:
    // 0x18fe5c: 0x0  nop
    ctx->pc = 0x18fe5cu;
    // NOP
label_18fe60:
    // 0x18fe60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18fe60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18fe64:
    // 0x18fe64: 0x10000007  b           . + 4 + (0x7 << 2)
label_18fe68:
    if (ctx->pc == 0x18FE68u) {
        ctx->pc = 0x18FE6Cu;
        goto label_18fe6c;
    }
    ctx->pc = 0x18FE64u;
    {
        const bool branch_taken_0x18fe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fe64) {
            ctx->pc = 0x18FE84u;
            goto label_18fe84;
        }
    }
    ctx->pc = 0x18FE6Cu;
label_18fe6c:
    // 0x18fe6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18fe6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18fe70:
    // 0x18fe70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18fe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18fe74:
    // 0x18fe74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18fe74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18fe78:
    // 0x18fe78: 0x0  nop
    ctx->pc = 0x18fe78u;
    // NOP
label_18fe7c:
    // 0x18fe7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18fe7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18fe80:
    // 0x18fe80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18fe80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18fe84:
    // 0x18fe84: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18fe84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18fe88:
    // 0x18fe88: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18fe88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18fe8c:
    // 0x18fe8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18fe8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18fe90:
    // 0x18fe90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18fe94:
    // 0x18fe94: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18fe98:
    // 0x18fe98: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x18fe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_18fe9c:
    // 0x18fe9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18fe9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18fea0:
    // 0x18fea0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x18fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_18fea4:
    // 0x18fea4: 0xc0cda26  jal         func_336898
label_18fea8:
    if (ctx->pc == 0x18FEA8u) {
        ctx->pc = 0x18FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEA4u;
        // 0x18fea8: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FEACu;
        goto label_18feac;
    }
    ctx->pc = 0x18FEA4u;
    SET_GPR_U32(ctx, 31, 0x18FEACu);
    ctx->pc = 0x18FEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FEA4u;
    // 0x18fea8: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x18FEA4u, 0x18FEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FEACu;
label_18feac:
    // 0x18feac: 0x10000075  b           . + 4 + (0x75 << 2)
label_18feb0:
    if (ctx->pc == 0x18FEB0u) {
        ctx->pc = 0x18FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEACu;
        // 0x18feb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FEB4u;
        goto label_18feb4;
    }
    ctx->pc = 0x18FEACu;
    {
        const bool branch_taken_0x18feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEACu;
        // 0x18feb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18feac) {
            ctx->pc = 0x190084u;
            goto label_190084;
        }
    }
    ctx->pc = 0x18FEB4u;
label_18feb4:
    // 0x18feb4: 0x8c840104  lw          $a0, 0x104($a0)
    ctx->pc = 0x18feb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_18feb8:
    // 0x18feb8: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x18feb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_18febc:
    // 0x18febc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18febcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18fec0:
    // 0x18fec0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18fec4:
    // 0x18fec4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x18fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_18fec8:
    // 0x18fec8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x18fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_18fecc:
    // 0x18fecc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x18feccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_18fed0:
    // 0x18fed0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18fed0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18fed4:
    // 0x18fed4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18fed4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_18fed8:
    // 0x18fed8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18fed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_18fedc:
    // 0x18fedc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x18fedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18fee0:
    // 0x18fee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fee4:
    // 0x18fee4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x18fee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_18fee8:
    // 0x18fee8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x18fee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_18feec:
    // 0x18feec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18feecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18fef0:
    // 0x18fef0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x18fef0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_18fef4:
    // 0x18fef4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18fef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18fef8:
    // 0x18fef8: 0x0  nop
    ctx->pc = 0x18fef8u;
    // NOP
label_18fefc:
    // 0x18fefc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18ff00:
    if (ctx->pc == 0x18FF00u) {
        ctx->pc = 0x18FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEFCu;
        // 0x18ff00: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF04u;
        goto label_18ff04;
    }
    ctx->pc = 0x18FEFCu;
    {
        const bool branch_taken_0x18fefc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEFCu;
        // 0x18ff00: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fefc) {
            ctx->pc = 0x18FF1Cu;
            goto label_18ff1c;
        }
    }
    ctx->pc = 0x18FF04u;
label_18ff04:
    // 0x18ff04: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x18ff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ff08:
    // 0x18ff08: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x18ff08u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_18ff0c:
    // 0x18ff0c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18ff0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ff10:
    // 0x18ff10: 0x0  nop
    ctx->pc = 0x18ff10u;
    // NOP
label_18ff14:
    // 0x18ff14: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_18ff18:
    if (ctx->pc == 0x18FF18u) {
        ctx->pc = 0x18FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF14u;
        // 0x18ff18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF1Cu;
        goto label_18ff1c;
    }
    ctx->pc = 0x18FF14u;
    {
        const bool branch_taken_0x18ff14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ff14) {
            ctx->pc = 0x18FF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FF14u;
            // 0x18ff18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FF1Cu;
            goto label_18ff1c;
        }
    }
    ctx->pc = 0x18FF1Cu;
label_18ff1c:
    // 0x18ff1c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_18ff20:
    if (ctx->pc == 0x18FF20u) {
        ctx->pc = 0x18FF24u;
        goto label_18ff24;
    }
    ctx->pc = 0x18FF1Cu;
    {
        const bool branch_taken_0x18ff1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ff1c) {
            ctx->pc = 0x18FF68u;
            goto label_18ff68;
        }
    }
    ctx->pc = 0x18FF24u;
label_18ff24:
    // 0x18ff24: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18ff24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18ff28:
    // 0x18ff28: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x18ff28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18ff2c:
    // 0x18ff2c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x18ff2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18ff30:
    // 0x18ff30: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x18ff30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_18ff34:
    // 0x18ff34: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x18ff34u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_18ff38:
    // 0x18ff38: 0x4a0003bf  vwaitq
    ctx->pc = 0x18ff38u;
    // VWAITQ (Q already resolved in this runtime)
label_18ff3c:
    // 0x18ff3c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x18ff3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_18ff40:
    // 0x18ff40: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18ff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_18ff44:
    // 0x18ff44: 0xc061a12  jal         func_186848
label_18ff48:
    if (ctx->pc == 0x18FF48u) {
        ctx->pc = 0x18FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF44u;
        // 0x18ff48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF4Cu;
        goto label_18ff4c;
    }
    ctx->pc = 0x18FF44u;
    SET_GPR_U32(ctx, 31, 0x18FF4Cu);
    ctx->pc = 0x18FF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF44u;
    // 0x18ff48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18FF44u, 0x18FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FF4Cu;
label_18ff4c:
    // 0x18ff4c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18ff50:
    // 0x18ff50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ff50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ff54:
    // 0x18ff54: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18ff58:
    // 0x18ff58: 0x40f809  jalr        $v0
label_18ff5c:
    if (ctx->pc == 0x18FF5Cu) {
        ctx->pc = 0x18FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF58u;
        // 0x18ff5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF60u;
        goto label_18ff60;
    }
    ctx->pc = 0x18FF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FF60u);
        ctx->pc = 0x18FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF58u;
        // 0x18ff5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FF58u, 0x18FF60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FF60u;
label_18ff60:
    // 0x18ff60: 0x10000009  b           . + 4 + (0x9 << 2)
label_18ff64:
    if (ctx->pc == 0x18FF64u) {
        ctx->pc = 0x18FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF60u;
        // 0x18ff64: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF68u;
        goto label_18ff68;
    }
    ctx->pc = 0x18FF60u;
    {
        const bool branch_taken_0x18ff60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF60u;
        // 0x18ff64: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff60) {
            ctx->pc = 0x18FF88u;
            goto label_18ff88;
        }
    }
    ctx->pc = 0x18FF68u;
label_18ff68:
    // 0x18ff68: 0xc061a12  jal         func_186848
label_18ff6c:
    if (ctx->pc == 0x18FF6Cu) {
        ctx->pc = 0x18FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF68u;
        // 0x18ff6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF70u;
        goto label_18ff70;
    }
    ctx->pc = 0x18FF68u;
    SET_GPR_U32(ctx, 31, 0x18FF70u);
    ctx->pc = 0x18FF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FF68u;
    // 0x18ff6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18FF68u, 0x18FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FF70u;
label_18ff70:
    // 0x18ff70: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18ff74:
    // 0x18ff74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ff74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ff78:
    // 0x18ff78: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18ff7c:
    // 0x18ff7c: 0x40f809  jalr        $v0
label_18ff80:
    if (ctx->pc == 0x18FF80u) {
        ctx->pc = 0x18FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF7Cu;
        // 0x18ff80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF84u;
        goto label_18ff84;
    }
    ctx->pc = 0x18FF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FF84u);
        ctx->pc = 0x18FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF7Cu;
        // 0x18ff80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FF7Cu, 0x18FF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FF84u;
label_18ff84:
    // 0x18ff84: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_18ff88:
    // 0x18ff88: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_18ff8c:
    // 0x18ff8c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18ff90:
    if (ctx->pc == 0x18FF90u) {
        ctx->pc = 0x18FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF8Cu;
        // 0x18ff90: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FF94u;
        goto label_18ff94;
    }
    ctx->pc = 0x18FF8Cu;
    {
        const bool branch_taken_0x18ff8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FF8Cu;
        // 0x18ff90: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff8c) {
            ctx->pc = 0x18FFA8u;
            goto label_18ffa8;
        }
    }
    ctx->pc = 0x18FF94u;
label_18ff94:
    // 0x18ff94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18ff94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ff98:
    // 0x18ff98: 0x0  nop
    ctx->pc = 0x18ff98u;
    // NOP
label_18ff9c:
    // 0x18ff9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18ff9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18ffa0:
    // 0x18ffa0: 0x10000007  b           . + 4 + (0x7 << 2)
label_18ffa4:
    if (ctx->pc == 0x18FFA4u) {
        ctx->pc = 0x18FFA8u;
        goto label_18ffa8;
    }
    ctx->pc = 0x18FFA0u;
    {
        const bool branch_taken_0x18ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ffa0) {
            ctx->pc = 0x18FFC0u;
            goto label_18ffc0;
        }
    }
    ctx->pc = 0x18FFA8u;
label_18ffa8:
    // 0x18ffa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18ffa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18ffac:
    // 0x18ffac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18ffacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18ffb0:
    // 0x18ffb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18ffb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ffb4:
    // 0x18ffb4: 0x0  nop
    ctx->pc = 0x18ffb4u;
    // NOP
label_18ffb8:
    // 0x18ffb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18ffb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18ffbc:
    // 0x18ffbc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18ffbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18ffc0:
    // 0x18ffc0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18ffc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18ffc4:
    // 0x18ffc4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18ffc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18ffc8:
    // 0x18ffc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ffc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ffcc:
    // 0x18ffcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18ffd0:
    // 0x18ffd0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x18ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_18ffd4:
    // 0x18ffd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18ffd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18ffd8:
    // 0x18ffd8: 0x10000029  b           . + 4 + (0x29 << 2)
label_18ffdc:
    if (ctx->pc == 0x18FFDCu) {
        ctx->pc = 0x18FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFD8u;
        // 0x18ffdc: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FFE0u;
        goto label_18ffe0;
    }
    ctx->pc = 0x18FFD8u;
    {
        const bool branch_taken_0x18ffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFD8u;
        // 0x18ffdc: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffd8) {
            ctx->pc = 0x190080u;
            goto label_190080;
        }
    }
    ctx->pc = 0x18FFE0u;
label_18ffe0:
    // 0x18ffe0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x18ffe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ffe4:
    // 0x18ffe4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_18ffe8:
    // 0x18ffe8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x18ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ffec:
    // 0x18ffec: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_18fff0:
    // 0x18fff0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18fff4:
    if (ctx->pc == 0x18FFF4u) {
        ctx->pc = 0x18FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFF0u;
        // 0x18fff4: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FFF8u;
        goto label_18fff8;
    }
    ctx->pc = 0x18FFF0u;
    {
        const bool branch_taken_0x18fff0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFF0u;
        // 0x18fff4: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fff0) {
            ctx->pc = 0x19000Cu;
            goto label_19000c;
        }
    }
    ctx->pc = 0x18FFF8u;
label_18fff8:
    // 0x18fff8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18fff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18fffc:
    // 0x18fffc: 0x0  nop
    ctx->pc = 0x18fffcu;
    // NOP
label_190000:
    // 0x190000: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_190004:
    // 0x190004: 0x10000008  b           . + 4 + (0x8 << 2)
label_190008:
    if (ctx->pc == 0x190008u) {
        ctx->pc = 0x19000Cu;
        goto label_19000c;
    }
    ctx->pc = 0x190004u;
    {
        const bool branch_taken_0x190004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190004) {
            ctx->pc = 0x190028u;
            goto label_190028;
        }
    }
    ctx->pc = 0x19000Cu;
label_19000c:
    // 0x19000c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19000cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_190010:
    // 0x190010: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_190014:
    // 0x190014: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x190014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_190018:
    // 0x190018: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19001c:
    // 0x19001c: 0x0  nop
    ctx->pc = 0x19001cu;
    // NOP
label_190020:
    // 0x190020: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_190024:
    // 0x190024: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x190024u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_190028:
    // 0x190028: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x190028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19002c:
    // 0x19002c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19002cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_190030:
    // 0x190030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190034:
    // 0x190034: 0x0  nop
    ctx->pc = 0x190034u;
    // NOP
label_190038:
    // 0x190038: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x190038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19003c:
    // 0x19003c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19003cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190040:
    // 0x190040: 0x0  nop
    ctx->pc = 0x190040u;
    // NOP
label_190044:
    // 0x190044: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_190048:
    if (ctx->pc == 0x190048u) {
        ctx->pc = 0x190048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190044u;
        // 0x190048: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19004Cu;
        goto label_19004c;
    }
    ctx->pc = 0x190044u;
    {
        const bool branch_taken_0x190044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190044) {
            ctx->pc = 0x190048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190044u;
            // 0x190048: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190060u;
            goto label_190060;
        }
    }
    ctx->pc = 0x19004Cu;
label_19004c:
    // 0x19004c: 0xc095510  jal         func_255440
label_190050:
    if (ctx->pc == 0x190050u) {
        ctx->pc = 0x190050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19004Cu;
        // 0x190050: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190054u;
        goto label_190054;
    }
    ctx->pc = 0x19004Cu;
    SET_GPR_U32(ctx, 31, 0x190054u);
    ctx->pc = 0x190050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19004Cu;
    // 0x190050: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255440u, 0x19004Cu, 0x190054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190054u;
label_190054:
    // 0x190054: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x190054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_190058:
    // 0x190058: 0x10000009  b           . + 4 + (0x9 << 2)
label_19005c:
    if (ctx->pc == 0x19005Cu) {
        ctx->pc = 0x19005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190058u;
        // 0x19005c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190060u;
        goto label_190060;
    }
    ctx->pc = 0x190058u;
    {
        const bool branch_taken_0x190058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190058u;
        // 0x19005c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190058) {
            ctx->pc = 0x190080u;
            goto label_190080;
        }
    }
    ctx->pc = 0x190060u;
label_190060:
    // 0x190060: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x190060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
label_190064:
    // 0x190064: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x190064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_190068:
    // 0x190068: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x190068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_19006c:
    // 0x19006c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_190070:
    // 0x190070: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_190074:
    if (ctx->pc == 0x190074u) {
        ctx->pc = 0x190074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190070u;
        // 0x190074: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190078u;
        goto label_190078;
    }
    ctx->pc = 0x190070u;
    {
        const bool branch_taken_0x190070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x190074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190070u;
        // 0x190074: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190070) {
            ctx->pc = 0x190084u;
            goto label_190084;
        }
    }
    ctx->pc = 0x190078u;
label_190078:
    // 0x190078: 0xc09550c  jal         func_255430
label_19007c:
    if (ctx->pc == 0x19007Cu) {
        ctx->pc = 0x19007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190078u;
        // 0x19007c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190080u;
        goto label_190080;
    }
    ctx->pc = 0x190078u;
    SET_GPR_U32(ctx, 31, 0x190080u);
    ctx->pc = 0x19007Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190078u;
    // 0x19007c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255430u, 0x190078u, 0x190080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190080u;
label_190080:
    // 0x190080: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x190080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_190084:
    // 0x190084: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x190084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_190088:
    // 0x190088: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x190088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19008c:
    // 0x19008c: 0x3e00008  jr          $ra
label_190090:
    if (ctx->pc == 0x190090u) {
        ctx->pc = 0x190090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19008Cu;
        // 0x190090: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190094u;
        goto label_190094;
    }
    ctx->pc = 0x19008Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19008Cu;
        // 0x190090: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19008Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190094u;
label_190094:
    // 0x190094: 0x0  nop
    ctx->pc = 0x190094u;
    // NOP
    ctx->pc = 0x190098u;
}
