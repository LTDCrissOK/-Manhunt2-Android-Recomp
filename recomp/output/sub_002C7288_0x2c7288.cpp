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

// Function: sub_002C7288
// Address: 0x2c7288 - 0x2c77c8
void sub_002C7288_0x2c7288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7288_0x2c7288");
#endif

    switch (ctx->pc) {
        case 0x2c73e4u: goto label_2c73e4;
        case 0x2c741cu: goto label_2c741c;
        case 0x2c7458u: goto label_2c7458;
        case 0x2c745cu: goto label_2c745c;
        case 0x2c749cu: goto label_2c749c;
        case 0x2c7510u: goto label_2c7510;
        case 0x2c755cu: goto label_2c755c;
        case 0x2c758cu: goto label_2c758c;
        case 0x2c7594u: goto label_2c7594;
        case 0x2c7620u: goto label_2c7620;
        case 0x2c76f8u: goto label_2c76f8;
        case 0x2c770cu: goto label_2c770c;
        case 0x2c7748u: goto label_2c7748;
        case 0x2c7768u: goto label_2c7768;
        case 0x2c77b4u: goto label_2c77b4;
        default: break;
    }

    ctx->pc = 0x2c7288u;

    // 0x2c7288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c7288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c728c: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x2c728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2c7290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c7290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c7294: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2c7294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c7298: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7298u;
    {
        const bool branch_taken_0x2c7298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7298u;
        // 0x2c729c: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7298) {
            ctx->pc = 0x2C72ACu;
            goto label_2c72ac;
        }
    }
    ctx->pc = 0x2C72A0u;
    // 0x2c72a0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2c72a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2c72a4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2c72a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c72a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2c72a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2c72ac:
    // 0x2c72ac: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2c72acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2c72b0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2c72b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c72b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C72B4u;
    {
        const bool branch_taken_0x2c72b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72B4u;
        // 0x2c72b8: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72b4) {
            ctx->pc = 0x2C72C4u;
            goto label_2c72c4;
        }
    }
    ctx->pc = 0x2C72BCu;
    // 0x2c72bc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2c72bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c72c0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2c72c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2c72c4:
    // 0x2c72c4: 0x34e20003  ori         $v0, $a3, 0x3
    ctx->pc = 0x2c72c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x2c72c8: 0xc51823  subu        $v1, $a2, $a1
    ctx->pc = 0x2c72c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2c72cc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2c72ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2c72d0: 0x676023  subu        $t4, $v1, $a3
    ctx->pc = 0x2c72d0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c72d4: 0x8d620018  lw          $v0, 0x18($t3)
    ctx->pc = 0x2c72d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x2c72d8: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C72D8u;
    {
        const bool branch_taken_0x2c72d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72D8u;
        // 0x2c72dc: 0xa73821  addu        $a3, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72d8) {
            ctx->pc = 0x2C7300u;
            goto label_2c7300;
        }
    }
    ctx->pc = 0x2C72E0u;
    // 0x2c72e0: 0x8d62000c  lw          $v0, 0xC($t3)
    ctx->pc = 0x2c72e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x2c72e4: 0x24b80008  addiu       $t8, $a1, 0x8
    ctx->pc = 0x2c72e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2c72e8: 0xad670018  sw          $a3, 0x18($t3)
    ctx->pc = 0x2c72e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 7));
    // 0x2c72ec: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2c72ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2c72f0: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x2c72f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c72f4: 0xad62000c  sw          $v0, 0xC($t3)
    ctx->pc = 0x2c72f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 2));
    // 0x2c72f8: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x2C72F8u;
    {
        const bool branch_taken_0x2c72f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72F8u;
        // 0x2c72fc: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72f8) {
            ctx->pc = 0x2C77B4u;
            goto label_2c77b4;
        }
    }
    ctx->pc = 0x2C7300u;
label_2c7300:
    // 0x2c7300: 0x8d620014  lw          $v0, 0x14($t3)
    ctx->pc = 0x2c7300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x2c7304: 0x54c2000b  bnel        $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C7304u;
    {
        const bool branch_taken_0x2c7304 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c7304) {
            ctx->pc = 0x2C7308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7304u;
            // 0x2c7308: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7334u;
            goto label_2c7334;
        }
    }
    ctx->pc = 0x2C730Cu;
    // 0x2c730c: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x2c730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2c7310: 0x24b80008  addiu       $t8, $a1, 0x8
    ctx->pc = 0x2c7310u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2c7314: 0xad670014  sw          $a3, 0x14($t3)
    ctx->pc = 0x2c7314u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 7));
    // 0x2c7318: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2c7318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2c731c: 0xad620008  sw          $v0, 0x8($t3)
    ctx->pc = 0x2c731cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 2));
    // 0x2c7320: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x2c7320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c7324: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x2c7324u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x2c7328: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x2c7328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c732c: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x2C732Cu;
    {
        const bool branch_taken_0x2c732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C732Cu;
        // 0x2c7330: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c732c) {
            ctx->pc = 0x2C77B4u;
            goto label_2c77b4;
        }
    }
    ctx->pc = 0x2C7334u;
label_2c7334:
    // 0x2c7334: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2c7334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2c7338: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2C7338u;
    {
        const bool branch_taken_0x2c7338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7338u;
        // 0x2c733c: 0x24b80008  addiu       $t8, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7338) {
            ctx->pc = 0x2C759Cu;
            goto label_2c759c;
        }
    }
    ctx->pc = 0x2C7340u;
    // 0x2c7340: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c7340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7344: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x2c7344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x2c7348: 0x625024  and         $t2, $v1, $v0
    ctx->pc = 0x2c7348u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c734c: 0xa20c2  srl         $a0, $t2, 3
    ctx->pc = 0x2c734cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 3));
    // 0x2c7350: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x2c7350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2c7354: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C7354u;
    {
        const bool branch_taken_0x2c7354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7354) {
            ctx->pc = 0x2C7358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7354u;
            // 0x2c7358: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C73E4u;
            goto label_2c73e4;
        }
    }
    ctx->pc = 0x2C735Cu;
    // 0x2c735c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x2c735cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c7360: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2c7360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2c7364: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C7364u;
    {
        const bool branch_taken_0x2c7364 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C7368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7364u;
        // 0x2c7368: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7364) {
            ctx->pc = 0x2C7390u;
            goto label_2c7390;
        }
    }
    ctx->pc = 0x2C736Cu;
    // 0x2c736c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7370: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2c7370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2c7374: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2c7374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c7378: 0x18a7821  addu        $t7, $t4, $t2
    ctx->pc = 0x2c7378u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x2c737c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c737cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2c7380: 0xca7021  addu        $t6, $a2, $t2
    ctx->pc = 0x2c7380u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2c7384: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c7384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7388: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2C7388u;
    {
        const bool branch_taken_0x2c7388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7388u;
        // 0x2c738c: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7388) {
            ctx->pc = 0x2C7594u;
            goto label_2c7594;
        }
    }
    ctx->pc = 0x2C7390u;
label_2c7390:
    // 0x2c7390: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x2c7390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2c7394: 0x1622021  addu        $a0, $t3, $v0
    ctx->pc = 0x2c7394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2c7398: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7398u;
    {
        const bool branch_taken_0x2c7398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c7398) {
            ctx->pc = 0x2C73B0u;
            goto label_2c73b0;
        }
    }
    ctx->pc = 0x2C73A0u;
    // 0x2c73a0: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2c73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2c73a4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2c73a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c73a8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C73A8u;
    {
        const bool branch_taken_0x2c73a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c73a8) {
            ctx->pc = 0x2C73DCu;
            goto label_2c73dc;
        }
    }
    ctx->pc = 0x2C73B0u;
label_2c73b0:
    // 0x2c73b0: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C73B0u;
    {
        const bool branch_taken_0x2c73b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c73b0) {
            ctx->pc = 0x2C73B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C73B0u;
            // 0x2c73b4: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C73CCu;
            goto label_2c73cc;
        }
    }
    ctx->pc = 0x2C73B8u;
    // 0x2c73b8: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2c73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2c73bc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c73bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c73c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C73C0u;
    {
        const bool branch_taken_0x2c73c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c73c0) {
            ctx->pc = 0x2C73DCu;
            goto label_2c73dc;
        }
    }
    ctx->pc = 0x2C73C8u;
    // 0x2c73c8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2c73c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_2c73cc:
    // 0x2c73cc: 0x18a7821  addu        $t7, $t4, $t2
    ctx->pc = 0x2c73ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x2c73d0: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2c73d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x2c73d4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2C73D4u;
    {
        const bool branch_taken_0x2c73d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C73D4u;
        // 0x2c73d8: 0xca7021  addu        $t6, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c73d4) {
            ctx->pc = 0x2C7594u;
            goto label_2c7594;
        }
    }
    ctx->pc = 0x2C73DCu;
label_2c73dc:
    // 0x2c73dc: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C73DCu;
    SET_GPR_U32(ctx, 31, 0x2C73E4u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C73DCu, 0x2C73E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C73E4u;
label_2c73e4:
    // 0x2c73e4: 0x1046000d  beq         $v0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2C73E4u;
    {
        const bool branch_taken_0x2c73e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C73E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C73E4u;
        // 0x2c73e8: 0x8ccd0018  lw          $t5, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c73e4) {
            ctx->pc = 0x2C741Cu;
            goto label_2c741c;
        }
    }
    ctx->pc = 0x2C73ECu;
    // 0x2c73ec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2c73ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c73f0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2c73f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c73f4: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2c73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2c73f8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c73f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c73fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C73FCu;
    {
        const bool branch_taken_0x2c73fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C73FCu;
        // 0x2c7400: 0x18a7821  addu        $t7, $t4, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c73fc) {
            ctx->pc = 0x2C7414u;
            goto label_2c7414;
        }
    }
    ctx->pc = 0x2C7404u;
    // 0x2c7404: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x2c7404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x2c7408: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x2c7408u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x2c740c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C740Cu;
    {
        const bool branch_taken_0x2c740c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C740Cu;
        // 0x2c7410: 0xca7021  addu        $t6, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c740c) {
            ctx->pc = 0x2C749Cu;
            goto label_2c749c;
        }
    }
    ctx->pc = 0x2C7414u;
label_2c7414:
    // 0x2c7414: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C7414u;
    SET_GPR_U32(ctx, 31, 0x2C741Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C7414u, 0x2C741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C741Cu;
label_2c741c:
    // 0x2c741c: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x2c741cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2c7420: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7420u;
    {
        const bool branch_taken_0x2c7420 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7420u;
        // 0x2c7424: 0x24c40014  addiu       $a0, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7420) {
            ctx->pc = 0x2C743Cu;
            goto label_2c743c;
        }
    }
    ctx->pc = 0x2C7428u;
    // 0x2c7428: 0x8cc80010  lw          $t0, 0x10($a2)
    ctx->pc = 0x2c7428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c742c: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x2c742cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2c7430: 0xca7021  addu        $t6, $a2, $t2
    ctx->pc = 0x2c7430u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2c7434: 0x11000019  beqz        $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C7434u;
    {
        const bool branch_taken_0x2c7434 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7434u;
        // 0x2c7438: 0x18a7821  addu        $t7, $t4, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7434) {
            ctx->pc = 0x2C749Cu;
            goto label_2c749c;
        }
    }
    ctx->pc = 0x2C743Cu;
label_2c743c:
    // 0x2c743c: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x2c743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2c7440: 0x18a7821  addu        $t7, $t4, $t2
    ctx->pc = 0x2c7440u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x2c7444: 0x24b80008  addiu       $t8, $a1, 0x8
    ctx->pc = 0x2c7444u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2c7448: 0x25030014  addiu       $v1, $t0, 0x14
    ctx->pc = 0x2c7448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x2c744c: 0x8d690010  lw          $t1, 0x10($t3)
    ctx->pc = 0x2c744cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2c7450: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7450u;
    {
        const bool branch_taken_0x2c7450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7450u;
        // 0x2c7454: 0xca7021  addu        $t6, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7450) {
            ctx->pc = 0x2C7468u;
            goto label_2c7468;
        }
    }
    ctx->pc = 0x2C7458u;
label_2c7458:
    // 0x2c7458: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c7458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c745c:
    // 0x2c745c: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x2c745cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c7460: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x2c7460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2c7464: 0x25030014  addiu       $v1, $t0, 0x14
    ctx->pc = 0x2c7464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
label_2c7468:
    // 0x2c7468: 0x0  nop
    ctx->pc = 0x2c7468u;
    // NOP
    // 0x2c746c: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C746Cu;
    {
        const bool branch_taken_0x2c746c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c746c) {
            ctx->pc = 0x2C7470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C746Cu;
            // 0x2c7470: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C745Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c745c;
        }
    }
    ctx->pc = 0x2C7474u;
    // 0x2c7474: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x2c7474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2c7478: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C7478u;
    {
        const bool branch_taken_0x2c7478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7478u;
        // 0x2c747c: 0x25030010  addiu       $v1, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7478) {
            ctx->pc = 0x2C7458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7458;
        }
    }
    ctx->pc = 0x2C7480u;
    // 0x2c7480: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x2c7480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2c7484: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7484u;
    {
        const bool branch_taken_0x2c7484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7484) {
            ctx->pc = 0x2C7494u;
            goto label_2c7494;
        }
    }
    ctx->pc = 0x2C748Cu;
    // 0x2c748c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C748Cu;
    {
        const bool branch_taken_0x2c748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C748Cu;
        // 0x2c7490: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c748c) {
            ctx->pc = 0x2C749Cu;
            goto label_2c749c;
        }
    }
    ctx->pc = 0x2C7494u;
label_2c7494:
    // 0x2c7494: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C7494u;
    SET_GPR_U32(ctx, 31, 0x2C749Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C7494u, 0x2C749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C749Cu;
label_2c749c:
    // 0x2c749c: 0x51a0003e  beql        $t5, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C749Cu;
    {
        const bool branch_taken_0x2c749c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c749c) {
            ctx->pc = 0x2C74A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C749Cu;
            // 0x2c74a0: 0x1c0302d  daddu       $a2, $t6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7598u;
            goto label_2c7598;
        }
    }
    ctx->pc = 0x2C74A4u;
    // 0x2c74a4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2c74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c74a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c74ac: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2c74acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2c74b0: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2c74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2c74b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c74b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c74b8: 0x54c3000b  bnel        $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2C74B8u;
    {
        const bool branch_taken_0x2c74b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c74b8) {
            ctx->pc = 0x2C74BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C74B8u;
            // 0x2c74bc: 0x8d620010  lw          $v0, 0x10($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C74E8u;
            goto label_2c74e8;
        }
    }
    ctx->pc = 0x2C74C0u;
    // 0x2c74c0: 0x15000015  bnez        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C74C0u;
    {
        const bool branch_taken_0x2c74c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C74C0u;
        // 0x2c74c4: 0xac480000  sw          $t0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c74c0) {
            ctx->pc = 0x2C7518u;
            goto label_2c7518;
        }
    }
    ctx->pc = 0x2C74C8u;
    // 0x2c74c8: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2c74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c74cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c74ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c74d0: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x2c74d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2c74d4: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2c74d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c74d8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2c74d8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2c74dc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2c74dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c74e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C74E0u;
    {
        const bool branch_taken_0x2c74e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C74E0u;
        // 0x2c74e4: 0xad640004  sw          $a0, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c74e0) {
            ctx->pc = 0x2C7510u;
            goto label_2c7510;
        }
    }
    ctx->pc = 0x2C74E8u;
label_2c74e8:
    // 0x2c74e8: 0x1a2102b  sltu        $v0, $t5, $v0
    ctx->pc = 0x2c74e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c74ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C74ECu;
    {
        const bool branch_taken_0x2c74ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c74ec) {
            ctx->pc = 0x2C7508u;
            goto label_2c7508;
        }
    }
    ctx->pc = 0x2C74F4u;
    // 0x2c74f4: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x2c74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x2c74f8: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C74F8u;
    {
        const bool branch_taken_0x2c74f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2c74f8) {
            ctx->pc = 0x2C74FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C74F8u;
            // 0x2c74fc: 0xada80014  sw          $t0, 0x14($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7510u;
            goto label_2c7510;
        }
    }
    ctx->pc = 0x2C7500u;
    // 0x2c7500: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7500u;
    {
        const bool branch_taken_0x2c7500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7500u;
        // 0x2c7504: 0xada80010  sw          $t0, 0x10($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7500) {
            ctx->pc = 0x2C7510u;
            goto label_2c7510;
        }
    }
    ctx->pc = 0x2C7508u;
label_2c7508:
    // 0x2c7508: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C7508u;
    SET_GPR_U32(ctx, 31, 0x2C7510u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C7508u, 0x2C7510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7510u;
label_2c7510:
    // 0x2c7510: 0x51000021  beql        $t0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C7510u;
    {
        const bool branch_taken_0x2c7510 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7510) {
            ctx->pc = 0x2C7514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7510u;
            // 0x2c7514: 0x1c0302d  daddu       $a2, $t6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7598u;
            goto label_2c7598;
        }
    }
    ctx->pc = 0x2C7518u;
label_2c7518:
    // 0x2c7518: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2c7518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2c751c: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x2c751cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7520: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C7520u;
    {
        const bool branch_taken_0x2c7520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7520) {
            ctx->pc = 0x2C758Cu;
            goto label_2c758c;
        }
    }
    ctx->pc = 0x2C7528u;
    // 0x2c7528: 0xad0d0018  sw          $t5, 0x18($t0)
    ctx->pc = 0x2c7528u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 13));
    // 0x2c752c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2c752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c7530: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C7530u;
    {
        const bool branch_taken_0x2c7530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7530) {
            ctx->pc = 0x2C7534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7530u;
            // 0x2c7534: 0x8cc30014  lw          $v1, 0x14($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7560u;
            goto label_2c7560;
        }
    }
    ctx->pc = 0x2C7538u;
    // 0x2c7538: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2c7538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2c753c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c753cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7540: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7540u;
    {
        const bool branch_taken_0x2c7540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7540) {
            ctx->pc = 0x2C7554u;
            goto label_2c7554;
        }
    }
    ctx->pc = 0x2C7548u;
    // 0x2c7548: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x2c7548u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x2c754c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C754Cu;
    {
        const bool branch_taken_0x2c754c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C754Cu;
        // 0x2c7550: 0xac680018  sw          $t0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c754c) {
            ctx->pc = 0x2C755Cu;
            goto label_2c755c;
        }
    }
    ctx->pc = 0x2C7554u;
label_2c7554:
    // 0x2c7554: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C7554u;
    SET_GPR_U32(ctx, 31, 0x2C755Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C7554u, 0x2C755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C755Cu;
label_2c755c:
    // 0x2c755c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x2c755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_2c7560:
    // 0x2c7560: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C7560u;
    {
        const bool branch_taken_0x2c7560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7560u;
        // 0x2c7564: 0x1c0302d  daddu       $a2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7560) {
            ctx->pc = 0x2C7598u;
            goto label_2c7598;
        }
    }
    ctx->pc = 0x2C7568u;
    // 0x2c7568: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2c7568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2c756c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c756cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7570: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7570u;
    {
        const bool branch_taken_0x2c7570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7570) {
            ctx->pc = 0x2C7584u;
            goto label_2c7584;
        }
    }
    ctx->pc = 0x2C7578u;
    // 0x2c7578: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x2c7578u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
    // 0x2c757c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C757Cu;
    {
        const bool branch_taken_0x2c757c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C757Cu;
        // 0x2c7580: 0xac680018  sw          $t0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c757c) {
            ctx->pc = 0x2C7598u;
            goto label_2c7598;
        }
    }
    ctx->pc = 0x2C7584u;
label_2c7584:
    // 0x2c7584: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C7584u;
    SET_GPR_U32(ctx, 31, 0x2C758Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C7584u, 0x2C758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C758Cu;
label_2c758c:
    // 0x2c758c: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C758Cu;
    SET_GPR_U32(ctx, 31, 0x2C7594u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C758Cu, 0x2C7594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7594u;
label_2c7594:
    // 0x2c7594: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x2c7594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2c7598:
    // 0x2c7598: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x2c7598u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2c759c:
    // 0x2c759c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2c759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c75a0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c75a4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2c75a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2c75a8: 0x35840001  ori         $a0, $t4, 0x1
    ctx->pc = 0x2c75a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
    // 0x2c75ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c75acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c75b0: 0xec2821  addu        $a1, $a3, $t4
    ctx->pc = 0x2c75b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x2c75b4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2c75b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2c75b8: 0xc30c2  srl         $a2, $t4, 3
    ctx->pc = 0x2c75b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 12), 3));
    // 0x2c75bc: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x2c75bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x2c75c0: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x2c75c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2c75c4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C75C4u;
    {
        const bool branch_taken_0x2c75c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75C4u;
        // 0x2c75c8: 0xacac0000  sw          $t4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c75c4) {
            ctx->pc = 0x2C7634u;
            goto label_2c7634;
        }
    }
    ctx->pc = 0x2C75CCu;
    // 0x2c75cc: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x2c75ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2c75d0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2c75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2c75d4: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x2c75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2c75d8: 0xc51806  srlv        $v1, $a1, $a2
    ctx->pc = 0x2c75d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2c75dc: 0x1624021  addu        $t0, $t3, $v0
    ctx->pc = 0x2c75dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2c75e0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c75e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c75e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c75e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c75e8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C75E8u;
    {
        const bool branch_taken_0x2c75e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C75ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75E8u;
        // 0x2c75ec: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c75e8) {
            ctx->pc = 0x2C7604u;
            goto label_2c7604;
        }
    }
    ctx->pc = 0x2C75F0u;
    // 0x2c75f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c75f4: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x2c75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x2c75f8: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2c75f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2c75fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C75FCu;
    {
        const bool branch_taken_0x2c75fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75FCu;
        // 0x2c7600: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c75fc) {
            ctx->pc = 0x2C7620u;
            goto label_2c7620;
        }
    }
    ctx->pc = 0x2C7604u;
label_2c7604:
    // 0x2c7604: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x2c7604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2c7608: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x2c7608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c760c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2c760cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c7610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7610u;
    {
        const bool branch_taken_0x2c7610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7610u;
        // 0x2c7614: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7610) {
            ctx->pc = 0x2C7620u;
            goto label_2c7620;
        }
    }
    ctx->pc = 0x2C7618u;
    // 0x2c7618: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C7618u;
    SET_GPR_U32(ctx, 31, 0x2C7620u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C7618u, 0x2C7620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7620u;
label_2c7620:
    // 0x2c7620: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x2c7620u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x2c7624: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2c7624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2c7628: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x2c7628u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    // 0x2c762c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2C762Cu;
    {
        const bool branch_taken_0x2c762c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C762Cu;
        // 0x2c7630: 0xace40008  sw          $a0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c762c) {
            ctx->pc = 0x2C77B4u;
            goto label_2c77b4;
        }
    }
    ctx->pc = 0x2C7634u;
label_2c7634:
    // 0x2c7634: 0xc1a02  srl         $v1, $t4, 8
    ctx->pc = 0x2c7634u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x2c7638: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7638u;
    {
        const bool branch_taken_0x2c7638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7638u;
        // 0x2c763c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7638) {
            ctx->pc = 0x2C7648u;
            goto label_2c7648;
        }
    }
    ctx->pc = 0x2C7640u;
    // 0x2c7640: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C7640u;
    {
        const bool branch_taken_0x2c7640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7640u;
        // 0x2c7644: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7640) {
            ctx->pc = 0x2C76B0u;
            goto label_2c76b0;
        }
    }
    ctx->pc = 0x2C7648u;
label_2c7648:
    // 0x2c7648: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c7648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c764c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C764Cu;
    {
        const bool branch_taken_0x2c764c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C764Cu;
        // 0x2c7650: 0x2464ff00  addiu       $a0, $v1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c764c) {
            ctx->pc = 0x2C765Cu;
            goto label_2c765c;
        }
    }
    ctx->pc = 0x2C7654u;
    // 0x2c7654: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C7654u;
    {
        const bool branch_taken_0x2c7654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7654u;
        // 0x2c7658: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7654) {
            ctx->pc = 0x2C76B0u;
            goto label_2c76b0;
        }
    }
    ctx->pc = 0x2C765Cu;
label_2c765c:
    // 0x2c765c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2c765cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2c7660: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x2c7660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2c7664: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x2c7664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c7668: 0x2462f000  addiu       $v0, $v1, -0x1000
    ctx->pc = 0x2c7668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
    // 0x2c766c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2c766cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2c7670: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x2c7670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2c7674: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x2c7674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c7678: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c7678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c767c: 0x2462c000  addiu       $v0, $v1, -0x4000
    ctx->pc = 0x2c767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950912));
    // 0x2c7680: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2c7680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2c7684: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x2c7684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c7688: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x2c7688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c768c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c7690: 0x31bc2  srl         $v1, $v1, 15
    ctx->pc = 0x2c7690u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2c7694: 0x2463000e  addiu       $v1, $v1, 0xE
    ctx->pc = 0x2c7694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x2c7698: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x2c7698u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c769c: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x2c769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x2c76a0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2c76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c76a4: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x2c76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c76a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c76a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c76ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c76acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c76b0:
    // 0x2c76b0: 0xace3001c  sw          $v1, 0x1C($a3)
    ctx->pc = 0x2c76b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
    // 0x2c76b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c76b8: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x2c76b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x2c76bc: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2c76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2c76c0: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2c76c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2c76c4: 0x1622821  addu        $a1, $t3, $v0
    ctx->pc = 0x2c76c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2c76c8: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x2c76c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2c76cc: 0x641006  srlv        $v0, $a0, $v1
    ctx->pc = 0x2c76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c76d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c76d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c76d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c76d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c76d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C76D8u;
    {
        const bool branch_taken_0x2c76d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76D8u;
        // 0x2c76dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c76d8) {
            ctx->pc = 0x2C771Cu;
            goto label_2c771c;
        }
    }
    ctx->pc = 0x2C76E0u;
    // 0x2c76e0: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x2c76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c76e4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2c76e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2c76e8: 0xad620004  sw          $v0, 0x4($t3)
    ctx->pc = 0x2c76e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 2));
    // 0x2c76ec: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x2c76ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x2c76f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C76F0u;
    {
        const bool branch_taken_0x2c76f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76F0u;
        // 0x2c76f4: 0xace50018  sw          $a1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c76f0) {
            ctx->pc = 0x2C7710u;
            goto label_2c7710;
        }
    }
    ctx->pc = 0x2C76F8u;
label_2c76f8:
    // 0x2c76f8: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x2c76f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x2c76fc: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2c76fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x2c7700: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x2c7700u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x2c7704: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2C7704u;
    {
        const bool branch_taken_0x2c7704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7704u;
        // 0x2c7708: 0xace00018  sw          $zero, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7704) {
            ctx->pc = 0x2C77B4u;
            goto label_2c77b4;
        }
    }
    ctx->pc = 0x2C770Cu;
label_2c770c:
    // 0x2c770c: 0xace60018  sw          $a2, 0x18($a3)
    ctx->pc = 0x2c770cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 6));
label_2c7710:
    // 0x2c7710: 0xace70008  sw          $a3, 0x8($a3)
    ctx->pc = 0x2c7710u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 7));
    // 0x2c7714: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C7714u;
    {
        const bool branch_taken_0x2c7714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7714u;
        // 0x2c7718: 0xace7000c  sw          $a3, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7714) {
            ctx->pc = 0x2C77B4u;
            goto label_2c77b4;
        }
    }
    ctx->pc = 0x2C771Cu;
label_2c771c:
    // 0x2c771c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2c771cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c7720: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2c7720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2c7724: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7724u;
    {
        const bool branch_taken_0x2c7724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7724u;
        // 0x2c7728: 0x180282d  daddu       $a1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7724) {
            ctx->pc = 0x2C773Cu;
            goto label_2c773c;
        }
    }
    ctx->pc = 0x2C772Cu;
    // 0x2c772c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c772cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c7730: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2c7730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2c7734: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2c7734u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7738: 0x452804  sllv        $a1, $a1, $v0
    ctx->pc = 0x2c7738u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_2c773c:
    // 0x2c773c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C773Cu;
    {
        const bool branch_taken_0x2c773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C773Cu;
        // 0x2c7740: 0x8d690010  lw          $t1, 0x10($t3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c773c) {
            ctx->pc = 0x2C7768u;
            goto label_2c7768;
        }
    }
    ctx->pc = 0x2C7744u;
    // 0x2c7744: 0x0  nop
    ctx->pc = 0x2c7744u;
    // NOP
label_2c7748:
    // 0x2c7748: 0xc9102b  sltu        $v0, $a2, $t1
    ctx->pc = 0x2c7748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2c774c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C774Cu;
    {
        const bool branch_taken_0x2c774c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C774Cu;
        // 0x2c7750: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c774c) {
            ctx->pc = 0x2C7760u;
            goto label_2c7760;
        }
    }
    ctx->pc = 0x2C7754u;
    // 0x2c7754: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2c7754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2c7758: 0x5040ffe7  beql        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2C7758u;
    {
        const bool branch_taken_0x2c7758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7758) {
            ctx->pc = 0x2C775Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7758u;
            // 0x2c775c: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C76F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c76f8;
        }
    }
    ctx->pc = 0x2C7760u;
label_2c7760:
    // 0x2c7760: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C7760u;
    SET_GPR_U32(ctx, 31, 0x2C7768u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C7760u, 0x2C7768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7768u;
label_2c7768:
    // 0x2c7768: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2c7768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c776c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c776cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7770: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x2c7770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x2c7774: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c7774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7778: 0x106cfff3  beq         $v1, $t4, . + 4 + (-0xD << 2)
    ctx->pc = 0x2C7778u;
    {
        const bool branch_taken_0x2c7778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x2C777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7778u;
        // 0x2c777c: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7778) {
            ctx->pc = 0x2C7748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7748;
        }
    }
    ctx->pc = 0x2C7780u;
    // 0x2c7780: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c7780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c7784: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2c7784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2c7788: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x2c7788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c778c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c7790: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7790u;
    {
        const bool branch_taken_0x2c7790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7790u;
        // 0x2c7794: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7790) {
            ctx->pc = 0x2C77A0u;
            goto label_2c77a0;
        }
    }
    ctx->pc = 0x2C7798u;
    // 0x2c7798: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x2C7798u;
    {
        const bool branch_taken_0x2c7798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7798u;
        // 0x2c779c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7798) {
            ctx->pc = 0x2C7768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7768;
        }
    }
    ctx->pc = 0x2C77A0u;
label_2c77a0:
    // 0x2c77a0: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2c77a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2c77a4: 0x5040ffd9  beql        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2C77A4u;
    {
        const bool branch_taken_0x2c77a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c77a4) {
            ctx->pc = 0x2C77A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C77A4u;
            // 0x2c77a8: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C770Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c770c;
        }
    }
    ctx->pc = 0x2C77ACu;
    // 0x2c77ac: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C77ACu;
    SET_GPR_U32(ctx, 31, 0x2C77B4u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C77ACu, 0x2C77B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C77B4u;
label_2c77b4:
    // 0x2c77b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c77b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c77b8: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x2c77b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c77bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C77BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C77C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77BCu;
        // 0x2c77c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C77BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C77C4u;
    // 0x2c77c4: 0x0  nop
    ctx->pc = 0x2c77c4u;
    // NOP
    ctx->pc = 0x2c77c8u;
}
