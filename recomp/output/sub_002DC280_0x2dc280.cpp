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

// Function: sub_002DC280
// Address: 0x2dc280 - 0x2dc538
void sub_002DC280_0x2dc280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC280_0x2dc280");
#endif

    switch (ctx->pc) {
        case 0x2dc2c0u: goto label_2dc2c0;
        case 0x2dc2e0u: goto label_2dc2e0;
        case 0x2dc320u: goto label_2dc320;
        case 0x2dc330u: goto label_2dc330;
        case 0x2dc370u: goto label_2dc370;
        case 0x2dc3c8u: goto label_2dc3c8;
        case 0x2dc3e4u: goto label_2dc3e4;
        case 0x2dc3f4u: goto label_2dc3f4;
        case 0x2dc44cu: goto label_2dc44c;
        case 0x2dc488u: goto label_2dc488;
        case 0x2dc4a0u: goto label_2dc4a0;
        case 0x2dc4ecu: goto label_2dc4ec;
        default: break;
    }

    ctx->pc = 0x2dc280u;

    // 0x2dc280: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2dc280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2dc284: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2dc284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2dc288: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dc288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc28c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2dc28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2dc290: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2dc290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2dc294: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2dc294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc298: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2dc298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2dc29c: 0x26435490  addiu       $v1, $s2, 0x5490
    ctx->pc = 0x2dc29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 21648));
    // 0x2dc2a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2dc2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2dc2a4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2dc2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2dc2a8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2dc2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2dc2ac: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2dc2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x2dc2b0: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x2dc2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x2dc2b4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2dc2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2dc2b8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2dc2b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2dc2bc: 0x0  nop
    ctx->pc = 0x2dc2bcu;
    // NOP
label_2dc2c0:
    // 0x2dc2c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dc2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dc2c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2dc2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dc2c8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2dc2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2dc2cc: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x2dc2ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2dc2d0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DC2D0u;
    {
        const bool branch_taken_0x2dc2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2D0u;
        // 0x2dc2d4: 0x24630180  addiu       $v1, $v1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc2d0) {
            ctx->pc = 0x2DC2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc2c0;
        }
    }
    ctx->pc = 0x2DC2D8u;
    // 0x2dc2d8: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2DC2D8u;
    {
        const bool branch_taken_0x2dc2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2D8u;
        // 0x2dc2dc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc2d8) {
            ctx->pc = 0x2DC4E4u;
            goto label_2dc4e4;
        }
    }
    ctx->pc = 0x2DC2E0u;
label_2dc2e0:
    // 0x2dc2e0: 0x26420490  addiu       $v0, $s2, 0x490
    ctx->pc = 0x2dc2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x2dc2e4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2dc2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dc2e8: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2dc2e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc2ec: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2dc2ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dc2f0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x2dc2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2dc2f4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2dc2f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc2f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc2fc: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2DC2FCu;
    {
        const bool branch_taken_0x2dc2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2FCu;
        // 0x2dc300: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc2fc) {
            ctx->pc = 0x2DC398u;
            goto label_2dc398;
        }
    }
    ctx->pc = 0x2DC304u;
    // 0x2dc304: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x2dc304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2dc308: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2dc308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc30c: 0x2a61018  mult        $v0, $s5, $a2
    ctx->pc = 0x2dc30cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dc310: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x2dc310u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dc314: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x2dc314u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dc318: 0x24425490  addiu       $v0, $v0, 0x5490
    ctx->pc = 0x2dc318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21648));
    // 0x2dc31c: 0x2425821  addu        $t3, $s2, $v0
    ctx->pc = 0x2dc31cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2dc320:
    // 0x2dc320: 0x14690009  bne         $v1, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DC320u;
    {
        const bool branch_taken_0x2dc320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x2DC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC320u;
        // 0x2dc324: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc320) {
            ctx->pc = 0x2DC348u;
            goto label_2dc348;
        }
    }
    ctx->pc = 0x2DC328u;
    // 0x2dc328: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2dc328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dc32c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2dc32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2dc330:
    // 0x2dc330: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2dc330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2dc334: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2dc334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc338: 0x0  nop
    ctx->pc = 0x2dc338u;
    // NOP
    // 0x2dc33c: 0x0  nop
    ctx->pc = 0x2dc33cu;
    // NOP
    // 0x2dc340: 0x1064fffb  beq         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DC340u;
    {
        const bool branch_taken_0x2dc340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DC344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC340u;
        // 0x2dc344: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc340) {
            ctx->pc = 0x2DC330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc330;
        }
    }
    ctx->pc = 0x2DC348u;
label_2dc348:
    // 0x2dc348: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DC348u;
    {
        const bool branch_taken_0x2dc348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC348u;
        // 0x2dc34c: 0x28a1018  mult        $v0, $s4, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc348) {
            ctx->pc = 0x2DC398u;
            goto label_2dc398;
        }
    }
    ctx->pc = 0x2DC350u;
    // 0x2dc350: 0x26870001  addiu       $a3, $s4, 0x1
    ctx->pc = 0x2dc350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2dc354: 0x4b2021  addu        $a0, $v0, $t3
    ctx->pc = 0x2dc354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2dc358: 0x1069000b  beq         $v1, $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DC358u;
    {
        const bool branch_taken_0x2dc358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x2DC35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC358u;
        // 0x2dc35c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc358) {
            ctx->pc = 0x2DC388u;
            goto label_2dc388;
        }
    }
    ctx->pc = 0x2DC360u;
    // 0x2dc360: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2dc360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2dc364: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2dc364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dc368: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2dc368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2dc36c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2dc36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2dc370:
    // 0x2dc370: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2dc370u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc374: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC374u;
    {
        const bool branch_taken_0x2dc374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC374u;
        // 0x2dc378: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc374) {
            ctx->pc = 0x2DC388u;
            goto label_2dc388;
        }
    }
    ctx->pc = 0x2DC37Cu;
    // 0x2dc37c: 0x0  nop
    ctx->pc = 0x2dc37cu;
    // NOP
    // 0x2dc380: 0x5466fffb  bnel        $v1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DC380u;
    {
        const bool branch_taken_0x2dc380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2dc380) {
            ctx->pc = 0x2DC384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC380u;
            // 0x2dc384: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc370;
        }
    }
    ctx->pc = 0x2DC388u;
label_2dc388:
    // 0x2dc388: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2dc388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2dc38c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2dc38cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc390: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2DC390u;
    {
        const bool branch_taken_0x2dc390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC390u;
        // 0x2dc394: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc390) {
            ctx->pc = 0x2DC320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc320;
        }
    }
    ctx->pc = 0x2DC398u;
label_2dc398:
    // 0x2dc398: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2dc398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dc39c: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2DC39Cu;
    {
        const bool branch_taken_0x2dc39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC39Cu;
        // 0x2dc3a0: 0x2a9e0020  slti        $fp, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc39c) {
            ctx->pc = 0x2DC4B8u;
            goto label_2dc4b8;
        }
    }
    ctx->pc = 0x2DC3A4u;
    // 0x2dc3a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2dc3a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2dc3a8: 0x1a800010  blez        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DC3A8u;
    {
        const bool branch_taken_0x2dc3a8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2DC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3A8u;
        // 0x2dc3ac: 0x26565498  addiu       $s6, $s2, 0x5498 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 21656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3a8) {
            ctx->pc = 0x2DC3ECu;
            goto label_2dc3ec;
        }
    }
    ctx->pc = 0x2DC3B0u;
    // 0x2dc3b0: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x2dc3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2dc3b4: 0x26f30490  addiu       $s3, $s7, 0x490
    ctx->pc = 0x2dc3b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1168));
    // 0x2dc3b8: 0x2a31018  mult        $v0, $s5, $v1
    ctx->pc = 0x2dc3b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dc3bc: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2dc3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3c0: 0x24425490  addiu       $v0, $v0, 0x5490
    ctx->pc = 0x2dc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21648));
    // 0x2dc3c4: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x2dc3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2dc3c8:
    // 0x2dc3c8: 0xc64c63c8  lwc1        $f12, 0x63C8($s2)
    ctx->pc = 0x2dc3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 25544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3d0: 0x8e4663c4  lw          $a2, 0x63C4($s2)
    ctx->pc = 0x2dc3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25540)));
    // 0x2dc3d4: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x2dc3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2dc3d8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2dc3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2dc3dc: 0xc0b7084  jal         func_2DC210
    ctx->pc = 0x2DC3DCu;
    SET_GPR_U32(ctx, 31, 0x2DC3E4u);
    ctx->pc = 0x2DC3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC3DCu;
    // 0x2dc3e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC210u, 0x2DC3DCu, 0x2DC3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC3E4u;
label_2dc3e4:
    // 0x2dc3e4: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DC3E4u;
    {
        const bool branch_taken_0x2dc3e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3E4u;
        // 0x2dc3e8: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3e4) {
            ctx->pc = 0x2DC3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc3c8;
        }
    }
    ctx->pc = 0x2DC3ECu;
label_2dc3ec:
    // 0x2dc3ec: 0xc0b714e  jal         func_2DC538
    ctx->pc = 0x2DC3ECu;
    SET_GPR_U32(ctx, 31, 0x2DC3F4u);
    ctx->pc = 0x2DC3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC3ECu;
    // 0x2dc3f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC538u, 0x2DC3ECu, 0x2DC3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC3F4u;
label_2dc3f4:
    // 0x2dc3f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2dc3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2dc3f8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2dc3f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dc3fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DC3FCu;
    {
        const bool branch_taken_0x2dc3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3FCu;
        // 0x2dc400: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3fc) {
            ctx->pc = 0x2DC424u;
            goto label_2dc424;
        }
    }
    ctx->pc = 0x2DC404u;
    // 0x2dc404: 0xc6400424  lwc1        $f0, 0x424($s2)
    ctx->pc = 0x2dc404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc408: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dc408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc40c: 0x0  nop
    ctx->pc = 0x2dc40cu;
    // NOP
    // 0x2dc410: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dc410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2dc414: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2dc414u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2dc418: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2dc418u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2dc41c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2DC41Cu;
    {
        const bool branch_taken_0x2dc41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC41Cu;
        // 0x2dc420: 0x24020180  addiu       $v0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc41c) {
            ctx->pc = 0x2DC454u;
            goto label_2dc454;
        }
    }
    ctx->pc = 0x2DC424u;
label_2dc424:
    // 0x2dc424: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2dc424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2dc428: 0xc64c63c8  lwc1        $f12, 0x63C8($s2)
    ctx->pc = 0x2dc428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 25544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc42c: 0x8e4563c4  lw          $a1, 0x63C4($s2)
    ctx->pc = 0x2dc42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25540)));
    // 0x2dc430: 0x24431660  addiu       $v1, $v0, 0x1660
    ctx->pc = 0x2dc430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5728));
    // 0x2dc434: 0x88660003  lwl         $a2, 0x3($v1)
    ctx->pc = 0x2dc434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2dc438: 0x98660000  lwr         $a2, 0x0($v1)
    ctx->pc = 0x2dc438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2dc43c: 0xaba60003  swl         $a2, 0x3($sp)
    ctx->pc = 0x2dc43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dc440: 0xbba60000  swr         $a2, 0x0($sp)
    ctx->pc = 0x2dc440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dc444: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x2DC444u;
    SET_GPR_U32(ctx, 31, 0x2DC44Cu);
    ctx->pc = 0x2DC448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC444u;
    // 0x2dc448: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x2DC444u, 0x2DC44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC44Cu;
label_2dc44c:
    // 0x2dc44c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2dc44cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2dc450: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x2dc450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_2dc454:
    // 0x2dc454: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2dc454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc458: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x2dc458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dc45c: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x2dc45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2dc460: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2dc460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2dc464: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DC464u;
    {
        const bool branch_taken_0x2dc464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC464u;
        // 0x2dc468: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc464) {
            ctx->pc = 0x2DC4B8u;
            goto label_2dc4b8;
        }
    }
    ctx->pc = 0x2DC46Cu;
    // 0x2dc46c: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x2dc46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2dc470: 0x26f30490  addiu       $s3, $s7, 0x490
    ctx->pc = 0x2dc470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1168));
    // 0x2dc474: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x2dc474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2dc478: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x2dc478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2dc47c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2dc47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2dc480: 0x24505490  addiu       $s0, $v0, 0x5490
    ctx->pc = 0x2dc480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21648));
    // 0x2dc484: 0x0  nop
    ctx->pc = 0x2dc484u;
    // NOP
label_2dc488:
    // 0x2dc488: 0xc64c63c8  lwc1        $f12, 0x63C8($s2)
    ctx->pc = 0x2dc488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 25544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc490: 0x8e4663c4  lw          $a2, 0x63C4($s2)
    ctx->pc = 0x2dc490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25540)));
    // 0x2dc494: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x2dc494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2dc498: 0xc0b7084  jal         func_2DC210
    ctx->pc = 0x2DC498u;
    SET_GPR_U32(ctx, 31, 0x2DC4A0u);
    ctx->pc = 0x2DC49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC498u;
    // 0x2dc49c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC210u, 0x2DC498u, 0x2DC4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4A0u;
label_2dc4a0:
    // 0x2dc4a0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2dc4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc4a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2dc4a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dc4a8: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2dc4a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2dc4ac: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2dc4acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2dc4b0: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2DC4B0u;
    {
        const bool branch_taken_0x2dc4b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4B0u;
        // 0x2dc4b4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc4b0) {
            ctx->pc = 0x2DC488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc488;
        }
    }
    ctx->pc = 0x2DC4B8u;
label_2dc4b8:
    // 0x2dc4b8: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DC4B8u;
    {
        const bool branch_taken_0x2dc4b8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4B8u;
        // 0x2dc4bc: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc4b8) {
            ctx->pc = 0x2DC4E0u;
            goto label_2dc4e0;
        }
    }
    ctx->pc = 0x2DC4C0u;
    // 0x2dc4c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2dc4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dc4c4: 0x2a42018  mult        $a0, $s5, $a0
    ctx->pc = 0x2dc4c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2dc4c8: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x2dc4c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dc4cc: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x2dc4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2dc4d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dc4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dc4d4: 0x24425490  addiu       $v0, $v0, 0x5490
    ctx->pc = 0x2dc4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21648));
    // 0x2dc4d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2dc4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2dc4dc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2dc4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2dc4e0:
    // 0x2dc4e0: 0x8fb50010  lw          $s5, 0x10($sp)
    ctx->pc = 0x2dc4e0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc4e4:
    // 0x2dc4e4: 0xc0b714e  jal         func_2DC538
    ctx->pc = 0x2DC4E4u;
    SET_GPR_U32(ctx, 31, 0x2DC4ECu);
    ctx->pc = 0x2DC4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC4E4u;
    // 0x2dc4e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC538u, 0x2DC4E4u, 0x2DC4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4ECu;
label_2dc4ec:
    // 0x2dc4ec: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2dc4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dc4f0: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x2DC4F0u;
    {
        const bool branch_taken_0x2dc4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4F0u;
        // 0x2dc4f4: 0x151a80  sll         $v1, $s5, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc4f0) {
            ctx->pc = 0x2DC2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc2e0;
        }
    }
    ctx->pc = 0x2DC4F8u;
    // 0x2dc4f8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2dc4f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc4fc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2dc4fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dc500: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2dc500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc504: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2dc504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dc508: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2dc508u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dc50c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2dc50cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc510: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2dc510u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dc514: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2dc514u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2dc518: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2dc518u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dc51c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2dc51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dc520: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2dc520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dc524: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC524u;
        // 0x2dc528: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC52Cu;
    // 0x2dc52c: 0x0  nop
    ctx->pc = 0x2dc52cu;
    // NOP
    // 0x2dc530: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2dc530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc534: 0x0  nop
    ctx->pc = 0x2dc534u;
    // NOP
    ctx->pc = 0x2dc538u;
}
