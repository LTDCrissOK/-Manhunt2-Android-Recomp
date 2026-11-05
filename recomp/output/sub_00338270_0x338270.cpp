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

// Function: sub_00338270
// Address: 0x338270 - 0x3383d0
void sub_00338270_0x338270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338270_0x338270");
#endif

    switch (ctx->pc) {
        case 0x3382b0u: goto label_3382b0;
        case 0x3382f0u: goto label_3382f0;
        case 0x338304u: goto label_338304;
        case 0x338328u: goto label_338328;
        case 0x338358u: goto label_338358;
        case 0x33838cu: goto label_33838c;
        default: break;
    }

    ctx->pc = 0x338270u;

    // 0x338270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x338270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x338274: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x338274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x338278: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x338278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x33827c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33827cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338280: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x338280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x338284: 0x24566ec4  addiu       $s6, $v0, 0x6EC4
    ctx->pc = 0x338284u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 28356));
    // 0x338288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33828c: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x33828cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338290: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x338290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x338294: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x338294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x338298: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x338298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33829c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3382a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3382a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3382a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3382a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3382a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3382a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3382ac: 0x0  nop
    ctx->pc = 0x3382acu;
    // NOP
label_3382b0:
    // 0x3382b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3382b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3382b4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3382b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3382b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3382b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3382bc: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3382BCu;
    {
        const bool branch_taken_0x3382bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3382C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3382BCu;
        // 0x3382c0: 0x24740001  addiu       $s4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3382bc) {
            ctx->pc = 0x338390u;
            goto label_338390;
        }
    }
    ctx->pc = 0x3382C4u;
    // 0x3382c4: 0x8c83fff0  lw          $v1, -0x10($a0)
    ctx->pc = 0x3382c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x3382c8: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x3382c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x3382cc: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x3382ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3382d0: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x3382d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3382d4: 0x5090002a  beql        $a0, $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3382D4u;
    {
        const bool branch_taken_0x3382d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x3382d4) {
            ctx->pc = 0x3382D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3382D4u;
            // 0x3382d8: 0x2768021  addu        $s0, $s3, $s6 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338380u;
            goto label_338380;
        }
    }
    ctx->pc = 0x3382DCu;
    // 0x3382dc: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x3382dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x3382e0: 0x2779021  addu        $s2, $s3, $s7
    ctx->pc = 0x3382e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x3382e4: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x3382e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3382e8: 0x2631ff60  addiu       $s1, $s1, -0xA0
    ctx->pc = 0x3382e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967136));
    // 0x3382ec: 0x0  nop
    ctx->pc = 0x3382ecu;
    // NOP
label_3382f0:
    // 0x3382f0: 0x8e25ffb0  lw          $a1, -0x50($s1)
    ctx->pc = 0x3382f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967216)));
    // 0x3382f4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3382F4u;
    {
        const bool branch_taken_0x3382f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3382F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3382F4u;
        // 0x3382f8: 0x2610ff60  addiu       $s0, $s0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3382f4) {
            ctx->pc = 0x338304u;
            goto label_338304;
        }
    }
    ctx->pc = 0x3382FCu;
    // 0x3382fc: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x3382FCu;
    SET_GPR_U32(ctx, 31, 0x338304u);
    ctx->pc = 0x338300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3382FCu;
    // 0x338300: 0x26a45ad0  addiu       $a0, $s5, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x3382FCu, 0x338304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338304u;
label_338304:
    // 0x338304: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x338304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x338308: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x338308u;
    {
        const bool branch_taken_0x338308 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338308u;
        // 0x33830c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338308) {
            ctx->pc = 0x338340u;
            goto label_338340;
        }
    }
    ctx->pc = 0x338310u;
    // 0x338310: 0x26020068  addiu       $v0, $s0, 0x68
    ctx->pc = 0x338310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x338314: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x338314u;
    {
        const bool branch_taken_0x338314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x338314) {
            ctx->pc = 0x338340u;
            goto label_338340;
        }
    }
    ctx->pc = 0x33831Cu;
    // 0x33831c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x33831cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338320: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x338320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x338324: 0x0  nop
    ctx->pc = 0x338324u;
    // NOP
label_338328:
    // 0x338328: 0x0  nop
    ctx->pc = 0x338328u;
    // NOP
    // 0x33832c: 0x0  nop
    ctx->pc = 0x33832cu;
    // NOP
    // 0x338330: 0x0  nop
    ctx->pc = 0x338330u;
    // NOP
    // 0x338334: 0x0  nop
    ctx->pc = 0x338334u;
    // NOP
    // 0x338338: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x338338u;
    {
        const bool branch_taken_0x338338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338338u;
        // 0x33833c: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338338) {
            ctx->pc = 0x338328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338328;
        }
    }
    ctx->pc = 0x338340u;
label_338340:
    // 0x338340: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x338340u;
    {
        const bool branch_taken_0x338340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x338344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338340u;
        // 0x338344: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338340) {
            ctx->pc = 0x338370u;
            goto label_338370;
        }
    }
    ctx->pc = 0x338348u;
    // 0x338348: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x338348u;
    {
        const bool branch_taken_0x338348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x338348) {
            ctx->pc = 0x33834Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338348u;
            // 0x33834c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338374u;
            goto label_338374;
        }
    }
    ctx->pc = 0x338350u;
    // 0x338350: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x338350u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338354: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x338354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_338358:
    // 0x338358: 0x0  nop
    ctx->pc = 0x338358u;
    // NOP
    // 0x33835c: 0x0  nop
    ctx->pc = 0x33835cu;
    // NOP
    // 0x338360: 0x0  nop
    ctx->pc = 0x338360u;
    // NOP
    // 0x338364: 0x0  nop
    ctx->pc = 0x338364u;
    // NOP
    // 0x338368: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x338368u;
    {
        const bool branch_taken_0x338368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338368u;
        // 0x33836c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338368) {
            ctx->pc = 0x338358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338358;
        }
    }
    ctx->pc = 0x338370u;
label_338370:
    // 0x338370: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x338370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_338374:
    // 0x338374: 0x5450ffde  bnel        $v0, $s0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x338374u;
    {
        const bool branch_taken_0x338374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x338374) {
            ctx->pc = 0x338378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338374u;
            // 0x338378: 0x2631ff60  addiu       $s1, $s1, -0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967136));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3382F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3382f0;
        }
    }
    ctx->pc = 0x33837Cu;
    // 0x33837c: 0x2768021  addu        $s0, $s3, $s6
    ctx->pc = 0x33837cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_338380:
    // 0x338380: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x338380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x338384: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x338384u;
    SET_GPR_U32(ctx, 31, 0x33838Cu);
    ctx->pc = 0x338388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338384u;
    // 0x338388: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x338384u, 0x33838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33838Cu;
label_33838c:
    // 0x33838c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x33838cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_338390:
    // 0x338390: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x338390u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338394: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x338394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x338398: 0x5440ffc5  bnel        $v0, $zero, . + 4 + (-0x3B << 2)
    ctx->pc = 0x338398u;
    {
        const bool branch_taken_0x338398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338398) {
            ctx->pc = 0x33839Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338398u;
            // 0x33839c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3382B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3382b0;
        }
    }
    ctx->pc = 0x3383A0u;
    // 0x3383a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3383a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3383a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3383a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3383a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3383a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3383ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3383acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3383b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3383b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3383b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3383b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3383b8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3383b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3383bc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3383bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3383c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3383c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3383c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3383C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3383C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383C4u;
        // 0x3383c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3383C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3383CCu;
    // 0x3383cc: 0x0  nop
    ctx->pc = 0x3383ccu;
    // NOP
    ctx->pc = 0x3383d0u;
}
