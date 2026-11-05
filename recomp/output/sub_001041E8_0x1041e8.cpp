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

// Function: sub_001041E8
// Address: 0x1041e8 - 0x104448
void sub_001041E8_0x1041e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001041E8_0x1041e8");
#endif

    switch (ctx->pc) {
        case 0x104228u: goto label_104228;
        case 0x104240u: goto label_104240;
        case 0x104250u: goto label_104250;
        case 0x10426cu: goto label_10426c;
        case 0x104278u: goto label_104278;
        case 0x104280u: goto label_104280;
        case 0x10428cu: goto label_10428c;
        case 0x1042a8u: goto label_1042a8;
        case 0x1042c8u: goto label_1042c8;
        case 0x1042d0u: goto label_1042d0;
        case 0x10431cu: goto label_10431c;
        case 0x10433cu: goto label_10433c;
        case 0x10436cu: goto label_10436c;
        case 0x10437cu: goto label_10437c;
        case 0x104390u: goto label_104390;
        case 0x104398u: goto label_104398;
        case 0x1043c8u: goto label_1043c8;
        case 0x1043d4u: goto label_1043d4;
        case 0x1043e4u: goto label_1043e4;
        case 0x104400u: goto label_104400;
        case 0x104414u: goto label_104414;
        default: break;
    }

    ctx->pc = 0x1041e8u;

    // 0x1041e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1041e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1041ec: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1041ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1041f0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1041f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1041f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1041f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041f8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1041f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1041fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1041fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104200: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x104200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x104204: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x104204u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x104208: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x104208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x10420c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10420cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x104210: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x104210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x104214: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x104214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x104218: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x104218u;
    {
        const bool branch_taken_0x104218 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104218u;
        // 0x10421c: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104218) {
            ctx->pc = 0x104230u;
            goto label_104230;
        }
    }
    ctx->pc = 0x104220u;
    // 0x104220: 0xc040ff6  jal         func_103FD8
    ctx->pc = 0x104220u;
    SET_GPR_U32(ctx, 31, 0x104228u);
    ctx->pc = 0x103FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FD8u, 0x104220u, 0x104228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104228u;
label_104228:
    // 0x104228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104228u;
    {
        const bool branch_taken_0x104228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104228u;
        // 0x10422c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104228) {
            ctx->pc = 0x104238u;
            goto label_104238;
        }
    }
    ctx->pc = 0x104230u;
label_104230:
    // 0x104230: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x104230u;
    {
        const bool branch_taken_0x104230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104230u;
        // 0x104234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104230) {
            ctx->pc = 0x104418u;
            goto label_104418;
        }
    }
    ctx->pc = 0x104238u;
label_104238:
    // 0x104238: 0xc0f6784  jal         func_3D9E10
    ctx->pc = 0x104238u;
    SET_GPR_U32(ctx, 31, 0x104240u);
    ctx->pc = 0x10423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104238u;
    // 0x10423c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9E10u, 0x104238u, 0x104240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104240u;
label_104240:
    // 0x104240: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x104240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104248: 0xc0f67a0  jal         func_3D9E80
    ctx->pc = 0x104248u;
    SET_GPR_U32(ctx, 31, 0x104250u);
    ctx->pc = 0x10424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104248u;
    // 0x10424c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9E80u, 0x104248u, 0x104250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104250u;
label_104250:
    // 0x104250: 0x9202003a  lbu         $v0, 0x3A($s0)
    ctx->pc = 0x104250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x104254: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x104254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104258: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x104258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10425c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10425cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104260: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x104260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x104264: 0xc0f696e  jal         func_3DA5B8
    ctx->pc = 0x104264u;
    SET_GPR_U32(ctx, 31, 0x10426Cu);
    ctx->pc = 0x104268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104264u;
    // 0x104268: 0xa202003a  sb          $v0, 0x3A($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA5B8u, 0x104264u, 0x10426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10426Cu;
label_10426c:
    // 0x10426c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x10426cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x104270: 0xc0f69e0  jal         func_3DA780
    ctx->pc = 0x104270u;
    SET_GPR_U32(ctx, 31, 0x104278u);
    ctx->pc = 0x104274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104270u;
    // 0x104274: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA780u, 0x104270u, 0x104278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104278u;
label_104278:
    // 0x104278: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x104278u;
    {
        const bool branch_taken_0x104278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104278) {
            ctx->pc = 0x104358u;
            goto label_104358;
        }
    }
    ctx->pc = 0x104280u;
label_104280:
    // 0x104280: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x104280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104284: 0xc0f6a02  jal         func_3DA808
    ctx->pc = 0x104284u;
    SET_GPR_U32(ctx, 31, 0x10428Cu);
    ctx->pc = 0x104288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104284u;
    // 0x104288: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA808u, 0x104284u, 0x10428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10428Cu;
label_10428c:
    // 0x10428c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x10428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104290: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x104290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104294: 0x0  nop
    ctx->pc = 0x104294u;
    // NOP
    // 0x104298: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x104298u;
    {
        const bool branch_taken_0x104298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104298u;
        // 0x10429c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104298) {
            ctx->pc = 0x104354u;
            goto label_104354;
        }
    }
    ctx->pc = 0x1042A0u;
    // 0x1042a0: 0xc0f6a32  jal         func_3DA8C8
    ctx->pc = 0x1042A0u;
    SET_GPR_U32(ctx, 31, 0x1042A8u);
    ctx->pc = 0x1042A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1042A0u;
    // 0x1042a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA8C8u, 0x1042A0u, 0x1042A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042A8u;
label_1042a8:
    // 0x1042a8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1042a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1042ac: 0x90530022  lbu         $s3, 0x22($v0)
    ctx->pc = 0x1042acu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x1042b0: 0x2b3182b  sltu        $v1, $s5, $s3
    ctx->pc = 0x1042b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1042b4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1042B4u;
    {
        const bool branch_taken_0x1042b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042B4u;
        // 0x1042b8: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042b4) {
            ctx->pc = 0x104358u;
            goto label_104358;
        }
    }
    ctx->pc = 0x1042BCu;
    // 0x1042bc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1042bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1042c0: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1042c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1042c4: 0x0  nop
    ctx->pc = 0x1042c4u;
    // NOP
label_1042c8:
    // 0x1042c8: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x1042C8u;
    SET_GPR_U32(ctx, 31, 0x1042D0u);
    ctx->pc = 0x1042CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1042C8u;
    // 0x1042cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1042C8u, 0x1042D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042D0u;
label_1042d0:
    // 0x1042d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1042d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042d4: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x1042d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042d8: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x1042d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1042dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1042dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1042e0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1042e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1042e4: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1042E4u;
    {
        const bool branch_taken_0x1042e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1042e4) {
            ctx->pc = 0x1042E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1042E4u;
            // 0x1042e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104340u;
            goto label_104340;
        }
    }
    ctx->pc = 0x1042ECu;
    // 0x1042ec: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1042ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1042f0: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x1042f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042f4: 0x9202003a  lbu         $v0, 0x3A($s0)
    ctx->pc = 0x1042f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x1042f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1042f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1042fc: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1042fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x104300: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x104300u;
    {
        const bool branch_taken_0x104300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x104300) {
            ctx->pc = 0x104304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104300u;
            // 0x104304: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104340u;
            goto label_104340;
        }
    }
    ctx->pc = 0x104308u;
    // 0x104308: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x104308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10430c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x104310: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x104310u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x104314: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x104314u;
    SET_GPR_U32(ctx, 31, 0x10431Cu);
    ctx->pc = 0x104318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104314u;
    // 0x104318: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x104314u, 0x10431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10431Cu;
label_10431c:
    // 0x10431c: 0x9203003a  lbu         $v1, 0x3A($s0)
    ctx->pc = 0x10431cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x104320: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x104320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104324: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x104324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x104328: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x104328u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10432c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x10432cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x104330: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x104330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104334: 0xc0f696e  jal         func_3DA5B8
    ctx->pc = 0x104334u;
    SET_GPR_U32(ctx, 31, 0x10433Cu);
    ctx->pc = 0x104338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104334u;
    // 0x104338: 0xa203003a  sb          $v1, 0x3A($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA5B8u, 0x104334u, 0x10433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10433Cu;
label_10433c:
    // 0x10433c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10433cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_104340:
    // 0x104340: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x104340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x104344: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x104344u;
    {
        const bool branch_taken_0x104344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104344u;
        // 0x104348: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104344) {
            ctx->pc = 0x1042C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1042c8;
        }
    }
    ctx->pc = 0x10434Cu;
    // 0x10434c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10434Cu;
    {
        const bool branch_taken_0x10434c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10434c) {
            ctx->pc = 0x104358u;
            goto label_104358;
        }
    }
    ctx->pc = 0x104354u;
label_104354:
    // 0x104354: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x104354u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104358:
    // 0x104358: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x104358u;
    {
        const bool branch_taken_0x104358 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x10435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104358u;
        // 0x10435c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104358) {
            ctx->pc = 0x104374u;
            goto label_104374;
        }
    }
    ctx->pc = 0x104360u;
    // 0x104360: 0x27b00024  addiu       $s0, $sp, 0x24
    ctx->pc = 0x104360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x104364: 0xc0f69f6  jal         func_3DA7D8
    ctx->pc = 0x104364u;
    SET_GPR_U32(ctx, 31, 0x10436Cu);
    ctx->pc = 0x104368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104364u;
    // 0x104368: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA7D8u, 0x104364u, 0x10436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10436Cu;
label_10436c:
    // 0x10436c: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x10436Cu;
    {
        const bool branch_taken_0x10436c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10436c) {
            ctx->pc = 0x104370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10436Cu;
            // 0x104370: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104280;
        }
    }
    ctx->pc = 0x104374u;
label_104374:
    // 0x104374: 0xc0f6986  jal         func_3DA618
    ctx->pc = 0x104374u;
    SET_GPR_U32(ctx, 31, 0x10437Cu);
    ctx->pc = 0x104378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104374u;
    // 0x104378: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA618u, 0x104374u, 0x10437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10437Cu;
label_10437c:
    // 0x10437c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10437cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104380: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x104380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104384: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x104384u;
    {
        const bool branch_taken_0x104384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104384u;
        // 0x104388: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104384) {
            ctx->pc = 0x1043A8u;
            goto label_1043a8;
        }
    }
    ctx->pc = 0x10438Cu;
    // 0x10438c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x10438cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_104390:
    // 0x104390: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x104390u;
    SET_GPR_U32(ctx, 31, 0x104398u);
    ctx->pc = 0x104394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104390u;
    // 0x104394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x104390u, 0x104398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104398u;
label_104398:
    // 0x104398: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x104398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10439c: 0x0  nop
    ctx->pc = 0x10439cu;
    // NOP
    // 0x1043a0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1043A0u;
    {
        const bool branch_taken_0x1043a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1043a0) {
            ctx->pc = 0x1043A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1043A0u;
            // 0x1043a4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104390;
        }
    }
    ctx->pc = 0x1043A8u;
label_1043a8:
    // 0x1043a8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1043a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1043ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1043acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043b0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1043b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1043b4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1043b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1043b8: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x1043B8u;
    {
        const bool branch_taken_0x1043b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043B8u;
        // 0x1043bc: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043b8) {
            ctx->pc = 0x1043F8u;
            goto label_1043f8;
        }
    }
    ctx->pc = 0x1043C0u;
    // 0x1043c0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1043c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1043c4: 0x0  nop
    ctx->pc = 0x1043c4u;
    // NOP
label_1043c8:
    // 0x1043c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1043c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043cc: 0xc0f69b4  jal         func_3DA6D0
    ctx->pc = 0x1043CCu;
    SET_GPR_U32(ctx, 31, 0x1043D4u);
    ctx->pc = 0x1043D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043CCu;
    // 0x1043d0: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA6D0u, 0x1043CCu, 0x1043D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043D4u;
label_1043d4:
    // 0x1043d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1043D4u;
    {
        const bool branch_taken_0x1043d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043D4u;
        // 0x1043d8: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043d4) {
            ctx->pc = 0x1043E4u;
            goto label_1043e4;
        }
    }
    ctx->pc = 0x1043DCu;
    // 0x1043dc: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x1043DCu;
    SET_GPR_U32(ctx, 31, 0x1043E4u);
    ctx->pc = 0x1043E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043DCu;
    // 0x1043e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x1043DCu, 0x1043E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043E4u;
label_1043e4:
    // 0x1043e4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1043e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1043e8: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1043e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1043ec: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x1043ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1043f0: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1043F0u;
    {
        const bool branch_taken_0x1043f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1043f0) {
            ctx->pc = 0x1043F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1043F0u;
            // 0x1043f4: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1043C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1043c8;
        }
    }
    ctx->pc = 0x1043F8u;
label_1043f8:
    // 0x1043f8: 0xc0f69d6  jal         func_3DA758
    ctx->pc = 0x1043F8u;
    SET_GPR_U32(ctx, 31, 0x104400u);
    ctx->pc = 0x1043FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043F8u;
    // 0x1043fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA758u, 0x1043F8u, 0x104400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104400u;
label_104400:
    // 0x104400: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x104400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104404: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x104404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104408: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x104408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10440c: 0xc0f6774  jal         func_3D9DD0
    ctx->pc = 0x10440Cu;
    SET_GPR_U32(ctx, 31, 0x104414u);
    ctx->pc = 0x104410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10440Cu;
    // 0x104410: 0x10802b  sltu        $s0, $zero, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9DD0u, 0x10440Cu, 0x104414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104414u;
label_104414:
    // 0x104414: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x104414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_104418:
    // 0x104418: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x104418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10441c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x10441cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x104420: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x104420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104424: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x104424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x104428: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x104428u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10442c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x10442cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x104430: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x104430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104434: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x104434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x104438: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x104438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10443c: 0x3e00008  jr          $ra
    ctx->pc = 0x10443Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10443Cu;
        // 0x104440: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10443Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104444u;
    // 0x104444: 0x0  nop
    ctx->pc = 0x104444u;
    // NOP
    ctx->pc = 0x104448u;
}
