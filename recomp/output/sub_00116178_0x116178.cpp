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

// Function: sub_00116178
// Address: 0x116178 - 0x1162c0
void sub_00116178_0x116178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116178_0x116178");
#endif

    switch (ctx->pc) {
        case 0x1161e4u: goto label_1161e4;
        case 0x1161ecu: goto label_1161ec;
        case 0x116208u: goto label_116208;
        case 0x116210u: goto label_116210;
        case 0x116230u: goto label_116230;
        case 0x11623cu: goto label_11623c;
        case 0x11624cu: goto label_11624c;
        default: break;
    }

    ctx->pc = 0x116178u;

    // 0x116178: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x116178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11617c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x116180: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x116180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x116184: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x116184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x116188: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x116188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11618c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11618cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x116190: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x116190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116194: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x116194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x116198: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x116198u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11619c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x11619cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1161a0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1161a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1161a4: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1161a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1161a8: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1161a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1161ac: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1161acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1161b0: 0x16620035  bne         $s3, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1161B0u;
    {
        const bool branch_taken_0x1161b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1161B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161B0u;
        // 0x1161b4: 0xffbf0088  sd          $ra, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161b0) {
            ctx->pc = 0x116288u;
            goto label_116288;
        }
    }
    ctx->pc = 0x1161B8u;
    // 0x1161b8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1161b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1161bc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1161bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1161c0: 0x24420328  addiu       $v0, $v0, 0x328
    ctx->pc = 0x1161c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 808));
    // 0x1161c4: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x1161c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161c8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1161c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1161cc: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x1161ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1161d0: 0x24630338  addiu       $v1, $v1, 0x338
    ctx->pc = 0x1161d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 824));
    // 0x1161d4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1161d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161d8: 0x8ed0000c  lw          $s0, 0xC($s6)
    ctx->pc = 0x1161d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1161dc: 0xc072666  jal         func_1C9998
    ctx->pc = 0x1161DCu;
    SET_GPR_U32(ctx, 31, 0x1161E4u);
    ctx->pc = 0x1161E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161DCu;
    // 0x1161e0: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9998u, 0x1161DCu, 0x1161E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161E4u;
label_1161e4:
    // 0x1161e4: 0xc072812  jal         func_1CA048
    ctx->pc = 0x1161E4u;
    SET_GPR_U32(ctx, 31, 0x1161ECu);
    ctx->pc = 0x1161E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161E4u;
    // 0x1161e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA048u, 0x1161E4u, 0x1161ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161ECu;
label_1161ec:
    // 0x1161ec: 0x8e110224  lw          $s1, 0x224($s0)
    ctx->pc = 0x1161ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x1161f0: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1161F0u;
    {
        const bool branch_taken_0x1161f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161F0u;
        // 0x1161f4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161f0) {
            ctx->pc = 0x116264u;
            goto label_116264;
        }
    }
    ctx->pc = 0x1161F8u;
    // 0x1161f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1161f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1161fc: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1161fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116200: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x116200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116204: 0x0  nop
    ctx->pc = 0x116204u;
    // NOP
label_116208:
    // 0x116208: 0xc0ac932  jal         func_2B24C8
    ctx->pc = 0x116208u;
    SET_GPR_U32(ctx, 31, 0x116210u);
    ctx->pc = 0x11620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116208u;
    // 0x11620c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B24C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B24C8u, 0x116208u, 0x116210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116210u;
label_116210:
    // 0x116210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x116210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116214: 0x12150010  beq         $s0, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x116214u;
    {
        const bool branch_taken_0x116214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x116218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116214u;
        // 0x116218: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116214) {
            ctx->pc = 0x116258u;
            goto label_116258;
        }
    }
    ctx->pc = 0x11621Cu;
    // 0x11621c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11621cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x116220: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116224: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116228: 0xc072818  jal         func_1CA060
    ctx->pc = 0x116228u;
    SET_GPR_U32(ctx, 31, 0x116230u);
    ctx->pc = 0x11622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116228u;
    // 0x11622c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA060u, 0x116228u, 0x116230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116230u;
label_116230:
    // 0x116230: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116234: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x116234u;
    SET_GPR_U32(ctx, 31, 0x11623Cu);
    ctx->pc = 0x116238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116234u;
    // 0x116238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x116234u, 0x11623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11623Cu;
label_11623c:
    // 0x11623c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11623Cu;
    {
        const bool branch_taken_0x11623c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11623c) {
            ctx->pc = 0x11625Cu;
            goto label_11625c;
        }
    }
    ctx->pc = 0x116244u;
    // 0x116244: 0xc072890  jal         func_1CA240
    ctx->pc = 0x116244u;
    SET_GPR_U32(ctx, 31, 0x11624Cu);
    ctx->pc = 0x116248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116244u;
    // 0x116248: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA240u, 0x116244u, 0x11624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11624Cu;
label_11624c:
    // 0x11624c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11624Cu;
    {
        const bool branch_taken_0x11624c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11624c) {
            ctx->pc = 0x11625Cu;
            goto label_11625c;
        }
    }
    ctx->pc = 0x116254u;
    // 0x116254: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x116254u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_116258:
    // 0x116258: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x116258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11625c:
    // 0x11625c: 0x1640ffea  bnez        $s2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x11625Cu;
    {
        const bool branch_taken_0x11625c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x116260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11625Cu;
        // 0x116260: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11625c) {
            ctx->pc = 0x116208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116208;
        }
    }
    ctx->pc = 0x116264u;
label_116264:
    // 0x116264: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x116264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x116268: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x116268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11626c: 0x24620328  addiu       $v0, $v1, 0x328
    ctx->pc = 0x11626cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 808));
    // 0x116270: 0x27c30338  addiu       $v1, $fp, 0x338
    ctx->pc = 0x116270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 824));
    // 0x116274: 0xaee30018  sw          $v1, 0x18($s7)
    ctx->pc = 0x116274u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 3));
    // 0x116278: 0x16640003  bne         $s3, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116278u;
    {
        const bool branch_taken_0x116278 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x11627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116278u;
        // 0x11627c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116278) {
            ctx->pc = 0x116288u;
            goto label_116288;
        }
    }
    ctx->pc = 0x116280u;
    // 0x116280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116284: 0x54980a  movz        $s3, $v0, $s4
    ctx->pc = 0x116284u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_116288:
    // 0x116288: 0xaed30004  sw          $s3, 0x4($s6)
    ctx->pc = 0x116288u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 19));
    // 0x11628c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11628cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116290: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x116290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116294: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x116294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116298: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x116298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11629c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x11629cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1162a0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1162a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1162a4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1162a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1162a8: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1162a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1162ac: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1162acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1162b0: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1162b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1162b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1162B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1162B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162B4u;
        // 0x1162b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1162B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1162BCu;
    // 0x1162bc: 0x0  nop
    ctx->pc = 0x1162bcu;
    // NOP
    ctx->pc = 0x1162c0u;
}
