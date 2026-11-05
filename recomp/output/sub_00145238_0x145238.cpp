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

// Function: sub_00145238
// Address: 0x145238 - 0x1452e8
void sub_00145238_0x145238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145238_0x145238");
#endif

    switch (ctx->pc) {
        case 0x145238u: goto label_145238;
        case 0x14523cu: goto label_14523c;
        case 0x145240u: goto label_145240;
        case 0x145244u: goto label_145244;
        case 0x145248u: goto label_145248;
        case 0x14524cu: goto label_14524c;
        case 0x145250u: goto label_145250;
        case 0x145254u: goto label_145254;
        case 0x145258u: goto label_145258;
        case 0x14525cu: goto label_14525c;
        case 0x145260u: goto label_145260;
        case 0x145264u: goto label_145264;
        case 0x145268u: goto label_145268;
        case 0x14526cu: goto label_14526c;
        case 0x145270u: goto label_145270;
        case 0x145274u: goto label_145274;
        case 0x145278u: goto label_145278;
        case 0x14527cu: goto label_14527c;
        case 0x145280u: goto label_145280;
        case 0x145284u: goto label_145284;
        case 0x145288u: goto label_145288;
        case 0x14528cu: goto label_14528c;
        case 0x145290u: goto label_145290;
        case 0x145294u: goto label_145294;
        case 0x145298u: goto label_145298;
        case 0x14529cu: goto label_14529c;
        case 0x1452a0u: goto label_1452a0;
        case 0x1452a4u: goto label_1452a4;
        case 0x1452a8u: goto label_1452a8;
        case 0x1452acu: goto label_1452ac;
        case 0x1452b0u: goto label_1452b0;
        case 0x1452b4u: goto label_1452b4;
        case 0x1452b8u: goto label_1452b8;
        case 0x1452bcu: goto label_1452bc;
        case 0x1452c0u: goto label_1452c0;
        case 0x1452c4u: goto label_1452c4;
        case 0x1452c8u: goto label_1452c8;
        case 0x1452ccu: goto label_1452cc;
        case 0x1452d0u: goto label_1452d0;
        case 0x1452d4u: goto label_1452d4;
        case 0x1452d8u: goto label_1452d8;
        case 0x1452dcu: goto label_1452dc;
        case 0x1452e0u: goto label_1452e0;
        case 0x1452e4u: goto label_1452e4;
        default: break;
    }

    ctx->pc = 0x145238u;

label_145238:
    // 0x145238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14523c:
    // 0x14523c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14523cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_145240:
    // 0x145240: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_145244:
    // 0x145244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_145248:
    // 0x145248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14524c:
    // 0x14524c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x14524cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_145250:
    // 0x145250: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_145254:
    if (ctx->pc == 0x145254u) {
        ctx->pc = 0x145254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145250u;
        // 0x145254: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145258u;
        goto label_145258;
    }
    ctx->pc = 0x145250u;
    {
        const bool branch_taken_0x145250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145250) {
            ctx->pc = 0x145254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145250u;
            // 0x145254: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1452D8u;
            goto label_1452d8;
        }
    }
    ctx->pc = 0x145258u;
label_145258:
    // 0x145258: 0xc04db02  jal         func_136C08
label_14525c:
    if (ctx->pc == 0x14525Cu) {
        ctx->pc = 0x14525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145258u;
        // 0x14525c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145260u;
        goto label_145260;
    }
    ctx->pc = 0x145258u;
    SET_GPR_U32(ctx, 31, 0x145260u);
    ctx->pc = 0x14525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145258u;
    // 0x14525c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x145258u, 0x145260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145260u;
label_145260:
    // 0x145260: 0x10000003  b           . + 4 + (0x3 << 2)
label_145264:
    if (ctx->pc == 0x145264u) {
        ctx->pc = 0x145264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145260u;
        // 0x145264: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145268u;
        goto label_145268;
    }
    ctx->pc = 0x145260u;
    {
        const bool branch_taken_0x145260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145260u;
        // 0x145264: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145260) {
            ctx->pc = 0x145270u;
            goto label_145270;
        }
    }
    ctx->pc = 0x145268u;
label_145268:
    // 0x145268: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x145268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14526c:
    // 0x14526c: 0xa202046c  sb          $v0, 0x46C($s0)
    ctx->pc = 0x14526cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
label_145270:
    // 0x145270: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x145270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_145274:
    // 0x145274: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x145274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_145278:
    // 0x145278: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_14527c:
    if (ctx->pc == 0x14527Cu) {
        ctx->pc = 0x14527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145278u;
        // 0x14527c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145280u;
        goto label_145280;
    }
    ctx->pc = 0x145278u;
    {
        const bool branch_taken_0x145278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145278) {
            ctx->pc = 0x14527Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145278u;
            // 0x14527c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1452C8u;
            goto label_1452c8;
        }
    }
    ctx->pc = 0x145280u;
label_145280:
    // 0x145280: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x145280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_145284:
    // 0x145284: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x145284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_145288:
    // 0x145288: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x145288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14528c:
    // 0x14528c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14528cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_145290:
    // 0x145290: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x145290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_145294:
    // 0x145294: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_145298:
    if (ctx->pc == 0x145298u) {
        ctx->pc = 0x145298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145294u;
        // 0x145298: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14529Cu;
        goto label_14529c;
    }
    ctx->pc = 0x145294u;
    {
        const bool branch_taken_0x145294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x145294) {
            ctx->pc = 0x145298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145294u;
            // 0x145298: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145268;
        }
    }
    ctx->pc = 0x14529Cu;
label_14529c:
    // 0x14529c: 0xc051524  jal         func_145490
label_1452a0:
    if (ctx->pc == 0x1452A0u) {
        ctx->pc = 0x1452A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14529Cu;
        // 0x1452a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452A4u;
        goto label_1452a4;
    }
    ctx->pc = 0x14529Cu;
    SET_GPR_U32(ctx, 31, 0x1452A4u);
    ctx->pc = 0x1452A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14529Cu;
    // 0x1452a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145490u, 0x14529Cu, 0x1452A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1452A4u;
label_1452a4:
    // 0x1452a4: 0x8e050520  lw          $a1, 0x520($s0)
    ctx->pc = 0x1452a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
label_1452a8:
    // 0x1452a8: 0xc04d80c  jal         func_136030
label_1452ac:
    if (ctx->pc == 0x1452ACu) {
        ctx->pc = 0x1452ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452A8u;
        // 0x1452ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452B0u;
        goto label_1452b0;
    }
    ctx->pc = 0x1452A8u;
    SET_GPR_U32(ctx, 31, 0x1452B0u);
    ctx->pc = 0x1452ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1452A8u;
    // 0x1452ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x1452A8u, 0x1452B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1452B0u;
label_1452b0:
    // 0x1452b0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1452b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1452b4:
    // 0x1452b4: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x1452b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1452b8:
    // 0x1452b8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1452b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1452bc:
    // 0x1452bc: 0x5623ffea  bnel        $s1, $v1, . + 4 + (-0x16 << 2)
label_1452c0:
    if (ctx->pc == 0x1452C0u) {
        ctx->pc = 0x1452C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452BCu;
        // 0x1452c0: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452C4u;
        goto label_1452c4;
    }
    ctx->pc = 0x1452BCu;
    {
        const bool branch_taken_0x1452bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1452bc) {
            ctx->pc = 0x1452C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1452BCu;
            // 0x1452c0: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145268;
        }
    }
    ctx->pc = 0x1452C4u;
label_1452c4:
    // 0x1452c4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1452c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1452c8:
    // 0x1452c8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1452c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1452cc:
    // 0x1452cc: 0x40f809  jalr        $v0
label_1452d0:
    if (ctx->pc == 0x1452D0u) {
        ctx->pc = 0x1452D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452CCu;
        // 0x1452d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452D4u;
        goto label_1452d4;
    }
    ctx->pc = 0x1452CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1452D4u);
        ctx->pc = 0x1452D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452CCu;
        // 0x1452d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1452CCu, 0x1452D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1452D4u;
label_1452d4:
    // 0x1452d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1452d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1452d8:
    // 0x1452d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1452d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1452dc:
    // 0x1452dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1452dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1452e0:
    // 0x1452e0: 0x3e00008  jr          $ra
label_1452e4:
    if (ctx->pc == 0x1452E4u) {
        ctx->pc = 0x1452E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452E0u;
        // 0x1452e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1452E8u;
        goto label_fallthrough_0x1452e0;
    }
    ctx->pc = 0x1452E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1452E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452E0u;
        // 0x1452e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1452E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1452e0:
    ctx->pc = 0x1452E8u;
}
