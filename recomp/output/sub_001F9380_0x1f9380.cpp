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

// Function: sub_001F9380
// Address: 0x1f9380 - 0x1f9610
void sub_001F9380_0x1f9380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9380_0x1f9380");
#endif

    switch (ctx->pc) {
        case 0x1f93c8u: goto label_1f93c8;
        case 0x1f9418u: goto label_1f9418;
        case 0x1f9480u: goto label_1f9480;
        case 0x1f94ccu: goto label_1f94cc;
        case 0x1f9524u: goto label_1f9524;
        case 0x1f9554u: goto label_1f9554;
        case 0x1f956cu: goto label_1f956c;
        case 0x1f95b0u: goto label_1f95b0;
        case 0x1f95b8u: goto label_1f95b8;
        default: break;
    }

    ctx->pc = 0x1f9380u;

    // 0x1f9380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f9380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f9384: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f9384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f9388: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f9388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f938c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f938cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9390: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f9390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f9394: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f9394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f9398: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f9398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1f939c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1f93a0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1f93a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1f93a4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1f93a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1f93a8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1f93a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1f93ac: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1f93acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1f93b0: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x1f93b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f93b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F93B4u;
    {
        const bool branch_taken_0x1f93b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93B4u;
        // 0x1f93b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93b4) {
            ctx->pc = 0x1F93F8u;
            goto label_1f93f8;
        }
    }
    ctx->pc = 0x1F93BCu;
    // 0x1f93bc: 0x240619e0  addiu       $a2, $zero, 0x19E0
    ctx->pc = 0x1f93bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6624));
    // 0x1f93c0: 0x2603361c  addiu       $v1, $s0, 0x361C
    ctx->pc = 0x1f93c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 13852));
    // 0x1f93c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f93c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f93c8:
    // 0x1f93c8: 0x92020180  lbu         $v0, 0x180($s0)
    ctx->pc = 0x1f93c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1f93cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f93ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f93d0: 0x463818  mult        $a3, $v0, $a2
    ctx->pc = 0x1f93d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1f93d4: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1f93d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1f93d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f93dc: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x1f93dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x1f93e0: 0xac4001fc  sw          $zero, 0x1FC($v0)
    ctx->pc = 0x1f93e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 508), GPR_U32(ctx, 0));
    // 0x1f93e4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f93e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1f93e8: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x1f93e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f93ec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f93ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f93f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F93F0u;
    {
        const bool branch_taken_0x1f93f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F93F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93F0u;
        // 0x1f93f4: 0x24630090  addiu       $v1, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93f0) {
            ctx->pc = 0x1F93C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f93c8;
        }
    }
    ctx->pc = 0x1F93F8u;
label_1f93f8:
    // 0x1f93f8: 0x92060180  lbu         $a2, 0x180($s0)
    ctx->pc = 0x1f93f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1f93fc: 0x260235ac  addiu       $v0, $s0, 0x35AC
    ctx->pc = 0x1f93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 13740));
    // 0x1f9400: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f9400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f9404: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f9404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f9408: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f9408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f940c: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x1F940Cu;
    {
        const bool branch_taken_0x1f940c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F940Cu;
        // 0x1f9410: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f940c) {
            ctx->pc = 0x1F95A8u;
            goto label_1f95a8;
        }
    }
    ctx->pc = 0x1F9414u;
    // 0x1f9414: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x1f9414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_1f9418:
    // 0x1f9418: 0x240219e0  addiu       $v0, $zero, 0x19E0
    ctx->pc = 0x1f9418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6624));
    // 0x1f941c: 0xc41818  mult        $v1, $a2, $a0
    ctx->pc = 0x1f941cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f9420: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x1f9420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f9424: 0x240735e3  addiu       $a3, $zero, 0x35E3
    ctx->pc = 0x1f9424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x1f9428: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1f9428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f942c: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x1f942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1f9430: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1f9430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1f9434: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f9434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f9438: 0x90833550  lbu         $v1, 0x3550($a0)
    ctx->pc = 0x1f9438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13648)));
    // 0x1f943c: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x1f943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f9440: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1f9440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f9444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9448: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f9448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1f944c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1f944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f9450: 0x1067004d  beq         $v1, $a3, . + 4 + (0x4D << 2)
    ctx->pc = 0x1F9450u;
    {
        const bool branch_taken_0x1f9450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1F9454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9450u;
        // 0x1f9454: 0x24be0001  addiu       $fp, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9450) {
            ctx->pc = 0x1F9588u;
            goto label_1f9588;
        }
    }
    ctx->pc = 0x1F9458u;
    // 0x1f9458: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x1f9458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f945c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F945Cu;
    {
        const bool branch_taken_0x1f945c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F945Cu;
        // 0x1f9460: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f945c) {
            ctx->pc = 0x1F9588u;
            goto label_1f9588;
        }
    }
    ctx->pc = 0x1F9464u;
    // 0x1f9464: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1f9464u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9468: 0x17bc3a  dsrl        $s7, $s7, 16
    ctx->pc = 0x1f9468u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) >> 16);
    // 0x1f946c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1f946cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9470: 0x16b63a  dsrl        $s6, $s6, 24
    ctx->pc = 0x1f9470u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> 24);
    // 0x1f9474: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1f9474u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9478: 0x261235b0  addiu       $s2, $s0, 0x35B0
    ctx->pc = 0x1f9478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 13744));
    // 0x1f947c: 0x0  nop
    ctx->pc = 0x1f947cu;
    // NOP
label_1f9480:
    // 0x1f9480: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x1f9480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x1f9484: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f9484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9488: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x1f9488u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f948c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1f948cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9490: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x1f9490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x1f9494: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x1f9494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x1f9498: 0x54430037  bnel        $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1F9498u;
    {
        const bool branch_taken_0x1f9498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f9498) {
            ctx->pc = 0x1F949Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9498u;
            // 0x1f949c: 0x92020008  lbu         $v0, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9578u;
            goto label_1f9578;
        }
    }
    ctx->pc = 0x1F94A0u;
    // 0x1f94a0: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x1f94a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f94a4: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x1f94a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f94a8: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x1f94a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x1f94ac: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x1f94acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x1f94b0: 0x54620031  bnel        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1F94B0u;
    {
        const bool branch_taken_0x1f94b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f94b0) {
            ctx->pc = 0x1F94B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F94B0u;
            // 0x1f94b4: 0x92020008  lbu         $v0, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9578u;
            goto label_1f9578;
        }
    }
    ctx->pc = 0x1F94B8u;
    // 0x1f94b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f94b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f94bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f94c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94c4: 0xc07e25c  jal         func_1F8970
    ctx->pc = 0x1F94C4u;
    SET_GPR_U32(ctx, 31, 0x1F94CCu);
    ctx->pc = 0x1F94C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F94C4u;
    // 0x1f94c8: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8970u, 0x1F94C4u, 0x1F94CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94CCu;
label_1f94cc:
    // 0x1f94cc: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1F94CCu;
    {
        const bool branch_taken_0x1f94cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94CCu;
        // 0x1f94d0: 0x27b40004  addiu       $s4, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94cc) {
            ctx->pc = 0x1F9574u;
            goto label_1f9574;
        }
    }
    ctx->pc = 0x1F94D4u;
    // 0x1f94d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f94d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f94d8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f94d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f94dc: 0xac75006c  sw          $s5, 0x6C($v1)
    ctx->pc = 0x1f94dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 21));
    // 0x1f94e0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f94e4: 0xac55006c  sw          $s5, 0x6C($v0)
    ctx->pc = 0x1f94e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 21));
    // 0x1f94e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f94e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f94ec: 0xa0640078  sb          $a0, 0x78($v1)
    ctx->pc = 0x1f94ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 120), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f94f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f94f4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1f94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1f94f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F94F8u;
    {
        const bool branch_taken_0x1f94f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f94f8) {
            ctx->pc = 0x1F94FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F94F8u;
            // 0x1f94fc: 0x8c620024  lw          $v0, 0x24($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9510u;
            goto label_1f9510;
        }
    }
    ctx->pc = 0x1F9500u;
    // 0x1f9500: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x1f9500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
    // 0x1f9504: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f9504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f9508: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1F9508u;
    {
        const bool branch_taken_0x1f9508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9508u;
        // 0x1f950c: 0xac40006c  sw          $zero, 0x6C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9508) {
            ctx->pc = 0x1F9574u;
            goto label_1f9574;
        }
    }
    ctx->pc = 0x1F9510u;
label_1f9510:
    // 0x1f9510: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F9510u;
    {
        const bool branch_taken_0x1f9510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9510u;
        // 0x1f9514: 0x3c13004a  lui         $s3, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9510) {
            ctx->pc = 0x1F9540u;
            goto label_1f9540;
        }
    }
    ctx->pc = 0x1F9518u;
    // 0x1f9518: 0x26649c38  addiu       $a0, $s3, -0x63C8
    ctx->pc = 0x1f9518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941752));
    // 0x1f951c: 0xc0806aa  jal         func_201AA8
    ctx->pc = 0x1F951Cu;
    SET_GPR_U32(ctx, 31, 0x1F9524u);
    ctx->pc = 0x1F9520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F951Cu;
    // 0x1f9520: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AA8u, 0x1F951Cu, 0x1F9524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9524u;
label_1f9524:
    // 0x1f9524: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9524u;
    {
        const bool branch_taken_0x1f9524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9524u;
        // 0x1f9528: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9524) {
            ctx->pc = 0x1F9544u;
            goto label_1f9544;
        }
    }
    ctx->pc = 0x1F952Cu;
    // 0x1f952c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9530: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x1f9530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x1f9534: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1f9534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f9538: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F9538u;
    {
        const bool branch_taken_0x1f9538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9538u;
        // 0x1f953c: 0xac60006c  sw          $zero, 0x6C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9538) {
            ctx->pc = 0x1F9574u;
            goto label_1f9574;
        }
    }
    ctx->pc = 0x1F9540u;
label_1f9540:
    // 0x1f9540: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1f9540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f9544:
    // 0x1f9544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9548: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f9548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f954c: 0xc07e29e  jal         func_1F8A78
    ctx->pc = 0x1F954Cu;
    SET_GPR_U32(ctx, 31, 0x1F9554u);
    ctx->pc = 0x1F9550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F954Cu;
    // 0x1f9550: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A78u, 0x1F954Cu, 0x1F9554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9554u;
label_1f9554:
    // 0x1f9554: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f9554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9558: 0x26649c38  addiu       $a0, $s3, -0x63C8
    ctx->pc = 0x1f9558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941752));
    // 0x1f955c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f955cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9560: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f9560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9564: 0xc080724  jal         func_201C90
    ctx->pc = 0x1F9564u;
    SET_GPR_U32(ctx, 31, 0x1F956Cu);
    ctx->pc = 0x1F9568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9564u;
    // 0x1f9568: 0x8c460050  lw          $a2, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C90u, 0x1F9564u, 0x1F956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F956Cu;
label_1f956c:
    // 0x1f956c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F956Cu;
    {
        const bool branch_taken_0x1f956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F956Cu;
        // 0x1f9570: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f956c) {
            ctx->pc = 0x1F958Cu;
            goto label_1f958c;
        }
    }
    ctx->pc = 0x1F9574u;
label_1f9574:
    // 0x1f9574: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x1f9574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_1f9578:
    // 0x1f9578: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f957c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1f957cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f9580: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1F9580u;
    {
        const bool branch_taken_0x1f9580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9580u;
        // 0x1f9584: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9580) {
            ctx->pc = 0x1F9480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9480;
        }
    }
    ctx->pc = 0x1F9588u;
label_1f9588:
    // 0x1f9588: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1f9588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1f958c:
    // 0x1f958c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1f958cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9590: 0x92060180  lbu         $a2, 0x180($s0)
    ctx->pc = 0x1f9590u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1f9594: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1f9594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f9598: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f9598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f959c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1f959cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f95a0: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1F95A0u;
    {
        const bool branch_taken_0x1f95a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F95A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95A0u;
        // 0x1f95a4: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95a0) {
            ctx->pc = 0x1F9418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9418;
        }
    }
    ctx->pc = 0x1F95A8u;
label_1f95a8:
    // 0x1f95a8: 0xc07e3d6  jal         func_1F8F58
    ctx->pc = 0x1F95A8u;
    SET_GPR_U32(ctx, 31, 0x1F95B0u);
    ctx->pc = 0x1F95ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F95A8u;
    // 0x1f95ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8F58u, 0x1F95A8u, 0x1F95B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95B0u;
label_1f95b0:
    // 0x1f95b0: 0xc07e408  jal         func_1F9020
    ctx->pc = 0x1F95B0u;
    SET_GPR_U32(ctx, 31, 0x1F95B8u);
    ctx->pc = 0x1F95B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F95B0u;
    // 0x1f95b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9020u, 0x1F95B0u, 0x1F95B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95B8u;
label_1f95b8:
    // 0x1f95b8: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x1f95b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f95bc: 0x92040008  lbu         $a0, 0x8($s0)
    ctx->pc = 0x1f95bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f95c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f95c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f95c4: 0xa2030014  sb          $v1, 0x14($s0)
    ctx->pc = 0x1f95c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f95c8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F95C8u;
    {
        const bool branch_taken_0x1f95c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f95c8) {
            ctx->pc = 0x1F95CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F95C8u;
            // 0x1f95cc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F95D0u;
            goto label_1f95d0;
        }
    }
    ctx->pc = 0x1F95D0u;
label_1f95d0:
    // 0x1f95d0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1f95d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f95d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f95d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f95d8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1f95d8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1f95dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f95dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f95e0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f95e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f95e4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f95e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f95e8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f95e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f95ec: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1f95ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f95f0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1f95f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f95f4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1f95f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f95f8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1f95f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f95fc: 0x1810  mfhi        $v1
    ctx->pc = 0x1f95fcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f9600: 0xa2030014  sb          $v1, 0x14($s0)
    ctx->pc = 0x1f9600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f9604: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f9604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9608: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9608u;
        // 0x1f960c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9610u;
}
