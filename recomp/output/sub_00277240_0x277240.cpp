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

// Function: sub_00277240
// Address: 0x277240 - 0x277318
void sub_00277240_0x277240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277240_0x277240");
#endif

    switch (ctx->pc) {
        case 0x277240u: goto label_277240;
        case 0x277244u: goto label_277244;
        case 0x277248u: goto label_277248;
        case 0x27724cu: goto label_27724c;
        case 0x277250u: goto label_277250;
        case 0x277254u: goto label_277254;
        case 0x277258u: goto label_277258;
        case 0x27725cu: goto label_27725c;
        case 0x277260u: goto label_277260;
        case 0x277264u: goto label_277264;
        case 0x277268u: goto label_277268;
        case 0x27726cu: goto label_27726c;
        case 0x277270u: goto label_277270;
        case 0x277274u: goto label_277274;
        case 0x277278u: goto label_277278;
        case 0x27727cu: goto label_27727c;
        case 0x277280u: goto label_277280;
        case 0x277284u: goto label_277284;
        case 0x277288u: goto label_277288;
        case 0x27728cu: goto label_27728c;
        case 0x277290u: goto label_277290;
        case 0x277294u: goto label_277294;
        case 0x277298u: goto label_277298;
        case 0x27729cu: goto label_27729c;
        case 0x2772a0u: goto label_2772a0;
        case 0x2772a4u: goto label_2772a4;
        case 0x2772a8u: goto label_2772a8;
        case 0x2772acu: goto label_2772ac;
        case 0x2772b0u: goto label_2772b0;
        case 0x2772b4u: goto label_2772b4;
        case 0x2772b8u: goto label_2772b8;
        case 0x2772bcu: goto label_2772bc;
        case 0x2772c0u: goto label_2772c0;
        case 0x2772c4u: goto label_2772c4;
        case 0x2772c8u: goto label_2772c8;
        case 0x2772ccu: goto label_2772cc;
        case 0x2772d0u: goto label_2772d0;
        case 0x2772d4u: goto label_2772d4;
        case 0x2772d8u: goto label_2772d8;
        case 0x2772dcu: goto label_2772dc;
        case 0x2772e0u: goto label_2772e0;
        case 0x2772e4u: goto label_2772e4;
        case 0x2772e8u: goto label_2772e8;
        case 0x2772ecu: goto label_2772ec;
        case 0x2772f0u: goto label_2772f0;
        case 0x2772f4u: goto label_2772f4;
        case 0x2772f8u: goto label_2772f8;
        case 0x2772fcu: goto label_2772fc;
        case 0x277300u: goto label_277300;
        case 0x277304u: goto label_277304;
        case 0x277308u: goto label_277308;
        case 0x27730cu: goto label_27730c;
        case 0x277310u: goto label_277310;
        case 0x277314u: goto label_277314;
        default: break;
    }

    ctx->pc = 0x277240u;

label_277240:
    // 0x277240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x277240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_277244:
    // 0x277244: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x277244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_277248:
    // 0x277248: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x277248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_27724c:
    // 0x27724c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27724cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_277250:
    // 0x277250: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x277250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_277254:
    // 0x277254: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x277254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_277258:
    // 0x277258: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x277258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_27725c:
    // 0x27725c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27725cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_277260:
    // 0x277260: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x277260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_277264:
    // 0x277264: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x277264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_277268:
    // 0x277268: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_27726c:
    if (ctx->pc == 0x27726Cu) {
        ctx->pc = 0x27726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277268u;
        // 0x27726c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277270u;
        goto label_277270;
    }
    ctx->pc = 0x277268u;
    {
        const bool branch_taken_0x277268 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277268u;
        // 0x27726c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277268) {
            ctx->pc = 0x277288u;
            goto label_277288;
        }
    }
    ctx->pc = 0x277270u;
label_277270:
    // 0x277270: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x277270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_277274:
    // 0x277274: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x277274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_277278:
    // 0x277278: 0x40f809  jalr        $v0
label_27727c:
    if (ctx->pc == 0x27727Cu) {
        ctx->pc = 0x277280u;
        goto label_277280;
    }
    ctx->pc = 0x277278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277280u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277278u, 0x277280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277280u;
label_277280:
    // 0x277280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_277284:
    if (ctx->pc == 0x277284u) {
        ctx->pc = 0x277284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277280u;
        // 0x277284: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277288u;
        goto label_277288;
    }
    ctx->pc = 0x277280u;
    {
        const bool branch_taken_0x277280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277280u;
        // 0x277284: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277280) {
            ctx->pc = 0x277290u;
            goto label_277290;
        }
    }
    ctx->pc = 0x277288u;
label_277288:
    // 0x277288: 0x10000019  b           . + 4 + (0x19 << 2)
label_27728c:
    if (ctx->pc == 0x27728Cu) {
        ctx->pc = 0x27728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277288u;
        // 0x27728c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277290u;
        goto label_277290;
    }
    ctx->pc = 0x277288u;
    {
        const bool branch_taken_0x277288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277288u;
        // 0x27728c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277288) {
            ctx->pc = 0x2772F0u;
            goto label_2772f0;
        }
    }
    ctx->pc = 0x277290u;
label_277290:
    // 0x277290: 0x2415000d  addiu       $s5, $zero, 0xD
    ctx->pc = 0x277290u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_277294:
    // 0x277294: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x277294u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_277298:
    // 0x277298: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x277298u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_27729c:
    // 0x27729c: 0x0  nop
    ctx->pc = 0x27729cu;
    // NOP
label_2772a0:
    // 0x2772a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2772a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2772a4:
    // 0x2772a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2772a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2772a8:
    // 0x2772a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2772a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2772ac:
    // 0x2772ac: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2772acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2772b0:
    // 0x2772b0: 0x40f809  jalr        $v0
label_2772b4:
    if (ctx->pc == 0x2772B4u) {
        ctx->pc = 0x2772B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772B0u;
        // 0x2772b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2772B8u;
        goto label_2772b8;
    }
    ctx->pc = 0x2772B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2772B8u);
        ctx->pc = 0x2772B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772B0u;
        // 0x2772b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2772B0u, 0x2772B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2772B8u;
label_2772b8:
    // 0x2772b8: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x2772b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_2772bc:
    // 0x2772bc: 0x10550006  beq         $v0, $s5, . + 4 + (0x6 << 2)
label_2772c0:
    if (ctx->pc == 0x2772C0u) {
        ctx->pc = 0x2772C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772BCu;
        // 0x2772c0: 0x93a30000  lbu         $v1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2772C4u;
        goto label_2772c4;
    }
    ctx->pc = 0x2772BCu;
    {
        const bool branch_taken_0x2772bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2772C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772BCu;
        // 0x2772c0: 0x93a30000  lbu         $v1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2772bc) {
            ctx->pc = 0x2772D8u;
            goto label_2772d8;
        }
    }
    ctx->pc = 0x2772C4u;
label_2772c4:
    // 0x2772c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2772c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2772c8:
    // 0x2772c8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2772c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2772cc:
    // 0x2772cc: 0x11102a  slt         $v0, $zero, $s1
    ctx->pc = 0x2772ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2772d0:
    // 0x2772d0: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x2772d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2772d4:
    // 0x2772d4: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x2772d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_2772d8:
    // 0x2772d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2772dc:
    if (ctx->pc == 0x2772DCu) {
        ctx->pc = 0x2772DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772D8u;
        // 0x2772dc: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2772E0u;
        goto label_2772e0;
    }
    ctx->pc = 0x2772D8u;
    {
        const bool branch_taken_0x2772d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2772d8) {
            ctx->pc = 0x2772DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2772D8u;
            // 0x2772dc: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2772ECu;
            goto label_2772ec;
        }
    }
    ctx->pc = 0x2772E0u;
label_2772e0:
    // 0x2772e0: 0x5454ffef  bnel        $v0, $s4, . + 4 + (-0x11 << 2)
label_2772e4:
    if (ctx->pc == 0x2772E4u) {
        ctx->pc = 0x2772E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772E0u;
        // 0x2772e4: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2772E8u;
        goto label_2772e8;
    }
    ctx->pc = 0x2772E0u;
    {
        const bool branch_taken_0x2772e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2772e0) {
            ctx->pc = 0x2772E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2772E0u;
            // 0x2772e4: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2772A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2772a0;
        }
    }
    ctx->pc = 0x2772E8u;
label_2772e8:
    // 0x2772e8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2772e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2772ec:
    // 0x2772ec: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2772ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2772f0:
    // 0x2772f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2772f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2772f4:
    // 0x2772f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2772f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2772f8:
    // 0x2772f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2772f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2772fc:
    // 0x2772fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2772fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_277300:
    // 0x277300: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x277300u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_277304:
    // 0x277304: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x277304u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_277308:
    // 0x277308: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x277308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27730c:
    // 0x27730c: 0x3e00008  jr          $ra
label_277310:
    if (ctx->pc == 0x277310u) {
        ctx->pc = 0x277310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27730Cu;
        // 0x277310: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277314u;
        goto label_277314;
    }
    ctx->pc = 0x27730Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27730Cu;
        // 0x277310: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27730Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277314u;
label_277314:
    // 0x277314: 0x0  nop
    ctx->pc = 0x277314u;
    // NOP
    ctx->pc = 0x277318u;
}
