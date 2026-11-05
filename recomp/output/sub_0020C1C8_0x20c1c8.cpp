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

// Function: sub_0020C1C8
// Address: 0x20c1c8 - 0x20c718
void sub_0020C1C8_0x20c1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C1C8_0x20c1c8");
#endif

    switch (ctx->pc) {
        case 0x20c3b8u: goto label_20c3b8;
        case 0x20c3c4u: goto label_20c3c4;
        case 0x20c3d4u: goto label_20c3d4;
        case 0x20c3e0u: goto label_20c3e0;
        case 0x20c3f0u: goto label_20c3f0;
        case 0x20c3fcu: goto label_20c3fc;
        case 0x20c40cu: goto label_20c40c;
        case 0x20c418u: goto label_20c418;
        case 0x20c438u: goto label_20c438;
        case 0x20c448u: goto label_20c448;
        case 0x20c45cu: goto label_20c45c;
        case 0x20c484u: goto label_20c484;
        case 0x20c494u: goto label_20c494;
        case 0x20c4a0u: goto label_20c4a0;
        case 0x20c4b0u: goto label_20c4b0;
        case 0x20c4bcu: goto label_20c4bc;
        case 0x20c4ccu: goto label_20c4cc;
        case 0x20c4d8u: goto label_20c4d8;
        case 0x20c4e8u: goto label_20c4e8;
        case 0x20c4f4u: goto label_20c4f4;
        case 0x20c504u: goto label_20c504;
        case 0x20c518u: goto label_20c518;
        case 0x20c534u: goto label_20c534;
        case 0x20c544u: goto label_20c544;
        case 0x20c550u: goto label_20c550;
        case 0x20c560u: goto label_20c560;
        case 0x20c56cu: goto label_20c56c;
        case 0x20c57cu: goto label_20c57c;
        case 0x20c588u: goto label_20c588;
        case 0x20c598u: goto label_20c598;
        case 0x20c5a4u: goto label_20c5a4;
        case 0x20c5b4u: goto label_20c5b4;
        case 0x20c5c0u: goto label_20c5c0;
        case 0x20c5d0u: goto label_20c5d0;
        case 0x20c5dcu: goto label_20c5dc;
        case 0x20c5ecu: goto label_20c5ec;
        case 0x20c5f8u: goto label_20c5f8;
        case 0x20c608u: goto label_20c608;
        case 0x20c614u: goto label_20c614;
        case 0x20c624u: goto label_20c624;
        case 0x20c630u: goto label_20c630;
        case 0x20c640u: goto label_20c640;
        case 0x20c64cu: goto label_20c64c;
        case 0x20c65cu: goto label_20c65c;
        case 0x20c668u: goto label_20c668;
        case 0x20c678u: goto label_20c678;
        case 0x20c684u: goto label_20c684;
        case 0x20c694u: goto label_20c694;
        case 0x20c6a0u: goto label_20c6a0;
        case 0x20c6b0u: goto label_20c6b0;
        case 0x20c6bcu: goto label_20c6bc;
        case 0x20c6c8u: goto label_20c6c8;
        case 0x20c6d8u: goto label_20c6d8;
        case 0x20c6e4u: goto label_20c6e4;
        case 0x20c6f4u: goto label_20c6f4;
        default: break;
    }

    ctx->pc = 0x20c1c8u;

    // 0x20c1c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20c1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20c1cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x20c1d0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x20c1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x20c1d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20c1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20c1d8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x20c1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x20c1dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20c1dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20c1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20c1e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20c1e8: 0x106200d4  beq         $v1, $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x20C1E8u;
    {
        const bool branch_taken_0x20c1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1E8u;
        // 0x20c1ec: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1e8) {
            ctx->pc = 0x20C53Cu;
            goto label_20c53c;
        }
    }
    ctx->pc = 0x20C1F0u;
    // 0x20c1f0: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x20C1F0u;
    {
        const bool branch_taken_0x20c1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1F0u;
        // 0x20c1f4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1f0) {
            ctx->pc = 0x20C2B4u;
            goto label_20c2b4;
        }
    }
    ctx->pc = 0x20C1F8u;
    // 0x20c1f8: 0x24020181  addiu       $v0, $zero, 0x181
    ctx->pc = 0x20c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x20c1fc: 0x1062012a  beq         $v1, $v0, . + 4 + (0x12A << 2)
    ctx->pc = 0x20C1FCu;
    {
        const bool branch_taken_0x20c1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1FCu;
        // 0x20c200: 0x2c620182  sltiu       $v0, $v1, 0x182 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1fc) {
            ctx->pc = 0x20C6A8u;
            goto label_20c6a8;
        }
    }
    ctx->pc = 0x20C204u;
    // 0x20c204: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20C204u;
    {
        const bool branch_taken_0x20c204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C204u;
        // 0x20c208: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c204) {
            ctx->pc = 0x20C250u;
            goto label_20c250;
        }
    }
    ctx->pc = 0x20C20Cu;
    // 0x20c20c: 0x1062007d  beq         $v1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x20C20Cu;
    {
        const bool branch_taken_0x20c20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C20Cu;
        // 0x20c210: 0x2c620020  sltiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c20c) {
            ctx->pc = 0x20C404u;
            goto label_20c404;
        }
    }
    ctx->pc = 0x20C214u;
    // 0x20c214: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C214u;
    {
        const bool branch_taken_0x20c214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C214u;
        // 0x20c218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c214) {
            ctx->pc = 0x20C234u;
            goto label_20c234;
        }
    }
    ctx->pc = 0x20C21Cu;
    // 0x20c21c: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x20C21Cu;
    {
        const bool branch_taken_0x20c21c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C21Cu;
        // 0x20c220: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c21c) {
            ctx->pc = 0x20C39Cu;
            goto label_20c39c;
        }
    }
    ctx->pc = 0x20C224u;
    // 0x20c224: 0x10620070  beq         $v1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x20C224u;
    {
        const bool branch_taken_0x20c224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C224u;
        // 0x20c228: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c224) {
            ctx->pc = 0x20C3E8u;
            goto label_20c3e8;
        }
    }
    ctx->pc = 0x20C22Cu;
    // 0x20c22c: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x20C22Cu;
    {
        const bool branch_taken_0x20c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C22Cu;
        // 0x20c230: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c22c) {
            ctx->pc = 0x20C6ECu;
            goto label_20c6ec;
        }
    }
    ctx->pc = 0x20C234u;
label_20c234:
    // 0x20c234: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x20c234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x20c238: 0x10620081  beq         $v1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x20C238u;
    {
        const bool branch_taken_0x20c238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C238u;
        // 0x20c23c: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c238) {
            ctx->pc = 0x20C440u;
            goto label_20c440;
        }
    }
    ctx->pc = 0x20C240u;
    // 0x20c240: 0x10620112  beq         $v1, $v0, . + 4 + (0x112 << 2)
    ctx->pc = 0x20C240u;
    {
        const bool branch_taken_0x20c240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C240u;
        // 0x20c244: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c240) {
            ctx->pc = 0x20C68Cu;
            goto label_20c68c;
        }
    }
    ctx->pc = 0x20C248u;
    // 0x20c248: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x20C248u;
    {
        const bool branch_taken_0x20c248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C248u;
        // 0x20c24c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c248) {
            ctx->pc = 0x20C6ECu;
            goto label_20c6ec;
        }
    }
    ctx->pc = 0x20C250u;
label_20c250:
    // 0x20c250: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x20c250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x20c254: 0x10620094  beq         $v1, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x20C254u;
    {
        const bool branch_taken_0x20c254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C254u;
        // 0x20c258: 0x2c621002  sltiu       $v0, $v1, 0x1002 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4098) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c254) {
            ctx->pc = 0x20C4A8u;
            goto label_20c4a8;
        }
    }
    ctx->pc = 0x20C25Cu;
    // 0x20c25c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C25Cu;
    {
        const bool branch_taken_0x20c25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C25Cu;
        // 0x20c260: 0x2402020f  addiu       $v0, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c25c) {
            ctx->pc = 0x20C27Cu;
            goto label_20c27c;
        }
    }
    ctx->pc = 0x20C264u;
    // 0x20c264: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x20C264u;
    {
        const bool branch_taken_0x20c264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C264u;
        // 0x20c268: 0x24020401  addiu       $v0, $zero, 0x401 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c264) {
            ctx->pc = 0x20C3CCu;
            goto label_20c3cc;
        }
    }
    ctx->pc = 0x20C26Cu;
    // 0x20c26c: 0x10620087  beq         $v1, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x20C26Cu;
    {
        const bool branch_taken_0x20c26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C26Cu;
        // 0x20c270: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c26c) {
            ctx->pc = 0x20C48Cu;
            goto label_20c48c;
        }
    }
    ctx->pc = 0x20C274u;
    // 0x20c274: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x20C274u;
    {
        const bool branch_taken_0x20c274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C274u;
        // 0x20c278: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c274) {
            ctx->pc = 0x20C6ECu;
            goto label_20c6ec;
        }
    }
    ctx->pc = 0x20C27Cu;
label_20c27c:
    // 0x20c27c: 0x24027001  addiu       $v0, $zero, 0x7001
    ctx->pc = 0x20c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28673));
    // 0x20c280: 0x10620097  beq         $v1, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x20C280u;
    {
        const bool branch_taken_0x20c280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C280u;
        // 0x20c284: 0x2c627002  sltiu       $v0, $v1, 0x7002 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)28674) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c280) {
            ctx->pc = 0x20C4E0u;
            goto label_20c4e0;
        }
    }
    ctx->pc = 0x20C288u;
    // 0x20c288: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C288u;
    {
        const bool branch_taken_0x20c288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C288u;
        // 0x20c28c: 0x24023001  addiu       $v0, $zero, 0x3001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c288) {
            ctx->pc = 0x20C2A0u;
            goto label_20c2a0;
        }
    }
    ctx->pc = 0x20C290u;
    // 0x20c290: 0x1062008c  beq         $v1, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x20C290u;
    {
        const bool branch_taken_0x20c290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C290u;
        // 0x20c294: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c290) {
            ctx->pc = 0x20C4C4u;
            goto label_20c4c4;
        }
    }
    ctx->pc = 0x20C298u;
    // 0x20c298: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x20C298u;
    {
        const bool branch_taken_0x20c298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C298u;
        // 0x20c29c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c298) {
            ctx->pc = 0x20C6ECu;
            goto label_20c6ec;
        }
    }
    ctx->pc = 0x20C2A0u;
label_20c2a0:
    // 0x20c2a0: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x20c2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x20c2a4: 0x10620095  beq         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x20C2A4u;
    {
        const bool branch_taken_0x20c2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2A4u;
        // 0x20c2a8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2a4) {
            ctx->pc = 0x20C4FCu;
            goto label_20c4fc;
        }
    }
    ctx->pc = 0x20C2ACu;
    // 0x20c2ac: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x20C2ACu;
    {
        const bool branch_taken_0x20c2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2ACu;
        // 0x20c2b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2ac) {
            ctx->pc = 0x20C6ECu;
            goto label_20c6ec;
        }
    }
    ctx->pc = 0x20C2B4u;
label_20c2b4:
    // 0x20c2b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20c2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20c2b8: 0x106200bc  beq         $v1, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x20C2B8u;
    {
        const bool branch_taken_0x20c2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2B8u;
        // 0x20c2bc: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2b8) {
            ctx->pc = 0x20C5ACu;
            goto label_20c5ac;
        }
    }
    ctx->pc = 0x20C2C0u;
    // 0x20c2c0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20C2C0u;
    {
        const bool branch_taken_0x20c2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2C0u;
        // 0x20c2c4: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2c0) {
            ctx->pc = 0x20C324u;
            goto label_20c324;
        }
    }
    ctx->pc = 0x20C2C8u;
    // 0x20c2c8: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x20c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x20c2cc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20c2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20c2d0: 0x106200af  beq         $v1, $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x20C2D0u;
    {
        const bool branch_taken_0x20c2d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2D0u;
        // 0x20c2d4: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2d0) {
            ctx->pc = 0x20C590u;
            goto label_20c590;
        }
    }
    ctx->pc = 0x20C2D8u;
    // 0x20c2d8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C2D8u;
    {
        const bool branch_taken_0x20c2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2D8u;
        // 0x20c2dc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2d8) {
            ctx->pc = 0x20C304u;
            goto label_20c304;
        }
    }
    ctx->pc = 0x20C2E0u;
    // 0x20c2e0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x20c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x20c2e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20c2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20c2e8: 0x106200c5  beq         $v1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x20C2E8u;
    {
        const bool branch_taken_0x20c2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2E8u;
        // 0x20c2ec: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2e8) {
            ctx->pc = 0x20C600u;
            goto label_20c600;
        }
    }
    ctx->pc = 0x20C2F0u;
    // 0x20c2f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20c2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20c2f4: 0x10620098  beq         $v1, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x20C2F4u;
    {
        const bool branch_taken_0x20c2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2F4u;
        // 0x20c2f8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2f4) {
            ctx->pc = 0x20C558u;
            goto label_20c558;
        }
    }
    ctx->pc = 0x20C2FCu;
    // 0x20c2fc: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x20C2FCu;
    {
        const bool branch_taken_0x20c2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2FCu;
        // 0x20c300: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2fc) {
            ctx->pc = 0x20C6ECu;
            goto label_20c6ec;
        }
    }
    ctx->pc = 0x20C304u;
label_20c304:
    // 0x20c304: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20c304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20c308: 0x106200f1  beq         $v1, $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x20C308u;
    {
        const bool branch_taken_0x20c308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C308u;
        // 0x20c30c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c308) {
            ctx->pc = 0x20C6D0u;
            goto label_20c6d0;
        }
    }
    ctx->pc = 0x20C310u;
    // 0x20c310: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20c310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20c314: 0x10620097  beq         $v1, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x20C314u;
    {
        const bool branch_taken_0x20c314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C314u;
        // 0x20c318: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c314) {
            ctx->pc = 0x20C574u;
            goto label_20c574;
        }
    }
    ctx->pc = 0x20C31Cu;
    // 0x20c31c: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x20C31Cu;
    {
        const bool branch_taken_0x20c31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C31Cu;
        // 0x20c320: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c31c) {
            ctx->pc = 0x20C6ECu;
            goto label_20c6ec;
        }
    }
    ctx->pc = 0x20C324u;
label_20c324:
    // 0x20c324: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20c324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20c328: 0x106200c3  beq         $v1, $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x20C328u;
    {
        const bool branch_taken_0x20c328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C328u;
        // 0x20c32c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c328) {
            ctx->pc = 0x20C638u;
            goto label_20c638;
        }
    }
    ctx->pc = 0x20C330u;
    // 0x20c330: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C330u;
    {
        const bool branch_taken_0x20c330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C330u;
        // 0x20c334: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c330) {
            ctx->pc = 0x20C35Cu;
            goto label_20c35c;
        }
    }
    ctx->pc = 0x20C338u;
    // 0x20c338: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x20c338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x20c33c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20c33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20c340: 0x106200a8  beq         $v1, $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x20C340u;
    {
        const bool branch_taken_0x20c340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C340u;
        // 0x20c344: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c340) {
            ctx->pc = 0x20C5E4u;
            goto label_20c5e4;
        }
    }
    ctx->pc = 0x20C348u;
    // 0x20c348: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20c348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20c34c: 0x106200b3  beq         $v1, $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x20C34Cu;
    {
        const bool branch_taken_0x20c34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C34Cu;
        // 0x20c350: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c34c) {
            ctx->pc = 0x20C61Cu;
            goto label_20c61c;
        }
    }
    ctx->pc = 0x20C354u;
    // 0x20c354: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x20C354u;
    {
        const bool branch_taken_0x20c354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C354u;
        // 0x20c358: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c354) {
            ctx->pc = 0x20C6ECu;
            goto label_20c6ec;
        }
    }
    ctx->pc = 0x20C35Cu;
label_20c35c:
    // 0x20c35c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20c35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20c360: 0x106200bc  beq         $v1, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x20C360u;
    {
        const bool branch_taken_0x20c360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C360u;
        // 0x20c364: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c360) {
            ctx->pc = 0x20C654u;
            goto label_20c654;
        }
    }
    ctx->pc = 0x20C368u;
    // 0x20c368: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C368u;
    {
        const bool branch_taken_0x20c368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C368u;
        // 0x20c36c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c368) {
            ctx->pc = 0x20C384u;
            goto label_20c384;
        }
    }
    ctx->pc = 0x20C370u;
    // 0x20c370: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20c370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20c374: 0x10620094  beq         $v1, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x20C374u;
    {
        const bool branch_taken_0x20c374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C374u;
        // 0x20c378: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c374) {
            ctx->pc = 0x20C5C8u;
            goto label_20c5c8;
        }
    }
    ctx->pc = 0x20C37Cu;
    // 0x20c37c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x20C37Cu;
    {
        const bool branch_taken_0x20c37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C37Cu;
        // 0x20c380: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c37c) {
            ctx->pc = 0x20C6ECu;
            goto label_20c6ec;
        }
    }
    ctx->pc = 0x20C384u;
label_20c384:
    // 0x20c384: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x20c384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x20c388: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20c388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20c38c: 0x106200b8  beq         $v1, $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x20C38Cu;
    {
        const bool branch_taken_0x20c38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C38Cu;
        // 0x20c390: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c38c) {
            ctx->pc = 0x20C670u;
            goto label_20c670;
        }
    }
    ctx->pc = 0x20C394u;
    // 0x20c394: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x20C394u;
    {
        const bool branch_taken_0x20c394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C394u;
        // 0x20c398: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c394) {
            ctx->pc = 0x20C6ECu;
            goto label_20c6ec;
        }
    }
    ctx->pc = 0x20C39Cu;
label_20c39c:
    // 0x20c39c: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x20c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x20c3a0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x20c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x20c3a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20c3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20c3a8: 0x144300c9  bne         $v0, $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x20C3A8u;
    {
        const bool branch_taken_0x20c3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20c3a8) {
            ctx->pc = 0x20C6D0u;
            goto label_20c6d0;
        }
    }
    ctx->pc = 0x20C3B0u;
    // 0x20c3b0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C3B0u;
    SET_GPR_U32(ctx, 31, 0x20C3B8u);
    ctx->pc = 0x20C3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C3B0u;
    // 0x20c3b4: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C3B0u, 0x20C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3B8u;
label_20c3b8:
    // 0x20c3b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c3bc: 0xc08731e  jal         func_21CC78
    ctx->pc = 0x20C3BCu;
    SET_GPR_U32(ctx, 31, 0x20C3C4u);
    ctx->pc = 0x20C3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C3BCu;
    // 0x20c3c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CC78u, 0x20C3BCu, 0x20C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3C4u;
label_20c3c4:
    // 0x20c3c4: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x20C3C4u;
    {
        const bool branch_taken_0x20c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3C4u;
        // 0x20c3c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3c4) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C3CCu;
label_20c3cc:
    // 0x20c3cc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C3CCu;
    SET_GPR_U32(ctx, 31, 0x20C3D4u);
    ctx->pc = 0x20C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C3CCu;
    // 0x20c3d0: 0x24041460  addiu       $a0, $zero, 0x1460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C3CCu, 0x20C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3D4u;
label_20c3d4:
    // 0x20c3d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c3d8: 0xc0b91a6  jal         func_2E4698
    ctx->pc = 0x20C3D8u;
    SET_GPR_U32(ctx, 31, 0x20C3E0u);
    ctx->pc = 0x20C3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C3D8u;
    // 0x20c3dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4698u, 0x20C3D8u, 0x20C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3E0u;
label_20c3e0:
    // 0x20c3e0: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x20C3E0u;
    {
        const bool branch_taken_0x20c3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3E0u;
        // 0x20c3e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3e0) {
            ctx->pc = 0x20C6C0u;
            goto label_20c6c0;
        }
    }
    ctx->pc = 0x20C3E8u;
label_20c3e8:
    // 0x20c3e8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C3E8u;
    SET_GPR_U32(ctx, 31, 0x20C3F0u);
    ctx->pc = 0x20C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C3E8u;
    // 0x20c3ec: 0x24040fe0  addiu       $a0, $zero, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C3E8u, 0x20C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3F0u;
label_20c3f0:
    // 0x20c3f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c3f4: 0xc089a9c  jal         func_226A70
    ctx->pc = 0x20C3F4u;
    SET_GPR_U32(ctx, 31, 0x20C3FCu);
    ctx->pc = 0x20C3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C3F4u;
    // 0x20c3f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A70u, 0x20C3F4u, 0x20C3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3FCu;
label_20c3fc:
    // 0x20c3fc: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x20C3FCu;
    {
        const bool branch_taken_0x20c3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3FCu;
        // 0x20c400: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3fc) {
            ctx->pc = 0x20C6C0u;
            goto label_20c6c0;
        }
    }
    ctx->pc = 0x20C404u;
label_20c404:
    // 0x20c404: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C404u;
    SET_GPR_U32(ctx, 31, 0x20C40Cu);
    ctx->pc = 0x20C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C404u;
    // 0x20c408: 0x24041110  addiu       $a0, $zero, 0x1110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C404u, 0x20C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C40Cu;
label_20c40c:
    // 0x20c40c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c410: 0xc095a98  jal         func_256A60
    ctx->pc = 0x20C410u;
    SET_GPR_U32(ctx, 31, 0x20C418u);
    ctx->pc = 0x20C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C410u;
    // 0x20c414: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256A60u, 0x20C410u, 0x20C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C418u;
label_20c418:
    // 0x20c418: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x20c418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x20c41c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20c41cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c420: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x20c420u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x20c424: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20c424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20c428: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x20C428u;
    {
        const bool branch_taken_0x20c428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c428) {
            ctx->pc = 0x20C6C0u;
            goto label_20c6c0;
        }
    }
    ctx->pc = 0x20C430u;
    // 0x20c430: 0xc0960ae  jal         func_2582B8
    ctx->pc = 0x20C430u;
    SET_GPR_U32(ctx, 31, 0x20C438u);
    ctx->pc = 0x20C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C430u;
    // 0x20c434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2582B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2582B8u, 0x20C430u, 0x20C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C438u;
label_20c438:
    // 0x20c438: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x20C438u;
    {
        const bool branch_taken_0x20c438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c438) {
            ctx->pc = 0x20C6C0u;
            goto label_20c6c0;
        }
    }
    ctx->pc = 0x20C440u;
label_20c440:
    // 0x20c440: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C440u;
    SET_GPR_U32(ctx, 31, 0x20C448u);
    ctx->pc = 0x20C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C440u;
    // 0x20c444: 0x24041120  addiu       $a0, $zero, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C440u, 0x20C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C448u;
label_20c448:
    // 0x20c448: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20c448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c44c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c454: 0xc095a98  jal         func_256A60
    ctx->pc = 0x20C454u;
    SET_GPR_U32(ctx, 31, 0x20C45Cu);
    ctx->pc = 0x20C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C454u;
    // 0x20c458: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256A60u, 0x20C454u, 0x20C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C45Cu;
label_20c45c:
    // 0x20c45c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x20c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x20c460: 0xae001110  sw          $zero, 0x1110($s0)
    ctx->pc = 0x20c460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4368), GPR_U32(ctx, 0));
    // 0x20c464: 0x24632060  addiu       $v1, $v1, 0x2060
    ctx->pc = 0x20c464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8288));
    // 0x20c468: 0x26021110  addiu       $v0, $s0, 0x1110
    ctx->pc = 0x20c468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4368));
    // 0x20c46c: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x20c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x20c470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20c470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c474: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x20c474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x20c478: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20c478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x20c47c: 0xc096554  jal         func_259550
    ctx->pc = 0x20C47Cu;
    SET_GPR_U32(ctx, 31, 0x20C484u);
    ctx->pc = 0x20C480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C47Cu;
    // 0x20c480: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259550u, 0x20C47Cu, 0x20C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C484u;
label_20c484:
    // 0x20c484: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x20C484u;
    {
        const bool branch_taken_0x20c484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c484) {
            ctx->pc = 0x20C6C0u;
            goto label_20c6c0;
        }
    }
    ctx->pc = 0x20C48Cu;
label_20c48c:
    // 0x20c48c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C48Cu;
    SET_GPR_U32(ctx, 31, 0x20C494u);
    ctx->pc = 0x20C490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C48Cu;
    // 0x20c490: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C48Cu, 0x20C494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C494u;
label_20c494:
    // 0x20c494: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c498: 0xc099b20  jal         func_266C80
    ctx->pc = 0x20C498u;
    SET_GPR_U32(ctx, 31, 0x20C4A0u);
    ctx->pc = 0x20C49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C498u;
    // 0x20c49c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C80u, 0x20C498u, 0x20C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4A0u;
label_20c4a0:
    // 0x20c4a0: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x20C4A0u;
    {
        const bool branch_taken_0x20c4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4A0u;
        // 0x20c4a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4a0) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C4A8u;
label_20c4a8:
    // 0x20c4a8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C4A8u;
    SET_GPR_U32(ctx, 31, 0x20C4B0u);
    ctx->pc = 0x20C4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4A8u;
    // 0x20c4ac: 0x24040270  addiu       $a0, $zero, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C4A8u, 0x20C4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4B0u;
label_20c4b0:
    // 0x20c4b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c4b4: 0xc097598  jal         func_25D660
    ctx->pc = 0x20C4B4u;
    SET_GPR_U32(ctx, 31, 0x20C4BCu);
    ctx->pc = 0x20C4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4B4u;
    // 0x20c4b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D660u, 0x20C4B4u, 0x20C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4BCu;
label_20c4bc:
    // 0x20c4bc: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x20C4BCu;
    {
        const bool branch_taken_0x20c4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4BCu;
        // 0x20c4c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4bc) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C4C4u;
label_20c4c4:
    // 0x20c4c4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C4C4u;
    SET_GPR_U32(ctx, 31, 0x20C4CCu);
    ctx->pc = 0x20C4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4C4u;
    // 0x20c4c8: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C4C4u, 0x20C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4CCu;
label_20c4cc:
    // 0x20c4cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c4d0: 0xc098564  jal         func_261590
    ctx->pc = 0x20C4D0u;
    SET_GPR_U32(ctx, 31, 0x20C4D8u);
    ctx->pc = 0x20C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4D0u;
    // 0x20c4d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261590u, 0x20C4D0u, 0x20C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4D8u;
label_20c4d8:
    // 0x20c4d8: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x20C4D8u;
    {
        const bool branch_taken_0x20c4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4D8u;
        // 0x20c4dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4d8) {
            ctx->pc = 0x20C6C0u;
            goto label_20c6c0;
        }
    }
    ctx->pc = 0x20C4E0u;
label_20c4e0:
    // 0x20c4e0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C4E0u;
    SET_GPR_U32(ctx, 31, 0x20C4E8u);
    ctx->pc = 0x20C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4E0u;
    // 0x20c4e4: 0x240402f0  addiu       $a0, $zero, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C4E0u, 0x20C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4E8u;
label_20c4e8:
    // 0x20c4e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c4ec: 0xc0c2136  jal         func_3084D8
    ctx->pc = 0x20C4ECu;
    SET_GPR_U32(ctx, 31, 0x20C4F4u);
    ctx->pc = 0x20C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4ECu;
    // 0x20c4f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3084D8u, 0x20C4ECu, 0x20C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4F4u;
label_20c4f4:
    // 0x20c4f4: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x20C4F4u;
    {
        const bool branch_taken_0x20c4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4F4u;
        // 0x20c4f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4f4) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C4FCu;
label_20c4fc:
    // 0x20c4fc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C4FCu;
    SET_GPR_U32(ctx, 31, 0x20C504u);
    ctx->pc = 0x20C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4FCu;
    // 0x20c500: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C4FCu, 0x20C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C504u;
label_20c504:
    // 0x20c504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20c504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c508: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c510: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x20C510u;
    SET_GPR_U32(ctx, 31, 0x20C518u);
    ctx->pc = 0x20C514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C510u;
    // 0x20c514: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x20C510u, 0x20C518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C518u;
label_20c518:
    // 0x20c518: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x20c518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x20c51c: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x20c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x20c520: 0x24632748  addiu       $v1, $v1, 0x2748
    ctx->pc = 0x20c520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10056));
    // 0x20c524: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x20c524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x20c528: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x20c528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x20c52c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x20C52Cu;
    SET_GPR_U32(ctx, 31, 0x20C534u);
    ctx->pc = 0x20C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C52Cu;
    // 0x20c530: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20C52Cu, 0x20C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C534u;
label_20c534:
    // 0x20c534: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x20C534u;
    {
        const bool branch_taken_0x20c534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C534u;
        // 0x20c538: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c534) {
            ctx->pc = 0x20C700u;
            goto label_20c700;
        }
    }
    ctx->pc = 0x20C53Cu;
label_20c53c:
    // 0x20c53c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C53Cu;
    SET_GPR_U32(ctx, 31, 0x20C544u);
    ctx->pc = 0x20C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C53Cu;
    // 0x20c540: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C53Cu, 0x20C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C544u;
label_20c544:
    // 0x20c544: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c548: 0xc09a396  jal         func_268E58
    ctx->pc = 0x20C548u;
    SET_GPR_U32(ctx, 31, 0x20C550u);
    ctx->pc = 0x20C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C548u;
    // 0x20c54c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268E58u, 0x20C548u, 0x20C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C550u;
label_20c550:
    // 0x20c550: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x20C550u;
    {
        const bool branch_taken_0x20c550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C550u;
        // 0x20c554: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c550) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C558u;
label_20c558:
    // 0x20c558: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C558u;
    SET_GPR_U32(ctx, 31, 0x20C560u);
    ctx->pc = 0x20C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C558u;
    // 0x20c55c: 0x24040340  addiu       $a0, $zero, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C558u, 0x20C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C560u;
label_20c560:
    // 0x20c560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c564: 0xc0993d6  jal         func_264F58
    ctx->pc = 0x20C564u;
    SET_GPR_U32(ctx, 31, 0x20C56Cu);
    ctx->pc = 0x20C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C564u;
    // 0x20c568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264F58u, 0x20C564u, 0x20C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C56Cu;
label_20c56c:
    // 0x20c56c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x20C56Cu;
    {
        const bool branch_taken_0x20c56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C56Cu;
        // 0x20c570: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c56c) {
            ctx->pc = 0x20C6C0u;
            goto label_20c6c0;
        }
    }
    ctx->pc = 0x20C574u;
label_20c574:
    // 0x20c574: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C574u;
    SET_GPR_U32(ctx, 31, 0x20C57Cu);
    ctx->pc = 0x20C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C574u;
    // 0x20c578: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C574u, 0x20C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C57Cu;
label_20c57c:
    // 0x20c57c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c580: 0xc09ab94  jal         func_26AE50
    ctx->pc = 0x20C580u;
    SET_GPR_U32(ctx, 31, 0x20C588u);
    ctx->pc = 0x20C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C580u;
    // 0x20c584: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AE50u, 0x20C580u, 0x20C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C588u;
label_20c588:
    // 0x20c588: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x20C588u;
    {
        const bool branch_taken_0x20c588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C588u;
        // 0x20c58c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c588) {
            ctx->pc = 0x20C6C0u;
            goto label_20c6c0;
        }
    }
    ctx->pc = 0x20C590u;
label_20c590:
    // 0x20c590: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C590u;
    SET_GPR_U32(ctx, 31, 0x20C598u);
    ctx->pc = 0x20C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C590u;
    // 0x20c594: 0x24040270  addiu       $a0, $zero, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C590u, 0x20C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C598u;
label_20c598:
    // 0x20c598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c59c: 0xc09aee0  jal         func_26BB80
    ctx->pc = 0x20C59Cu;
    SET_GPR_U32(ctx, 31, 0x20C5A4u);
    ctx->pc = 0x20C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C59Cu;
    // 0x20c5a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BB80u, 0x20C59Cu, 0x20C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5A4u;
label_20c5a4:
    // 0x20c5a4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x20C5A4u;
    {
        const bool branch_taken_0x20c5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5A4u;
        // 0x20c5a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5a4) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C5ACu;
label_20c5ac:
    // 0x20c5ac: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C5ACu;
    SET_GPR_U32(ctx, 31, 0x20C5B4u);
    ctx->pc = 0x20C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C5ACu;
    // 0x20c5b0: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C5ACu, 0x20C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5B4u;
label_20c5b4:
    // 0x20c5b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c5b8: 0xc09af40  jal         func_26BD00
    ctx->pc = 0x20C5B8u;
    SET_GPR_U32(ctx, 31, 0x20C5C0u);
    ctx->pc = 0x20C5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C5B8u;
    // 0x20c5bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BD00u, 0x20C5B8u, 0x20C5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5C0u;
label_20c5c0:
    // 0x20c5c0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x20C5C0u;
    {
        const bool branch_taken_0x20c5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5C0u;
        // 0x20c5c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5c0) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C5C8u;
label_20c5c8:
    // 0x20c5c8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C5C8u;
    SET_GPR_U32(ctx, 31, 0x20C5D0u);
    ctx->pc = 0x20C5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C5C8u;
    // 0x20c5cc: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C5C8u, 0x20C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5D0u;
label_20c5d0:
    // 0x20c5d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c5d4: 0xc0974e4  jal         func_25D390
    ctx->pc = 0x20C5D4u;
    SET_GPR_U32(ctx, 31, 0x20C5DCu);
    ctx->pc = 0x20C5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C5D4u;
    // 0x20c5d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D390u, 0x20C5D4u, 0x20C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5DCu;
label_20c5dc:
    // 0x20c5dc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x20C5DCu;
    {
        const bool branch_taken_0x20c5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5DCu;
        // 0x20c5e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5dc) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C5E4u;
label_20c5e4:
    // 0x20c5e4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C5E4u;
    SET_GPR_U32(ctx, 31, 0x20C5ECu);
    ctx->pc = 0x20C5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C5E4u;
    // 0x20c5e8: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C5E4u, 0x20C5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5ECu;
label_20c5ec:
    // 0x20c5ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c5f0: 0xc09655e  jal         func_259578
    ctx->pc = 0x20C5F0u;
    SET_GPR_U32(ctx, 31, 0x20C5F8u);
    ctx->pc = 0x20C5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C5F0u;
    // 0x20c5f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259578u, 0x20C5F0u, 0x20C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5F8u;
label_20c5f8:
    // 0x20c5f8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x20C5F8u;
    {
        const bool branch_taken_0x20c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5F8u;
        // 0x20c5fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5f8) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C600u;
label_20c600:
    // 0x20c600: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C600u;
    SET_GPR_U32(ctx, 31, 0x20C608u);
    ctx->pc = 0x20C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C600u;
    // 0x20c604: 0x24040270  addiu       $a0, $zero, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C600u, 0x20C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C608u;
label_20c608:
    // 0x20c608: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c60c: 0xc09baa8  jal         func_26EAA0
    ctx->pc = 0x20C60Cu;
    SET_GPR_U32(ctx, 31, 0x20C614u);
    ctx->pc = 0x20C610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C60Cu;
    // 0x20c610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EAA0u, 0x20C60Cu, 0x20C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C614u;
label_20c614:
    // 0x20c614: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x20C614u;
    {
        const bool branch_taken_0x20c614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C614u;
        // 0x20c618: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c614) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C61Cu;
label_20c61c:
    // 0x20c61c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C61Cu;
    SET_GPR_U32(ctx, 31, 0x20C624u);
    ctx->pc = 0x20C620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C61Cu;
    // 0x20c620: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C61Cu, 0x20C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C624u;
label_20c624:
    // 0x20c624: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c628: 0xc099320  jal         func_264C80
    ctx->pc = 0x20C628u;
    SET_GPR_U32(ctx, 31, 0x20C630u);
    ctx->pc = 0x20C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C628u;
    // 0x20c62c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C80u, 0x20C628u, 0x20C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C630u;
label_20c630:
    // 0x20c630: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x20C630u;
    {
        const bool branch_taken_0x20c630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C630u;
        // 0x20c634: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c630) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C638u;
label_20c638:
    // 0x20c638: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C638u;
    SET_GPR_U32(ctx, 31, 0x20C640u);
    ctx->pc = 0x20C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C638u;
    // 0x20c63c: 0x240402a0  addiu       $a0, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C638u, 0x20C640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C640u;
label_20c640:
    // 0x20c640: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c644: 0xc09a502  jal         func_269408
    ctx->pc = 0x20C644u;
    SET_GPR_U32(ctx, 31, 0x20C64Cu);
    ctx->pc = 0x20C648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C644u;
    // 0x20c648: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269408u, 0x20C644u, 0x20C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C64Cu;
label_20c64c:
    // 0x20c64c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x20C64Cu;
    {
        const bool branch_taken_0x20c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C64Cu;
        // 0x20c650: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c64c) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C654u;
label_20c654:
    // 0x20c654: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C654u;
    SET_GPR_U32(ctx, 31, 0x20C65Cu);
    ctx->pc = 0x20C658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C654u;
    // 0x20c658: 0x240402c0  addiu       $a0, $zero, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C654u, 0x20C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C65Cu;
label_20c65c:
    // 0x20c65c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c660: 0xc09c428  jal         func_2710A0
    ctx->pc = 0x20C660u;
    SET_GPR_U32(ctx, 31, 0x20C668u);
    ctx->pc = 0x20C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C660u;
    // 0x20c664: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2710A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2710A0u, 0x20C660u, 0x20C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C668u;
label_20c668:
    // 0x20c668: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x20C668u;
    {
        const bool branch_taken_0x20c668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C668u;
        // 0x20c66c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c668) {
            ctx->pc = 0x20C6C0u;
            goto label_20c6c0;
        }
    }
    ctx->pc = 0x20C670u;
label_20c670:
    // 0x20c670: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C670u;
    SET_GPR_U32(ctx, 31, 0x20C678u);
    ctx->pc = 0x20C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C670u;
    // 0x20c674: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C670u, 0x20C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C678u;
label_20c678:
    // 0x20c678: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c67c: 0xc09c686  jal         func_271A18
    ctx->pc = 0x20C67Cu;
    SET_GPR_U32(ctx, 31, 0x20C684u);
    ctx->pc = 0x20C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C67Cu;
    // 0x20c680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A18u, 0x20C67Cu, 0x20C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C684u;
label_20c684:
    // 0x20c684: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x20C684u;
    {
        const bool branch_taken_0x20c684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C684u;
        // 0x20c688: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c684) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C68Cu;
label_20c68c:
    // 0x20c68c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C68Cu;
    SET_GPR_U32(ctx, 31, 0x20C694u);
    ctx->pc = 0x20C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C68Cu;
    // 0x20c690: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C68Cu, 0x20C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C694u;
label_20c694:
    // 0x20c694: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c698: 0xc09dad2  jal         func_276B48
    ctx->pc = 0x20C698u;
    SET_GPR_U32(ctx, 31, 0x20C6A0u);
    ctx->pc = 0x20C69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C698u;
    // 0x20c69c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276B48u, 0x20C698u, 0x20C6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C6A0u;
label_20c6a0:
    // 0x20c6a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x20C6A0u;
    {
        const bool branch_taken_0x20c6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6A0u;
        // 0x20c6a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6a0) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C6A8u;
label_20c6a8:
    // 0x20c6a8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C6A8u;
    SET_GPR_U32(ctx, 31, 0x20C6B0u);
    ctx->pc = 0x20C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C6A8u;
    // 0x20c6ac: 0x24041eb0  addiu       $a0, $zero, 0x1EB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C6A8u, 0x20C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C6B0u;
label_20c6b0:
    // 0x20c6b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c6b4: 0xc09cde2  jal         func_273788
    ctx->pc = 0x20C6B4u;
    SET_GPR_U32(ctx, 31, 0x20C6BCu);
    ctx->pc = 0x20C6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C6B4u;
    // 0x20c6b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273788u, 0x20C6B4u, 0x20C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C6BCu;
label_20c6bc:
    // 0x20c6bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20c6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c6c0:
    // 0x20c6c0: 0xc083566  jal         func_20D598
    ctx->pc = 0x20C6C0u;
    SET_GPR_U32(ctx, 31, 0x20C6C8u);
    ctx->pc = 0x20C6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C6C0u;
    // 0x20c6c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D598u, 0x20C6C0u, 0x20C6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C6C8u;
label_20c6c8:
    // 0x20c6c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20C6C8u;
    {
        const bool branch_taken_0x20c6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6C8u;
        // 0x20c6cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6c8) {
            ctx->pc = 0x20C700u;
            goto label_20c700;
        }
    }
    ctx->pc = 0x20C6D0u;
label_20c6d0:
    // 0x20c6d0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C6D0u;
    SET_GPR_U32(ctx, 31, 0x20C6D8u);
    ctx->pc = 0x20C6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C6D0u;
    // 0x20c6d4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C6D0u, 0x20C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C6D8u;
label_20c6d8:
    // 0x20c6d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20c6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c6dc: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x20C6DCu;
    SET_GPR_U32(ctx, 31, 0x20C6E4u);
    ctx->pc = 0x20C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C6DCu;
    // 0x20c6e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x20C6DCu, 0x20C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C6E4u;
label_20c6e4:
    // 0x20c6e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20C6E4u;
    {
        const bool branch_taken_0x20c6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6E4u;
        // 0x20c6e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6e4) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C6ECu;
label_20c6ec:
    // 0x20c6ec: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x20C6ECu;
    SET_GPR_U32(ctx, 31, 0x20C6F4u);
    ctx->pc = 0x20C6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C6ECu;
    // 0x20c6f0: 0x24a510a0  addiu       $a1, $a1, 0x10A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x20C6ECu, 0x20C6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C6F4u;
label_20c6f4:
    // 0x20c6f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20C6F4u;
    {
        const bool branch_taken_0x20c6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6F4u;
        // 0x20c6f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6f4) {
            ctx->pc = 0x20C700u;
            goto label_20c700;
        }
    }
    ctx->pc = 0x20C6FCu;
label_20c6fc:
    // 0x20c6fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20c6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20c700:
    // 0x20c700: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x20c700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20c704: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x20c704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20c708: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20c708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20c70c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C70Cu;
        // 0x20c710: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C714u;
    // 0x20c714: 0x0  nop
    ctx->pc = 0x20c714u;
    // NOP
    ctx->pc = 0x20c718u;
}
