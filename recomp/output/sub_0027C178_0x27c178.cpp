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

// Function: sub_0027C178
// Address: 0x27c178 - 0x27c3a0
void sub_0027C178_0x27c178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C178_0x27c178");
#endif

    switch (ctx->pc) {
        case 0x27c194u: goto label_27c194;
        case 0x27c220u: goto label_27c220;
        case 0x27c2c8u: goto label_27c2c8;
        case 0x27c350u: goto label_27c350;
        default: break;
    }

    ctx->pc = 0x27c178u;

    // 0x27c178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c17c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27c17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27c180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c184: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27c184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27c188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27c188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27c18c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x27C18Cu;
    SET_GPR_U32(ctx, 31, 0x27C194u);
    ctx->pc = 0x27C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C18Cu;
    // 0x27c190: 0x26040670  addiu       $a0, $s0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x27C18Cu, 0x27C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C194u;
label_27c194:
    // 0x27c194: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x27c194u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x27c198: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27c198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27c19c: 0x24030085  addiu       $v1, $zero, 0x85
    ctx->pc = 0x27c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x27c1a0: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x27c1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x27c1a4: 0x240500c9  addiu       $a1, $zero, 0xC9
    ctx->pc = 0x27c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x27c1a8: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x27c1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x27c1ac: 0x240700a6  addiu       $a3, $zero, 0xA6
    ctx->pc = 0x27c1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x27c1b0: 0x24080066  addiu       $t0, $zero, 0x66
    ctx->pc = 0x27c1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x27c1b4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x27c1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27c1b8: 0x240a001b  addiu       $t2, $zero, 0x1B
    ctx->pc = 0x27c1b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x27c1bc: 0x240b00c7  addiu       $t3, $zero, 0xC7
    ctx->pc = 0x27c1bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x27c1c0: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x27c1c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27c1c4: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x27c1c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27c1c8: 0xa2020748  sb          $v0, 0x748($s0)
    ctx->pc = 0x27c1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1864), (uint8_t)GPR_U32(ctx, 2));
    // 0x27c1cc: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x27c1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c1d0: 0xa2030749  sb          $v1, 0x749($s0)
    ctx->pc = 0x27c1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1865), (uint8_t)GPR_U32(ctx, 3));
    // 0x27c1d4: 0x262ea2c0  addiu       $t6, $s1, -0x5D40
    ctx->pc = 0x27c1d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943424));
    // 0x27c1d8: 0xa204074a  sb          $a0, 0x74A($s0)
    ctx->pc = 0x27c1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1866), (uint8_t)GPR_U32(ctx, 4));
    // 0x27c1dc: 0x24180003  addiu       $t8, $zero, 0x3
    ctx->pc = 0x27c1dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27c1e0: 0xa205074b  sb          $a1, 0x74B($s0)
    ctx->pc = 0x27c1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1867), (uint8_t)GPR_U32(ctx, 5));
    // 0x27c1e4: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x27c1e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27c1e8: 0xa206074c  sb          $a2, 0x74C($s0)
    ctx->pc = 0x27c1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1868), (uint8_t)GPR_U32(ctx, 6));
    // 0x27c1ec: 0xa207074d  sb          $a3, 0x74D($s0)
    ctx->pc = 0x27c1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1869), (uint8_t)GPR_U32(ctx, 7));
    // 0x27c1f0: 0xa208074e  sb          $t0, 0x74E($s0)
    ctx->pc = 0x27c1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1870), (uint8_t)GPR_U32(ctx, 8));
    // 0x27c1f4: 0xa209074f  sb          $t1, 0x74F($s0)
    ctx->pc = 0x27c1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1871), (uint8_t)GPR_U32(ctx, 9));
    // 0x27c1f8: 0xa20a0750  sb          $t2, 0x750($s0)
    ctx->pc = 0x27c1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1872), (uint8_t)GPR_U32(ctx, 10));
    // 0x27c1fc: 0xa20b0751  sb          $t3, 0x751($s0)
    ctx->pc = 0x27c1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1873), (uint8_t)GPR_U32(ctx, 11));
    // 0x27c200: 0xae0c0704  sw          $t4, 0x704($s0)
    ctx->pc = 0x27c200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 12));
    // 0x27c204: 0xae0d0708  sw          $t5, 0x708($s0)
    ctx->pc = 0x27c204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1800), GPR_U32(ctx, 13));
    // 0x27c208: 0xae000758  sw          $zero, 0x758($s0)
    ctx->pc = 0x27c208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1880), GPR_U32(ctx, 0));
    // 0x27c20c: 0xa200071c  sb          $zero, 0x71C($s0)
    ctx->pc = 0x27c20cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1820), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c210: 0xae00073c  sw          $zero, 0x73C($s0)
    ctx->pc = 0x27c210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 0));
    // 0x27c214: 0xae000720  sw          $zero, 0x720($s0)
    ctx->pc = 0x27c214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1824), GPR_U32(ctx, 0));
    // 0x27c218: 0xae000730  sw          $zero, 0x730($s0)
    ctx->pc = 0x27c218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1840), GPR_U32(ctx, 0));
    // 0x27c21c: 0x0  nop
    ctx->pc = 0x27c21cu;
    // NOP
label_27c220:
    // 0x27c220: 0x8e02073c  lw          $v0, 0x73C($s0)
    ctx->pc = 0x27c220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
    // 0x27c224: 0x14590007  bne         $v0, $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x27C224u;
    {
        const bool branch_taken_0x27c224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 25));
        if (branch_taken_0x27c224) {
            ctx->pc = 0x27C244u;
            goto label_27c244;
        }
    }
    ctx->pc = 0x27C22Cu;
    // 0x27c22c: 0x8e020730  lw          $v0, 0x730($s0)
    ctx->pc = 0x27c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1840)));
    // 0x27c230: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27c230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27c234: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x27c234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x27c238: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27c238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c23c: 0xae030734  sw          $v1, 0x734($s0)
    ctx->pc = 0x27c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1844), GPR_U32(ctx, 3));
    // 0x27c240: 0x8e02073c  lw          $v0, 0x73C($s0)
    ctx->pc = 0x27c240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
label_27c244:
    // 0x27c244: 0x5458000c  bnel        $v0, $t8, . + 4 + (0xC << 2)
    ctx->pc = 0x27C244u;
    {
        const bool branch_taken_0x27c244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 24));
        if (branch_taken_0x27c244) {
            ctx->pc = 0x27C248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C244u;
            // 0x27c248: 0x8e02073c  lw          $v0, 0x73C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C278u;
            goto label_27c278;
        }
    }
    ctx->pc = 0x27C24Cu;
    // 0x27c24c: 0x8e020730  lw          $v0, 0x730($s0)
    ctx->pc = 0x27c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1840)));
    // 0x27c250: 0x8e050734  lw          $a1, 0x734($s0)
    ctx->pc = 0x27c250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1844)));
    // 0x27c254: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27c254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27c258: 0x8e040720  lw          $a0, 0x720($s0)
    ctx->pc = 0x27c258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1824)));
    // 0x27c25c: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x27c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x27c260: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27c260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c264: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x27c264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x27c268: 0xae030738  sw          $v1, 0x738($s0)
    ctx->pc = 0x27c268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1848), GPR_U32(ctx, 3));
    // 0x27c26c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27c270: 0xae040720  sw          $a0, 0x720($s0)
    ctx->pc = 0x27c270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1824), GPR_U32(ctx, 4));
    // 0x27c274: 0x8e02073c  lw          $v0, 0x73C($s0)
    ctx->pc = 0x27c274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
label_27c278:
    // 0x27c278: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c27c: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x27c27cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x27c280: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27C280u;
    {
        const bool branch_taken_0x27c280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C280u;
        // 0x27c284: 0xae02073c  sw          $v0, 0x73C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c280) {
            ctx->pc = 0x27C28Cu;
            goto label_27c28c;
        }
    }
    ctx->pc = 0x27C288u;
    // 0x27c288: 0xae00073c  sw          $zero, 0x73C($s0)
    ctx->pc = 0x27c288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 0));
label_27c28c:
    // 0x27c28c: 0x8e020730  lw          $v0, 0x730($s0)
    ctx->pc = 0x27c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1840)));
    // 0x27c290: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c294: 0x4f182a  slt         $v1, $v0, $t7
    ctx->pc = 0x27c294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x27c298: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x27C298u;
    {
        const bool branch_taken_0x27c298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C298u;
        // 0x27c29c: 0xae020730  sw          $v0, 0x730($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c298) {
            ctx->pc = 0x27C220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c220;
        }
    }
    ctx->pc = 0x27C2A0u;
    // 0x27c2a0: 0x8e030708  lw          $v1, 0x708($s0)
    ctx->pc = 0x27c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
    // 0x27c2a4: 0xae00073c  sw          $zero, 0x73C($s0)
    ctx->pc = 0x27c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 0));
    // 0x27c2a8: 0xae000724  sw          $zero, 0x724($s0)
    ctx->pc = 0x27c2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1828), GPR_U32(ctx, 0));
    // 0x27c2ac: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x27C2ACu;
    {
        const bool branch_taken_0x27c2ac = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2ACu;
        // 0x27c2b0: 0xae000730  sw          $zero, 0x730($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2ac) {
            ctx->pc = 0x27C348u;
            goto label_27c348;
        }
    }
    ctx->pc = 0x27C2B4u;
    // 0x27c2b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x27c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x27c2b8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x27c2b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c2bc: 0x2446a2e0  addiu       $a2, $v0, -0x5D20
    ctx->pc = 0x27c2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943456));
    // 0x27c2c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x27c2c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c2c4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x27c2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27c2c8:
    // 0x27c2c8: 0x8e02073c  lw          $v0, 0x73C($s0)
    ctx->pc = 0x27c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
    // 0x27c2cc: 0x14490007  bne         $v0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27C2CCu;
    {
        const bool branch_taken_0x27c2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x27c2cc) {
            ctx->pc = 0x27C2ECu;
            goto label_27c2ec;
        }
    }
    ctx->pc = 0x27C2D4u;
    // 0x27c2d4: 0x8e020730  lw          $v0, 0x730($s0)
    ctx->pc = 0x27c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1840)));
    // 0x27c2d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27c2dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x27c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27c2e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27c2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c2e4: 0xae030734  sw          $v1, 0x734($s0)
    ctx->pc = 0x27c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1844), GPR_U32(ctx, 3));
    // 0x27c2e8: 0x8e02073c  lw          $v0, 0x73C($s0)
    ctx->pc = 0x27c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
label_27c2ec:
    // 0x27c2ec: 0x5448000c  bnel        $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x27C2ECu;
    {
        const bool branch_taken_0x27c2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x27c2ec) {
            ctx->pc = 0x27C2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C2ECu;
            // 0x27c2f0: 0x8e02073c  lw          $v0, 0x73C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C320u;
            goto label_27c320;
        }
    }
    ctx->pc = 0x27C2F4u;
    // 0x27c2f4: 0x8e020730  lw          $v0, 0x730($s0)
    ctx->pc = 0x27c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1840)));
    // 0x27c2f8: 0x8e050734  lw          $a1, 0x734($s0)
    ctx->pc = 0x27c2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1844)));
    // 0x27c2fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27c300: 0x8e040724  lw          $a0, 0x724($s0)
    ctx->pc = 0x27c300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1828)));
    // 0x27c304: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x27c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27c308: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27c308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c30c: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x27c30cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x27c310: 0xae030738  sw          $v1, 0x738($s0)
    ctx->pc = 0x27c310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1848), GPR_U32(ctx, 3));
    // 0x27c314: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27c314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27c318: 0xae040724  sw          $a0, 0x724($s0)
    ctx->pc = 0x27c318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1828), GPR_U32(ctx, 4));
    // 0x27c31c: 0x8e02073c  lw          $v0, 0x73C($s0)
    ctx->pc = 0x27c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
label_27c320:
    // 0x27c320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c324: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x27c324u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x27c328: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27C328u;
    {
        const bool branch_taken_0x27c328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C328u;
        // 0x27c32c: 0xae02073c  sw          $v0, 0x73C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c328) {
            ctx->pc = 0x27C334u;
            goto label_27c334;
        }
    }
    ctx->pc = 0x27C330u;
    // 0x27c330: 0xae00073c  sw          $zero, 0x73C($s0)
    ctx->pc = 0x27c330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 0));
label_27c334:
    // 0x27c334: 0x8e020730  lw          $v0, 0x730($s0)
    ctx->pc = 0x27c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1840)));
    // 0x27c338: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c33c: 0x47182a  slt         $v1, $v0, $a3
    ctx->pc = 0x27c33cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x27c340: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x27C340u;
    {
        const bool branch_taken_0x27c340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C340u;
        // 0x27c344: 0xae020730  sw          $v0, 0x730($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c340) {
            ctx->pc = 0x27C2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c2c8;
        }
    }
    ctx->pc = 0x27C348u;
label_27c348:
    // 0x27c348: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x27C348u;
    SET_GPR_U32(ctx, 31, 0x27C350u);
    ctx->pc = 0x27C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C348u;
    // 0x27c34c: 0x8e040720  lw          $a0, 0x720($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x27C348u, 0x27C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C350u;
label_27c350:
    // 0x27c350: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C350u;
    {
        const bool branch_taken_0x27c350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C350u;
        // 0x27c354: 0xae02070c  sw          $v0, 0x70C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1804), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c350) {
            ctx->pc = 0x27C360u;
            goto label_27c360;
        }
    }
    ctx->pc = 0x27C358u;
    // 0x27c358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27C358u;
    {
        const bool branch_taken_0x27c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C358u;
        // 0x27c35c: 0xae000700  sw          $zero, 0x700($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c358) {
            ctx->pc = 0x27C368u;
            goto label_27c368;
        }
    }
    ctx->pc = 0x27C360u;
label_27c360:
    // 0x27c360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c364: 0xae020700  sw          $v0, 0x700($s0)
    ctx->pc = 0x27c364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1792), GPR_U32(ctx, 2));
label_27c368:
    // 0x27c368: 0x2622a2c0  addiu       $v0, $s1, -0x5D40
    ctx->pc = 0x27c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943424));
    // 0x27c36c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27c370: 0xae020728  sw          $v0, 0x728($s0)
    ctx->pc = 0x27c370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1832), GPR_U32(ctx, 2));
    // 0x27c374: 0x2463a2e0  addiu       $v1, $v1, -0x5D20
    ctx->pc = 0x27c374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943456));
    // 0x27c378: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27c378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c37c: 0xae03072c  sw          $v1, 0x72C($s0)
    ctx->pc = 0x27c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1836), GPR_U32(ctx, 3));
    // 0x27c380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c384: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27c384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27c388: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27c388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c38c: 0x3e00008  jr          $ra
    ctx->pc = 0x27C38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C38Cu;
        // 0x27c390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C394u;
    // 0x27c394: 0x0  nop
    ctx->pc = 0x27c394u;
    // NOP
    // 0x27c398: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27c398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27c39c: 0x0  nop
    ctx->pc = 0x27c39cu;
    // NOP
    ctx->pc = 0x27c3a0u;
}
