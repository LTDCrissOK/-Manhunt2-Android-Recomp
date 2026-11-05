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

// Function: sub_0022FAE0
// Address: 0x22fae0 - 0x22fdc0
void sub_0022FAE0_0x22fae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FAE0_0x22fae0");
#endif

    switch (ctx->pc) {
        case 0x22fae0u: goto label_22fae0;
        case 0x22fae4u: goto label_22fae4;
        case 0x22fae8u: goto label_22fae8;
        case 0x22faecu: goto label_22faec;
        case 0x22faf0u: goto label_22faf0;
        case 0x22faf4u: goto label_22faf4;
        case 0x22faf8u: goto label_22faf8;
        case 0x22fafcu: goto label_22fafc;
        case 0x22fb00u: goto label_22fb00;
        case 0x22fb04u: goto label_22fb04;
        case 0x22fb08u: goto label_22fb08;
        case 0x22fb0cu: goto label_22fb0c;
        case 0x22fb10u: goto label_22fb10;
        case 0x22fb14u: goto label_22fb14;
        case 0x22fb18u: goto label_22fb18;
        case 0x22fb1cu: goto label_22fb1c;
        case 0x22fb20u: goto label_22fb20;
        case 0x22fb24u: goto label_22fb24;
        case 0x22fb28u: goto label_22fb28;
        case 0x22fb2cu: goto label_22fb2c;
        case 0x22fb30u: goto label_22fb30;
        case 0x22fb34u: goto label_22fb34;
        case 0x22fb38u: goto label_22fb38;
        case 0x22fb3cu: goto label_22fb3c;
        case 0x22fb40u: goto label_22fb40;
        case 0x22fb44u: goto label_22fb44;
        case 0x22fb48u: goto label_22fb48;
        case 0x22fb4cu: goto label_22fb4c;
        case 0x22fb50u: goto label_22fb50;
        case 0x22fb54u: goto label_22fb54;
        case 0x22fb58u: goto label_22fb58;
        case 0x22fb5cu: goto label_22fb5c;
        case 0x22fb60u: goto label_22fb60;
        case 0x22fb64u: goto label_22fb64;
        case 0x22fb68u: goto label_22fb68;
        case 0x22fb6cu: goto label_22fb6c;
        case 0x22fb70u: goto label_22fb70;
        case 0x22fb74u: goto label_22fb74;
        case 0x22fb78u: goto label_22fb78;
        case 0x22fb7cu: goto label_22fb7c;
        case 0x22fb80u: goto label_22fb80;
        case 0x22fb84u: goto label_22fb84;
        case 0x22fb88u: goto label_22fb88;
        case 0x22fb8cu: goto label_22fb8c;
        case 0x22fb90u: goto label_22fb90;
        case 0x22fb94u: goto label_22fb94;
        case 0x22fb98u: goto label_22fb98;
        case 0x22fb9cu: goto label_22fb9c;
        case 0x22fba0u: goto label_22fba0;
        case 0x22fba4u: goto label_22fba4;
        case 0x22fba8u: goto label_22fba8;
        case 0x22fbacu: goto label_22fbac;
        case 0x22fbb0u: goto label_22fbb0;
        case 0x22fbb4u: goto label_22fbb4;
        case 0x22fbb8u: goto label_22fbb8;
        case 0x22fbbcu: goto label_22fbbc;
        case 0x22fbc0u: goto label_22fbc0;
        case 0x22fbc4u: goto label_22fbc4;
        case 0x22fbc8u: goto label_22fbc8;
        case 0x22fbccu: goto label_22fbcc;
        case 0x22fbd0u: goto label_22fbd0;
        case 0x22fbd4u: goto label_22fbd4;
        case 0x22fbd8u: goto label_22fbd8;
        case 0x22fbdcu: goto label_22fbdc;
        case 0x22fbe0u: goto label_22fbe0;
        case 0x22fbe4u: goto label_22fbe4;
        case 0x22fbe8u: goto label_22fbe8;
        case 0x22fbecu: goto label_22fbec;
        case 0x22fbf0u: goto label_22fbf0;
        case 0x22fbf4u: goto label_22fbf4;
        case 0x22fbf8u: goto label_22fbf8;
        case 0x22fbfcu: goto label_22fbfc;
        case 0x22fc00u: goto label_22fc00;
        case 0x22fc04u: goto label_22fc04;
        case 0x22fc08u: goto label_22fc08;
        case 0x22fc0cu: goto label_22fc0c;
        case 0x22fc10u: goto label_22fc10;
        case 0x22fc14u: goto label_22fc14;
        case 0x22fc18u: goto label_22fc18;
        case 0x22fc1cu: goto label_22fc1c;
        case 0x22fc20u: goto label_22fc20;
        case 0x22fc24u: goto label_22fc24;
        case 0x22fc28u: goto label_22fc28;
        case 0x22fc2cu: goto label_22fc2c;
        case 0x22fc30u: goto label_22fc30;
        case 0x22fc34u: goto label_22fc34;
        case 0x22fc38u: goto label_22fc38;
        case 0x22fc3cu: goto label_22fc3c;
        case 0x22fc40u: goto label_22fc40;
        case 0x22fc44u: goto label_22fc44;
        case 0x22fc48u: goto label_22fc48;
        case 0x22fc4cu: goto label_22fc4c;
        case 0x22fc50u: goto label_22fc50;
        case 0x22fc54u: goto label_22fc54;
        case 0x22fc58u: goto label_22fc58;
        case 0x22fc5cu: goto label_22fc5c;
        case 0x22fc60u: goto label_22fc60;
        case 0x22fc64u: goto label_22fc64;
        case 0x22fc68u: goto label_22fc68;
        case 0x22fc6cu: goto label_22fc6c;
        case 0x22fc70u: goto label_22fc70;
        case 0x22fc74u: goto label_22fc74;
        case 0x22fc78u: goto label_22fc78;
        case 0x22fc7cu: goto label_22fc7c;
        case 0x22fc80u: goto label_22fc80;
        case 0x22fc84u: goto label_22fc84;
        case 0x22fc88u: goto label_22fc88;
        case 0x22fc8cu: goto label_22fc8c;
        case 0x22fc90u: goto label_22fc90;
        case 0x22fc94u: goto label_22fc94;
        case 0x22fc98u: goto label_22fc98;
        case 0x22fc9cu: goto label_22fc9c;
        case 0x22fca0u: goto label_22fca0;
        case 0x22fca4u: goto label_22fca4;
        case 0x22fca8u: goto label_22fca8;
        case 0x22fcacu: goto label_22fcac;
        case 0x22fcb0u: goto label_22fcb0;
        case 0x22fcb4u: goto label_22fcb4;
        case 0x22fcb8u: goto label_22fcb8;
        case 0x22fcbcu: goto label_22fcbc;
        case 0x22fcc0u: goto label_22fcc0;
        case 0x22fcc4u: goto label_22fcc4;
        case 0x22fcc8u: goto label_22fcc8;
        case 0x22fcccu: goto label_22fccc;
        case 0x22fcd0u: goto label_22fcd0;
        case 0x22fcd4u: goto label_22fcd4;
        case 0x22fcd8u: goto label_22fcd8;
        case 0x22fcdcu: goto label_22fcdc;
        case 0x22fce0u: goto label_22fce0;
        case 0x22fce4u: goto label_22fce4;
        case 0x22fce8u: goto label_22fce8;
        case 0x22fcecu: goto label_22fcec;
        case 0x22fcf0u: goto label_22fcf0;
        case 0x22fcf4u: goto label_22fcf4;
        case 0x22fcf8u: goto label_22fcf8;
        case 0x22fcfcu: goto label_22fcfc;
        case 0x22fd00u: goto label_22fd00;
        case 0x22fd04u: goto label_22fd04;
        case 0x22fd08u: goto label_22fd08;
        case 0x22fd0cu: goto label_22fd0c;
        case 0x22fd10u: goto label_22fd10;
        case 0x22fd14u: goto label_22fd14;
        case 0x22fd18u: goto label_22fd18;
        case 0x22fd1cu: goto label_22fd1c;
        case 0x22fd20u: goto label_22fd20;
        case 0x22fd24u: goto label_22fd24;
        case 0x22fd28u: goto label_22fd28;
        case 0x22fd2cu: goto label_22fd2c;
        case 0x22fd30u: goto label_22fd30;
        case 0x22fd34u: goto label_22fd34;
        case 0x22fd38u: goto label_22fd38;
        case 0x22fd3cu: goto label_22fd3c;
        case 0x22fd40u: goto label_22fd40;
        case 0x22fd44u: goto label_22fd44;
        case 0x22fd48u: goto label_22fd48;
        case 0x22fd4cu: goto label_22fd4c;
        case 0x22fd50u: goto label_22fd50;
        case 0x22fd54u: goto label_22fd54;
        case 0x22fd58u: goto label_22fd58;
        case 0x22fd5cu: goto label_22fd5c;
        case 0x22fd60u: goto label_22fd60;
        case 0x22fd64u: goto label_22fd64;
        case 0x22fd68u: goto label_22fd68;
        case 0x22fd6cu: goto label_22fd6c;
        case 0x22fd70u: goto label_22fd70;
        case 0x22fd74u: goto label_22fd74;
        case 0x22fd78u: goto label_22fd78;
        case 0x22fd7cu: goto label_22fd7c;
        case 0x22fd80u: goto label_22fd80;
        case 0x22fd84u: goto label_22fd84;
        case 0x22fd88u: goto label_22fd88;
        case 0x22fd8cu: goto label_22fd8c;
        case 0x22fd90u: goto label_22fd90;
        case 0x22fd94u: goto label_22fd94;
        case 0x22fd98u: goto label_22fd98;
        case 0x22fd9cu: goto label_22fd9c;
        case 0x22fda0u: goto label_22fda0;
        case 0x22fda4u: goto label_22fda4;
        case 0x22fda8u: goto label_22fda8;
        case 0x22fdacu: goto label_22fdac;
        case 0x22fdb0u: goto label_22fdb0;
        case 0x22fdb4u: goto label_22fdb4;
        case 0x22fdb8u: goto label_22fdb8;
        case 0x22fdbcu: goto label_22fdbc;
        default: break;
    }

    ctx->pc = 0x22fae0u;

label_22fae0:
    // 0x22fae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22fae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22fae4:
    // 0x22fae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22fae8:
    // 0x22fae8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22fae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22faec:
    // 0x22faec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22faecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22faf0:
    // 0x22faf0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22faf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_22faf4:
    // 0x22faf4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22faf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22faf8:
    // 0x22faf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22faf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_22fafc:
    // 0x22fafc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22fafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22fb00:
    // 0x22fb00: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x22fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22fb04:
    // 0x22fb04: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x22fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_22fb08:
    // 0x22fb08: 0x2462ffd9  addiu       $v0, $v1, -0x27
    ctx->pc = 0x22fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967257));
label_22fb0c:
    // 0x22fb0c: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x22fb0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_22fb10:
    // 0x22fb10: 0x144000a3  bnez        $v0, . + 4 + (0xA3 << 2)
label_22fb14:
    if (ctx->pc == 0x22FB14u) {
        ctx->pc = 0x22FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB10u;
        // 0x22fb14: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB18u;
        goto label_22fb18;
    }
    ctx->pc = 0x22FB10u;
    {
        const bool branch_taken_0x22fb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB10u;
        // 0x22fb14: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb10) {
            ctx->pc = 0x22FDA0u;
            goto label_22fda0;
        }
    }
    ctx->pc = 0x22FB18u;
label_22fb18:
    // 0x22fb18: 0x2462ffed  addiu       $v0, $v1, -0x13
    ctx->pc = 0x22fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967277));
label_22fb1c:
    // 0x22fb1c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x22fb1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_22fb20:
    // 0x22fb20: 0x544000a0  bnel        $v0, $zero, . + 4 + (0xA0 << 2)
label_22fb24:
    if (ctx->pc == 0x22FB24u) {
        ctx->pc = 0x22FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB20u;
        // 0x22fb24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB28u;
        goto label_22fb28;
    }
    ctx->pc = 0x22FB20u;
    {
        const bool branch_taken_0x22fb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fb20) {
            ctx->pc = 0x22FB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FB20u;
            // 0x22fb24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDA4u;
            goto label_22fda4;
        }
    }
    ctx->pc = 0x22FB28u;
label_22fb28:
    // 0x22fb28: 0x2462ffb4  addiu       $v0, $v1, -0x4C
    ctx->pc = 0x22fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967220));
label_22fb2c:
    // 0x22fb2c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x22fb2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_22fb30:
    // 0x22fb30: 0x5440009c  bnel        $v0, $zero, . + 4 + (0x9C << 2)
label_22fb34:
    if (ctx->pc == 0x22FB34u) {
        ctx->pc = 0x22FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB30u;
        // 0x22fb34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB38u;
        goto label_22fb38;
    }
    ctx->pc = 0x22FB30u;
    {
        const bool branch_taken_0x22fb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fb30) {
            ctx->pc = 0x22FB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FB30u;
            // 0x22fb34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDA4u;
            goto label_22fda4;
        }
    }
    ctx->pc = 0x22FB38u;
label_22fb38:
    // 0x22fb38: 0x2462ffea  addiu       $v0, $v1, -0x16
    ctx->pc = 0x22fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967274));
label_22fb3c:
    // 0x22fb3c: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x22fb3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_22fb40:
    // 0x22fb40: 0x54400098  bnel        $v0, $zero, . + 4 + (0x98 << 2)
label_22fb44:
    if (ctx->pc == 0x22FB44u) {
        ctx->pc = 0x22FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB40u;
        // 0x22fb44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB48u;
        goto label_22fb48;
    }
    ctx->pc = 0x22FB40u;
    {
        const bool branch_taken_0x22fb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fb40) {
            ctx->pc = 0x22FB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FB40u;
            // 0x22fb44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDA4u;
            goto label_22fda4;
        }
    }
    ctx->pc = 0x22FB48u;
label_22fb48:
    // 0x22fb48: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x22fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_22fb4c:
    // 0x22fb4c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_22fb50:
    if (ctx->pc == 0x22FB50u) {
        ctx->pc = 0x22FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB4Cu;
        // 0x22fb50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB54u;
        goto label_22fb54;
    }
    ctx->pc = 0x22FB4Cu;
    {
        const bool branch_taken_0x22fb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB4Cu;
        // 0x22fb50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb4c) {
            ctx->pc = 0x22FB6Cu;
            goto label_22fb6c;
        }
    }
    ctx->pc = 0x22FB54u;
label_22fb54:
    // 0x22fb54: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x22fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_22fb58:
    // 0x22fb58: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x22fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_22fb5c:
    // 0x22fb5c: 0x40f809  jalr        $v0
label_22fb60:
    if (ctx->pc == 0x22FB60u) {
        ctx->pc = 0x22FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB5Cu;
        // 0x22fb60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB64u;
        goto label_22fb64;
    }
    ctx->pc = 0x22FB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22FB64u);
        ctx->pc = 0x22FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB5Cu;
        // 0x22fb60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FB5Cu, 0x22FB64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FB64u;
label_22fb64:
    // 0x22fb64: 0x5040008f  beql        $v0, $zero, . + 4 + (0x8F << 2)
label_22fb68:
    if (ctx->pc == 0x22FB68u) {
        ctx->pc = 0x22FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB64u;
        // 0x22fb68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB6Cu;
        goto label_22fb6c;
    }
    ctx->pc = 0x22FB64u;
    {
        const bool branch_taken_0x22fb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fb64) {
            ctx->pc = 0x22FB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FB64u;
            // 0x22fb68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDA4u;
            goto label_22fda4;
        }
    }
    ctx->pc = 0x22FB6Cu;
label_22fb6c:
    // 0x22fb6c: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x22fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_22fb70:
    // 0x22fb70: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x22fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_22fb74:
    // 0x22fb74: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x22fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_22fb78:
    // 0x22fb78: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_22fb7c:
    if (ctx->pc == 0x22FB7Cu) {
        ctx->pc = 0x22FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB78u;
        // 0x22fb7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB80u;
        goto label_22fb80;
    }
    ctx->pc = 0x22FB78u;
    {
        const bool branch_taken_0x22fb78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB78u;
        // 0x22fb7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb78) {
            ctx->pc = 0x22FB9Cu;
            goto label_22fb9c;
        }
    }
    ctx->pc = 0x22FB80u;
label_22fb80:
    // 0x22fb80: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22fb84:
    // 0x22fb84: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_22fb88:
    if (ctx->pc == 0x22FB88u) {
        ctx->pc = 0x22FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB84u;
        // 0x22fb88: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB8Cu;
        goto label_22fb8c;
    }
    ctx->pc = 0x22FB84u;
    {
        const bool branch_taken_0x22fb84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB84u;
        // 0x22fb88: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb84) {
            ctx->pc = 0x22FB9Cu;
            goto label_22fb9c;
        }
    }
    ctx->pc = 0x22FB8Cu;
label_22fb8c:
    // 0x22fb8c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22fb90:
    if (ctx->pc == 0x22FB90u) {
        ctx->pc = 0x22FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB8Cu;
        // 0x22fb90: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB94u;
        goto label_22fb94;
    }
    ctx->pc = 0x22FB8Cu;
    {
        const bool branch_taken_0x22fb8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB8Cu;
        // 0x22fb90: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb8c) {
            ctx->pc = 0x22FB9Cu;
            goto label_22fb9c;
        }
    }
    ctx->pc = 0x22FB94u;
label_22fb94:
    // 0x22fb94: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_22fb98:
    if (ctx->pc == 0x22FB98u) {
        ctx->pc = 0x22FB9Cu;
        goto label_22fb9c;
    }
    ctx->pc = 0x22FB94u;
    {
        const bool branch_taken_0x22fb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22fb94) {
            ctx->pc = 0x22FBA0u;
            goto label_22fba0;
        }
    }
    ctx->pc = 0x22FB9Cu;
label_22fb9c:
    // 0x22fb9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22fba0:
    // 0x22fba0: 0x54800080  bnel        $a0, $zero, . + 4 + (0x80 << 2)
label_22fba4:
    if (ctx->pc == 0x22FBA4u) {
        ctx->pc = 0x22FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBA0u;
        // 0x22fba4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBA8u;
        goto label_22fba8;
    }
    ctx->pc = 0x22FBA0u;
    {
        const bool branch_taken_0x22fba0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fba0) {
            ctx->pc = 0x22FBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FBA0u;
            // 0x22fba4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDA4u;
            goto label_22fda4;
        }
    }
    ctx->pc = 0x22FBA8u;
label_22fba8:
    // 0x22fba8: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x22fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22fbac:
    // 0x22fbac: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x22fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_22fbb0:
    // 0x22fbb0: 0x38420045  xori        $v0, $v0, 0x45
    ctx->pc = 0x22fbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)69);
label_22fbb4:
    // 0x22fbb4: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
label_22fbb8:
    if (ctx->pc == 0x22FBB8u) {
        ctx->pc = 0x22FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBB4u;
        // 0x22fbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBBCu;
        goto label_22fbbc;
    }
    ctx->pc = 0x22FBB4u;
    {
        const bool branch_taken_0x22fbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBB4u;
        // 0x22fbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbb4) {
            ctx->pc = 0x22FDA0u;
            goto label_22fda0;
        }
    }
    ctx->pc = 0x22FBBCu;
label_22fbbc:
    // 0x22fbbc: 0xc08a15a  jal         func_228568
label_22fbc0:
    if (ctx->pc == 0x22FBC0u) {
        ctx->pc = 0x22FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBBCu;
        // 0x22fbc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBC4u;
        goto label_22fbc4;
    }
    ctx->pc = 0x22FBBCu;
    SET_GPR_U32(ctx, 31, 0x22FBC4u);
    ctx->pc = 0x22FBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBBCu;
    // 0x22fbc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x22FBBCu, 0x22FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FBC4u;
label_22fbc4:
    // 0x22fbc4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22fbc8:
    // 0x22fbc8: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
label_22fbcc:
    if (ctx->pc == 0x22FBCCu) {
        ctx->pc = 0x22FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBC8u;
        // 0x22fbcc: 0x8c92014c  lw          $s2, 0x14C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBD0u;
        goto label_22fbd0;
    }
    ctx->pc = 0x22FBC8u;
    {
        const bool branch_taken_0x22fbc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBC8u;
        // 0x22fbcc: 0x8c92014c  lw          $s2, 0x14C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbc8) {
            ctx->pc = 0x22FC34u;
            goto label_22fc34;
        }
    }
    ctx->pc = 0x22FBD0u;
label_22fbd0:
    // 0x22fbd0: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x22fbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_22fbd4:
    // 0x22fbd4: 0xc06a0cc  jal         func_1A8330
label_22fbd8:
    if (ctx->pc == 0x22FBD8u) {
        ctx->pc = 0x22FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBD4u;
        // 0x22fbd8: 0x240607a0  addiu       $a2, $zero, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBDCu;
        goto label_22fbdc;
    }
    ctx->pc = 0x22FBD4u;
    SET_GPR_U32(ctx, 31, 0x22FBDCu);
    ctx->pc = 0x22FBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBD4u;
    // 0x22fbd8: 0x240607a0  addiu       $a2, $zero, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22FBD4u, 0x22FBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FBDCu;
label_22fbdc:
    // 0x22fbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fbe0:
    // 0x22fbe0: 0xc08fc4e  jal         func_23F138
label_22fbe4:
    if (ctx->pc == 0x22FBE4u) {
        ctx->pc = 0x22FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBE0u;
        // 0x22fbe4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBE8u;
        goto label_22fbe8;
    }
    ctx->pc = 0x22FBE0u;
    SET_GPR_U32(ctx, 31, 0x22FBE8u);
    ctx->pc = 0x22FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBE0u;
    // 0x22fbe4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x22FBE0u, 0x22FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FBE8u;
label_22fbe8:
    // 0x22fbe8: 0xc08f672  jal         func_23D9C8
label_22fbec:
    if (ctx->pc == 0x22FBECu) {
        ctx->pc = 0x22FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBE8u;
        // 0x22fbec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBF0u;
        goto label_22fbf0;
    }
    ctx->pc = 0x22FBE8u;
    SET_GPR_U32(ctx, 31, 0x22FBF0u);
    ctx->pc = 0x22FBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBE8u;
    // 0x22fbec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x22FBE8u, 0x22FBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FBF0u;
label_22fbf0:
    // 0x22fbf0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22fbf4:
    if (ctx->pc == 0x22FBF4u) {
        ctx->pc = 0x22FBF8u;
        goto label_22fbf8;
    }
    ctx->pc = 0x22FBF0u;
    {
        const bool branch_taken_0x22fbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fbf0) {
            ctx->pc = 0x22FC0Cu;
            goto label_22fc0c;
        }
    }
    ctx->pc = 0x22FBF8u;
label_22fbf8:
    // 0x22fbf8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22fbfc:
    // 0x22fbfc: 0xc069c14  jal         func_1A7050
label_22fc00:
    if (ctx->pc == 0x22FC00u) {
        ctx->pc = 0x22FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBFCu;
        // 0x22fc00: 0x2405079b  addiu       $a1, $zero, 0x79B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1947));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC04u;
        goto label_22fc04;
    }
    ctx->pc = 0x22FBFCu;
    SET_GPR_U32(ctx, 31, 0x22FC04u);
    ctx->pc = 0x22FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBFCu;
    // 0x22fc00: 0x2405079b  addiu       $a1, $zero, 0x79B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1947));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7050u, 0x22FBFCu, 0x22FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC04u;
label_22fc04:
    // 0x22fc04: 0x1000001a  b           . + 4 + (0x1A << 2)
label_22fc08:
    if (ctx->pc == 0x22FC08u) {
        ctx->pc = 0x22FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC04u;
        // 0x22fc08: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC0Cu;
        goto label_22fc0c;
    }
    ctx->pc = 0x22FC04u;
    {
        const bool branch_taken_0x22fc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC04u;
        // 0x22fc08: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc04) {
            ctx->pc = 0x22FC70u;
            goto label_22fc70;
        }
    }
    ctx->pc = 0x22FC0Cu;
label_22fc0c:
    // 0x22fc0c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_22fc10:
    if (ctx->pc == 0x22FC10u) {
        ctx->pc = 0x22FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC0Cu;
        // 0x22fc10: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC14u;
        goto label_22fc14;
    }
    ctx->pc = 0x22FC0Cu;
    {
        const bool branch_taken_0x22fc0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC0Cu;
        // 0x22fc10: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc0c) {
            ctx->pc = 0x22FC24u;
            goto label_22fc24;
        }
    }
    ctx->pc = 0x22FC14u;
label_22fc14:
    // 0x22fc14: 0xc069c14  jal         func_1A7050
label_22fc18:
    if (ctx->pc == 0x22FC18u) {
        ctx->pc = 0x22FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC14u;
        // 0x22fc18: 0x24050798  addiu       $a1, $zero, 0x798 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC1Cu;
        goto label_22fc1c;
    }
    ctx->pc = 0x22FC14u;
    SET_GPR_U32(ctx, 31, 0x22FC1Cu);
    ctx->pc = 0x22FC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC14u;
    // 0x22fc18: 0x24050798  addiu       $a1, $zero, 0x798 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7050u, 0x22FC14u, 0x22FC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC1Cu;
label_22fc1c:
    // 0x22fc1c: 0x10000014  b           . + 4 + (0x14 << 2)
label_22fc20:
    if (ctx->pc == 0x22FC20u) {
        ctx->pc = 0x22FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC1Cu;
        // 0x22fc20: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC24u;
        goto label_22fc24;
    }
    ctx->pc = 0x22FC1Cu;
    {
        const bool branch_taken_0x22fc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC1Cu;
        // 0x22fc20: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc1c) {
            ctx->pc = 0x22FC70u;
            goto label_22fc70;
        }
    }
    ctx->pc = 0x22FC24u;
label_22fc24:
    // 0x22fc24: 0xc069c14  jal         func_1A7050
label_22fc28:
    if (ctx->pc == 0x22FC28u) {
        ctx->pc = 0x22FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC24u;
        // 0x22fc28: 0x24050797  addiu       $a1, $zero, 0x797 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1943));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC2Cu;
        goto label_22fc2c;
    }
    ctx->pc = 0x22FC24u;
    SET_GPR_U32(ctx, 31, 0x22FC2Cu);
    ctx->pc = 0x22FC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC24u;
    // 0x22fc28: 0x24050797  addiu       $a1, $zero, 0x797 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1943));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7050u, 0x22FC24u, 0x22FC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC2Cu;
label_22fc2c:
    // 0x22fc2c: 0x10000010  b           . + 4 + (0x10 << 2)
label_22fc30:
    if (ctx->pc == 0x22FC30u) {
        ctx->pc = 0x22FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC2Cu;
        // 0x22fc30: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC34u;
        goto label_22fc34;
    }
    ctx->pc = 0x22FC2Cu;
    {
        const bool branch_taken_0x22fc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC2Cu;
        // 0x22fc30: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc2c) {
            ctx->pc = 0x22FC70u;
            goto label_22fc70;
        }
    }
    ctx->pc = 0x22FC34u;
label_22fc34:
    // 0x22fc34: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x22fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_22fc38:
    // 0x22fc38: 0xc06a0cc  jal         func_1A8330
label_22fc3c:
    if (ctx->pc == 0x22FC3Cu) {
        ctx->pc = 0x22FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC38u;
        // 0x22fc3c: 0x2406079d  addiu       $a2, $zero, 0x79D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1949));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC40u;
        goto label_22fc40;
    }
    ctx->pc = 0x22FC38u;
    SET_GPR_U32(ctx, 31, 0x22FC40u);
    ctx->pc = 0x22FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC38u;
    // 0x22fc3c: 0x2406079d  addiu       $a2, $zero, 0x79D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1949));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22FC38u, 0x22FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC40u;
label_22fc40:
    // 0x22fc40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fc44:
    // 0x22fc44: 0xc08fc4e  jal         func_23F138
label_22fc48:
    if (ctx->pc == 0x22FC48u) {
        ctx->pc = 0x22FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC44u;
        // 0x22fc48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC4Cu;
        goto label_22fc4c;
    }
    ctx->pc = 0x22FC44u;
    SET_GPR_U32(ctx, 31, 0x22FC4Cu);
    ctx->pc = 0x22FC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC44u;
    // 0x22fc48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x22FC44u, 0x22FC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC4Cu;
label_22fc4c:
    // 0x22fc4c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_22fc50:
    if (ctx->pc == 0x22FC50u) {
        ctx->pc = 0x22FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC4Cu;
        // 0x22fc50: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC54u;
        goto label_22fc54;
    }
    ctx->pc = 0x22FC4Cu;
    {
        const bool branch_taken_0x22fc4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC4Cu;
        // 0x22fc50: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc4c) {
            ctx->pc = 0x22FC64u;
            goto label_22fc64;
        }
    }
    ctx->pc = 0x22FC54u;
label_22fc54:
    // 0x22fc54: 0xc069c14  jal         func_1A7050
label_22fc58:
    if (ctx->pc == 0x22FC58u) {
        ctx->pc = 0x22FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC54u;
        // 0x22fc58: 0x24050795  addiu       $a1, $zero, 0x795 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1941));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC5Cu;
        goto label_22fc5c;
    }
    ctx->pc = 0x22FC54u;
    SET_GPR_U32(ctx, 31, 0x22FC5Cu);
    ctx->pc = 0x22FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC54u;
    // 0x22fc58: 0x24050795  addiu       $a1, $zero, 0x795 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1941));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7050u, 0x22FC54u, 0x22FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC5Cu;
label_22fc5c:
    // 0x22fc5c: 0x10000004  b           . + 4 + (0x4 << 2)
label_22fc60:
    if (ctx->pc == 0x22FC60u) {
        ctx->pc = 0x22FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC5Cu;
        // 0x22fc60: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC64u;
        goto label_22fc64;
    }
    ctx->pc = 0x22FC5Cu;
    {
        const bool branch_taken_0x22fc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC5Cu;
        // 0x22fc60: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc5c) {
            ctx->pc = 0x22FC70u;
            goto label_22fc70;
        }
    }
    ctx->pc = 0x22FC64u;
label_22fc64:
    // 0x22fc64: 0xc069c14  jal         func_1A7050
label_22fc68:
    if (ctx->pc == 0x22FC68u) {
        ctx->pc = 0x22FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC64u;
        // 0x22fc68: 0x24050794  addiu       $a1, $zero, 0x794 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1940));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC6Cu;
        goto label_22fc6c;
    }
    ctx->pc = 0x22FC64u;
    SET_GPR_U32(ctx, 31, 0x22FC6Cu);
    ctx->pc = 0x22FC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC64u;
    // 0x22fc68: 0x24050794  addiu       $a1, $zero, 0x794 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1940));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7050u, 0x22FC64u, 0x22FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC6Cu;
label_22fc6c:
    // 0x22fc6c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22fc70:
    // 0x22fc70: 0xc06a05e  jal         func_1A8178
label_22fc74:
    if (ctx->pc == 0x22FC74u) {
        ctx->pc = 0x22FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC70u;
        // 0x22fc74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC78u;
        goto label_22fc78;
    }
    ctx->pc = 0x22FC70u;
    SET_GPR_U32(ctx, 31, 0x22FC78u);
    ctx->pc = 0x22FC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC70u;
    // 0x22fc74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x22FC70u, 0x22FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC78u;
label_22fc78:
    // 0x22fc78: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22fc7c:
    // 0x22fc7c: 0xc06a23e  jal         func_1A88F8
label_22fc80:
    if (ctx->pc == 0x22FC80u) {
        ctx->pc = 0x22FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC7Cu;
        // 0x22fc80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC84u;
        goto label_22fc84;
    }
    ctx->pc = 0x22FC7Cu;
    SET_GPR_U32(ctx, 31, 0x22FC84u);
    ctx->pc = 0x22FC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC7Cu;
    // 0x22fc80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22FC7Cu, 0x22FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC84u;
label_22fc84:
    // 0x22fc84: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22fc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22fc88:
    // 0x22fc88: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x22fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_22fc8c:
    // 0x22fc8c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x22fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_22fc90:
    // 0x22fc90: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_22fc94:
    if (ctx->pc == 0x22FC94u) {
        ctx->pc = 0x22FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC90u;
        // 0x22fc94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC98u;
        goto label_22fc98;
    }
    ctx->pc = 0x22FC90u;
    {
        const bool branch_taken_0x22fc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC90u;
        // 0x22fc94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc90) {
            ctx->pc = 0x22FCA8u;
            goto label_22fca8;
        }
    }
    ctx->pc = 0x22FC98u;
label_22fc98:
    // 0x22fc98: 0xc069712  jal         func_1A5C48
label_22fc9c:
    if (ctx->pc == 0x22FC9Cu) {
        ctx->pc = 0x22FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC98u;
        // 0x22fc9c: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCA0u;
        goto label_22fca0;
    }
    ctx->pc = 0x22FC98u;
    SET_GPR_U32(ctx, 31, 0x22FCA0u);
    ctx->pc = 0x22FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC98u;
    // 0x22fc9c: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x22FC98u, 0x22FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCA0u;
label_22fca0:
    // 0x22fca0: 0x10000040  b           . + 4 + (0x40 << 2)
label_22fca4:
    if (ctx->pc == 0x22FCA4u) {
        ctx->pc = 0x22FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCA0u;
        // 0x22fca4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCA8u;
        goto label_22fca8;
    }
    ctx->pc = 0x22FCA0u;
    {
        const bool branch_taken_0x22fca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCA0u;
        // 0x22fca4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fca0) {
            ctx->pc = 0x22FDA4u;
            goto label_22fda4;
        }
    }
    ctx->pc = 0x22FCA8u;
label_22fca8:
    // 0x22fca8: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_22fcac:
    if (ctx->pc == 0x22FCACu) {
        ctx->pc = 0x22FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCA8u;
        // 0x22fcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCB0u;
        goto label_22fcb0;
    }
    ctx->pc = 0x22FCA8u;
    {
        const bool branch_taken_0x22fca8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCA8u;
        // 0x22fcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fca8) {
            ctx->pc = 0x22FCCCu;
            goto label_22fccc;
        }
    }
    ctx->pc = 0x22FCB0u;
label_22fcb0:
    // 0x22fcb0: 0xc08fc4e  jal         func_23F138
label_22fcb4:
    if (ctx->pc == 0x22FCB4u) {
        ctx->pc = 0x22FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCB0u;
        // 0x22fcb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCB8u;
        goto label_22fcb8;
    }
    ctx->pc = 0x22FCB0u;
    SET_GPR_U32(ctx, 31, 0x22FCB8u);
    ctx->pc = 0x22FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FCB0u;
    // 0x22fcb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x22FCB0u, 0x22FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCB8u;
label_22fcb8:
    // 0x22fcb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fcbc:
    // 0x22fcbc: 0xc08bd96  jal         func_22F658
label_22fcc0:
    if (ctx->pc == 0x22FCC0u) {
        ctx->pc = 0x22FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCBCu;
        // 0x22fcc0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCC4u;
        goto label_22fcc4;
    }
    ctx->pc = 0x22FCBCu;
    SET_GPR_U32(ctx, 31, 0x22FCC4u);
    ctx->pc = 0x22FCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FCBCu;
    // 0x22fcc0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x22FCBCu, 0x22FCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCC4u;
label_22fcc4:
    // 0x22fcc4: 0x10000004  b           . + 4 + (0x4 << 2)
label_22fcc8:
    if (ctx->pc == 0x22FCC8u) {
        ctx->pc = 0x22FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCC4u;
        // 0x22fcc8: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCCCu;
        goto label_22fccc;
    }
    ctx->pc = 0x22FCC4u;
    {
        const bool branch_taken_0x22fcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCC4u;
        // 0x22fcc8: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fcc4) {
            ctx->pc = 0x22FCD8u;
            goto label_22fcd8;
        }
    }
    ctx->pc = 0x22FCCCu;
label_22fccc:
    // 0x22fccc: 0xc08bd96  jal         func_22F658
label_22fcd0:
    if (ctx->pc == 0x22FCD0u) {
        ctx->pc = 0x22FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCCCu;
        // 0x22fcd0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCD4u;
        goto label_22fcd4;
    }
    ctx->pc = 0x22FCCCu;
    SET_GPR_U32(ctx, 31, 0x22FCD4u);
    ctx->pc = 0x22FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FCCCu;
    // 0x22fcd0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x22FCCCu, 0x22FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCD4u;
label_22fcd4:
    // 0x22fcd4: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x22fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_22fcd8:
    // 0x22fcd8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x22fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_22fcdc:
    // 0x22fcdc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x22fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_22fce0:
    // 0x22fce0: 0x40f809  jalr        $v0
label_22fce4:
    if (ctx->pc == 0x22FCE4u) {
        ctx->pc = 0x22FCE8u;
        goto label_22fce8;
    }
    ctx->pc = 0x22FCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22FCE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FCE0u, 0x22FCE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FCE8u;
label_22fce8:
    // 0x22fce8: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x22fce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_22fcec:
    // 0x22fcec: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x22fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_22fcf0:
    // 0x22fcf0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x22fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_22fcf4:
    // 0x22fcf4: 0x40f809  jalr        $v0
label_22fcf8:
    if (ctx->pc == 0x22FCF8u) {
        ctx->pc = 0x22FCFCu;
        goto label_22fcfc;
    }
    ctx->pc = 0x22FCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22FCFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FCF4u, 0x22FCFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FCFCu;
label_22fcfc:
    // 0x22fcfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fd00:
    // 0x22fd00: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x22fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_22fd04:
    // 0x22fd04: 0xc08fed2  jal         func_23FB48
label_22fd08:
    if (ctx->pc == 0x22FD08u) {
        ctx->pc = 0x22FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD04u;
        // 0x22fd08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD0Cu;
        goto label_22fd0c;
    }
    ctx->pc = 0x22FD04u;
    SET_GPR_U32(ctx, 31, 0x22FD0Cu);
    ctx->pc = 0x22FD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD04u;
    // 0x22fd08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22FD04u, 0x22FD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD0Cu;
label_22fd0c:
    // 0x22fd0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fd10:
    // 0x22fd10: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x22fd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_22fd14:
    // 0x22fd14: 0xc08fed2  jal         func_23FB48
label_22fd18:
    if (ctx->pc == 0x22FD18u) {
        ctx->pc = 0x22FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD14u;
        // 0x22fd18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD1Cu;
        goto label_22fd1c;
    }
    ctx->pc = 0x22FD14u;
    SET_GPR_U32(ctx, 31, 0x22FD1Cu);
    ctx->pc = 0x22FD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD14u;
    // 0x22fd18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22FD14u, 0x22FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD1Cu;
label_22fd1c:
    // 0x22fd1c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x22fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_22fd20:
    // 0x22fd20: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22fd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_22fd24:
    // 0x22fd24: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_22fd28:
    if (ctx->pc == 0x22FD28u) {
        ctx->pc = 0x22FD2Cu;
        goto label_22fd2c;
    }
    ctx->pc = 0x22FD24u;
    {
        const bool branch_taken_0x22fd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fd24) {
            ctx->pc = 0x22FD70u;
            goto label_22fd70;
        }
    }
    ctx->pc = 0x22FD2Cu;
label_22fd2c:
    // 0x22fd2c: 0xc0bd62c  jal         func_2F58B0
label_22fd30:
    if (ctx->pc == 0x22FD30u) {
        ctx->pc = 0x22FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD2Cu;
        // 0x22fd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD34u;
        goto label_22fd34;
    }
    ctx->pc = 0x22FD2Cu;
    SET_GPR_U32(ctx, 31, 0x22FD34u);
    ctx->pc = 0x22FD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD2Cu;
    // 0x22fd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x22FD2Cu, 0x22FD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD34u;
label_22fd34:
    // 0x22fd34: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x22fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_22fd38:
    // 0x22fd38: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x22fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_22fd3c:
    // 0x22fd3c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22fd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_22fd40:
    // 0x22fd40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fd44:
    // 0x22fd44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22fd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22fd48:
    // 0x22fd48: 0xc4ac4b80  lwc1        $f12, 0x4B80($a1)
    ctx->pc = 0x22fd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 19328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22fd4c:
    // 0x22fd4c: 0xc0bcc6a  jal         func_2F31A8
label_22fd50:
    if (ctx->pc == 0x22FD50u) {
        ctx->pc = 0x22FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD4Cu;
        // 0x22fd50: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD54u;
        goto label_22fd54;
    }
    ctx->pc = 0x22FD4Cu;
    SET_GPR_U32(ctx, 31, 0x22FD54u);
    ctx->pc = 0x22FD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD4Cu;
    // 0x22fd50: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x22FD4Cu, 0x22FD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD54u;
label_22fd54:
    // 0x22fd54: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x22fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_22fd58:
    // 0x22fd58: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x22fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_22fd5c:
    // 0x22fd5c: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x22fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
label_22fd60:
    // 0x22fd60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22fd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_22fd64:
    // 0x22fd64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22fd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_22fd68:
    // 0x22fd68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22fd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22fd6c:
    // 0x22fd6c: 0xae0311c0  sw          $v1, 0x11C0($s0)
    ctx->pc = 0x22fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
label_22fd70:
    // 0x22fd70: 0xc08dada  jal         func_236B68
label_22fd74:
    if (ctx->pc == 0x22FD74u) {
        ctx->pc = 0x22FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD70u;
        // 0x22fd74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD78u;
        goto label_22fd78;
    }
    ctx->pc = 0x22FD70u;
    SET_GPR_U32(ctx, 31, 0x22FD78u);
    ctx->pc = 0x22FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD70u;
    // 0x22fd74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x22FD70u, 0x22FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD78u;
label_22fd78:
    // 0x22fd78: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_22fd7c:
    if (ctx->pc == 0x22FD7Cu) {
        ctx->pc = 0x22FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD78u;
        // 0x22fd7c: 0xae000404  sw          $zero, 0x404($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD80u;
        goto label_22fd80;
    }
    ctx->pc = 0x22FD78u;
    {
        const bool branch_taken_0x22fd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fd78) {
            ctx->pc = 0x22FD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FD78u;
            // 0x22fd7c: 0xae000404  sw          $zero, 0x404($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FDA0u;
            goto label_22fda0;
        }
    }
    ctx->pc = 0x22FD80u;
label_22fd80:
    // 0x22fd80: 0xc0899bc  jal         func_2266F0
label_22fd84:
    if (ctx->pc == 0x22FD84u) {
        ctx->pc = 0x22FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FD80u;
        // 0x22fd84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FD88u;
        goto label_22fd88;
    }
    ctx->pc = 0x22FD80u;
    SET_GPR_U32(ctx, 31, 0x22FD88u);
    ctx->pc = 0x22FD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FD80u;
    // 0x22fd84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x22FD80u, 0x22FD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD88u;
label_22fd88:
    // 0x22fd88: 0x8c4402e4  lw          $a0, 0x2E4($v0)
    ctx->pc = 0x22fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 740)));
label_22fd8c:
    // 0x22fd8c: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x22fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_22fd90:
    // 0x22fd90: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x22fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_22fd94:
    // 0x22fd94: 0x40f809  jalr        $v0
label_22fd98:
    if (ctx->pc == 0x22FD98u) {
        ctx->pc = 0x22FD9Cu;
        goto label_22fd9c;
    }
    ctx->pc = 0x22FD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22FD9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FD94u, 0x22FD9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22FD9Cu;
label_22fd9c:
    // 0x22fd9c: 0xae000404  sw          $zero, 0x404($s0)
    ctx->pc = 0x22fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
label_22fda0:
    // 0x22fda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22fda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22fda4:
    // 0x22fda4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22fda4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22fda8:
    // 0x22fda8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22fda8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22fdac:
    // 0x22fdac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22fdacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22fdb0:
    // 0x22fdb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22fdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22fdb4:
    // 0x22fdb4: 0x3e00008  jr          $ra
label_22fdb8:
    if (ctx->pc == 0x22FDB8u) {
        ctx->pc = 0x22FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDB4u;
        // 0x22fdb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FDBCu;
        goto label_22fdbc;
    }
    ctx->pc = 0x22FDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDB4u;
        // 0x22fdb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FDBCu;
label_22fdbc:
    // 0x22fdbc: 0x0  nop
    ctx->pc = 0x22fdbcu;
    // NOP
    ctx->pc = 0x22fdc0u;
}
