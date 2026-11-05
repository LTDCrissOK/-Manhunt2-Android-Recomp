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

// Function: sub_001B45F8
// Address: 0x1b45f8 - 0x1b4ab8
void sub_001B45F8_0x1b45f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B45F8_0x1b45f8");
#endif

    switch (ctx->pc) {
        case 0x1b4640u: goto label_1b4640;
        case 0x1b464cu: goto label_1b464c;
        case 0x1b4758u: goto label_1b4758;
        case 0x1b4804u: goto label_1b4804;
        case 0x1b4988u: goto label_1b4988;
        case 0x1b4a60u: goto label_1b4a60;
        case 0x1b4a70u: goto label_1b4a70;
        case 0x1b4a80u: goto label_1b4a80;
        default: break;
    }

    ctx->pc = 0x1b45f8u;

    // 0x1b45f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b45f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b45fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b45fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b4600: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b4600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b4604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b4604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4608: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1b4608u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b460c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b460cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4610: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b4610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b4614: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b4614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b4618: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b4618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b461c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b461cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b4620: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b4620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b4624: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x1b4624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b4628: 0x8c621004  lw          $v0, 0x1004($v1)
    ctx->pc = 0x1b4628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    // 0x1b462c: 0x8c740338  lw          $s4, 0x338($v1)
    ctx->pc = 0x1b462cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 824)));
    // 0x1b4630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b4630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4634: 0x8c500338  lw          $s0, 0x338($v0)
    ctx->pc = 0x1b4634u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
    // 0x1b4638: 0xc08951c  jal         func_225470
    ctx->pc = 0x1B4638u;
    SET_GPR_U32(ctx, 31, 0x1B4640u);
    ctx->pc = 0x1B463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4638u;
    // 0x1b463c: 0x8c550334  lw          $s5, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1B4638u, 0x1B4640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4640u;
label_1b4640:
    // 0x1b4640: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x1b4640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b4644: 0xc08951c  jal         func_225470
    ctx->pc = 0x1B4644u;
    SET_GPR_U32(ctx, 31, 0x1B464Cu);
    ctx->pc = 0x1B4648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4644u;
    // 0x1b4648: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1B4644u, 0x1B464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B464Cu;
label_1b464c:
    // 0x1b464c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b464cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4650: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1b4650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b4654: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x1b4654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1b4658: 0x8c640338  lw          $a0, 0x338($v1)
    ctx->pc = 0x1b4658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 824)));
    // 0x1b465c: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x1b465cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1b4660: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B4660u;
    {
        const bool branch_taken_0x1b4660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4660) {
            ctx->pc = 0x1B4664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4660u;
            // 0x1b4664: 0xc454001c  lwc1        $f20, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4668u;
            goto label_1b4668;
        }
    }
    ctx->pc = 0x1B4668u;
label_1b4668:
    // 0x1b4668: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1b4668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1b466c: 0x8c62f104  lw          $v0, -0xEFC($v1)
    ctx->pc = 0x1b466cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48F104u));
    // 0x1b4670: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4670u;
    {
        const bool branch_taken_0x1b4670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4670u;
        // 0x1b4674: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4670) {
            ctx->pc = 0x1B4688u;
            goto label_1b4688;
        }
    }
    ctx->pc = 0x1B4678u;
    // 0x1b4678: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x1b4678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b467c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1b467cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1b4680: 0xac73f104  sw          $s3, -0xEFC($v1)
    ctx->pc = 0x1b4680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963460), GPR_U32(ctx, 19));
    // 0x1b4684: 0xe440f100  swc1        $f0, -0xF00($v0)
    ctx->pc = 0x1b4684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48F100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F100u, _value); } while (0); }
label_1b4688:
    // 0x1b4688: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1b4688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1b468c: 0x8c62f10c  lw          $v0, -0xEF4($v1)
    ctx->pc = 0x1b468cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48F10Cu));
    // 0x1b4690: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4690u;
    {
        const bool branch_taken_0x1b4690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4690) {
            ctx->pc = 0x1B4694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4690u;
            // 0x1b4694: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B46ACu;
            goto label_1b46ac;
        }
    }
    ctx->pc = 0x1B4698u;
    // 0x1b4698: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x1b4698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b469c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1b469cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1b46a0: 0xac73f10c  sw          $s3, -0xEF4($v1)
    ctx->pc = 0x1b46a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963468), GPR_U32(ctx, 19));
    // 0x1b46a4: 0xe440f108  swc1        $f0, -0xEF8($v0)
    ctx->pc = 0x1b46a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48F108u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F108u, _value); } while (0); }
    // 0x1b46a8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1b46a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_1b46ac:
    // 0x1b46ac: 0x8c62f114  lw          $v0, -0xEEC($v1)
    ctx->pc = 0x1b46acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963476)));
    // 0x1b46b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B46B0u;
    {
        const bool branch_taken_0x1b46b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b46b0) {
            ctx->pc = 0x1B46B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B46B0u;
            // 0x1b46b4: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B46CCu;
            goto label_1b46cc;
        }
    }
    ctx->pc = 0x1B46B8u;
    // 0x1b46b8: 0xc4a00060  lwc1        $f0, 0x60($a1)
    ctx->pc = 0x1b46b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b46bc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1b46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1b46c0: 0xac73f114  sw          $s3, -0xEEC($v1)
    ctx->pc = 0x1b46c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963476), GPR_U32(ctx, 19));
    // 0x1b46c4: 0xe440f110  swc1        $f0, -0xEF0($v0)
    ctx->pc = 0x1b46c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48F110u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F110u, _value); } while (0); }
    // 0x1b46c8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1b46c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_1b46cc:
    // 0x1b46cc: 0x8c62f11c  lw          $v0, -0xEE4($v1)
    ctx->pc = 0x1b46ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963484)));
    // 0x1b46d0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B46D0u;
    {
        const bool branch_taken_0x1b46d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b46d0) {
            ctx->pc = 0x1B46D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B46D0u;
            // 0x1b46d4: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B46ECu;
            goto label_1b46ec;
        }
    }
    ctx->pc = 0x1B46D8u;
    // 0x1b46d8: 0xc4a000b0  lwc1        $f0, 0xB0($a1)
    ctx->pc = 0x1b46d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b46dc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1b46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1b46e0: 0xac73f11c  sw          $s3, -0xEE4($v1)
    ctx->pc = 0x1b46e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963484), GPR_U32(ctx, 19));
    // 0x1b46e4: 0xe440f118  swc1        $f0, -0xEE8($v0)
    ctx->pc = 0x1b46e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48F118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F118u, _value); } while (0); }
    // 0x1b46e8: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1b46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1b46ec:
    // 0x1b46ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b46ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b46f0: 0x2442ffeb  addiu       $v0, $v0, -0x15
    ctx->pc = 0x1b46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
    // 0x1b46f4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b46f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b46f8: 0x144000e4  bnez        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x1B46F8u;
    {
        const bool branch_taken_0x1b46f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B46FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46F8u;
        // 0x1b46fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46f8) {
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B4700u;
    // 0x1b4700: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b4700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b4704: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4704u;
    {
        const bool branch_taken_0x1b4704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4704u;
        // 0x1b4708: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4704) {
            ctx->pc = 0x1B471Cu;
            goto label_1b471c;
        }
    }
    ctx->pc = 0x1B470Cu;
    // 0x1b470c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1b470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1b4710: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1b4710u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4714: 0x28420174  slti        $v0, $v0, 0x174
    ctx->pc = 0x1b4714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)372) ? 1 : 0);
    // 0x1b4718: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1b4718u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1b471c:
    // 0x1b471c: 0x146000db  bnez        $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x1B471Cu;
    {
        const bool branch_taken_0x1b471c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B471Cu;
        // 0x1b4720: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b471c) {
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B4724u;
    // 0x1b4724: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1b4724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1b4728: 0x2442ffeb  addiu       $v0, $v0, -0x15
    ctx->pc = 0x1b4728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
    // 0x1b472c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b472cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b4730: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4730u;
    {
        const bool branch_taken_0x1b4730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4730u;
        // 0x1b4734: 0x3882000a  xori        $v0, $a0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4730) {
            ctx->pc = 0x1B4748u;
            goto label_1b4748;
        }
    }
    ctx->pc = 0x1B4738u;
    // 0x1b4738: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4738u;
    {
        const bool branch_taken_0x1b4738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4738) {
            ctx->pc = 0x1B4748u;
            goto label_1b4748;
        }
    }
    ctx->pc = 0x1B4740u;
    // 0x1b4740: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x1B4740u;
    {
        const bool branch_taken_0x1b4740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4740u;
        // 0x1b4744: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4740) {
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B4748u;
label_1b4748:
    // 0x1b4748: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4748u;
    {
        const bool branch_taken_0x1b4748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4748u;
        // 0x1b474c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4748) {
            ctx->pc = 0x1B4768u;
            goto label_1b4768;
        }
    }
    ctx->pc = 0x1B4750u;
    // 0x1b4750: 0xc06d156  jal         func_1B4558
    ctx->pc = 0x1B4750u;
    SET_GPR_U32(ctx, 31, 0x1B4758u);
    ctx->pc = 0x1B4754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4750u;
    // 0x1b4754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4558u, 0x1B4750u, 0x1B4758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4758u;
label_1b4758:
    // 0x1b4758: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x1B4758u;
    {
        const bool branch_taken_0x1b4758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4758u;
        // 0x1b475c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4758) {
            ctx->pc = 0x1B4A50u;
            goto label_1b4a50;
        }
    }
    ctx->pc = 0x1B4760u;
    // 0x1b4760: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x1B4760u;
    {
        const bool branch_taken_0x1b4760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4760u;
        // 0x1b4764: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4760) {
            ctx->pc = 0x1B4A90u;
            goto label_1b4a90;
        }
    }
    ctx->pc = 0x1B4768u;
label_1b4768:
    // 0x1b4768: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b4768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b476c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B476Cu;
    {
        const bool branch_taken_0x1b476c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B476Cu;
        // 0x1b4770: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b476c) {
            ctx->pc = 0x1B477Cu;
            goto label_1b477c;
        }
    }
    ctx->pc = 0x1B4774u;
    // 0x1b4774: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b4774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b4778: 0x2843006f  slti        $v1, $v0, 0x6F
    ctx->pc = 0x1b4778u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_1b477c:
    // 0x1b477c: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1B477Cu;
    {
        const bool branch_taken_0x1b477c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b477c) {
            ctx->pc = 0x1B4780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B477Cu;
            // 0x1b4780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B47BCu;
            goto label_1b47bc;
        }
    }
    ctx->pc = 0x1B4784u;
    // 0x1b4784: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1b4784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b4788: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4788u;
    {
        const bool branch_taken_0x1b4788 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4788u;
        // 0x1b478c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4788) {
            ctx->pc = 0x1B4798u;
            goto label_1b4798;
        }
    }
    ctx->pc = 0x1B4790u;
    // 0x1b4790: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1b4790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b4794: 0x28430083  slti        $v1, $v0, 0x83
    ctx->pc = 0x1b4794u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_1b4798:
    // 0x1b4798: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4798u;
    {
        const bool branch_taken_0x1b4798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4798) {
            ctx->pc = 0x1B479Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4798u;
            // 0x1b479c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B47BCu;
            goto label_1b47bc;
        }
    }
    ctx->pc = 0x1B47A0u;
    // 0x1b47a0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b47a4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B47A4u;
    {
        const bool branch_taken_0x1b47a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47A4u;
        // 0x1b47a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47a4) {
            ctx->pc = 0x1B47B4u;
            goto label_1b47b4;
        }
    }
    ctx->pc = 0x1B47ACu;
    // 0x1b47ac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1b47acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b47b0: 0x28430097  slti        $v1, $v0, 0x97
    ctx->pc = 0x1b47b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_1b47b4:
    // 0x1b47b4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B47B4u;
    {
        const bool branch_taken_0x1b47b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b47b4) {
            ctx->pc = 0x1B47B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B47B4u;
            // 0x1b47b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B47BCu;
            goto label_1b47bc;
        }
    }
    ctx->pc = 0x1B47BCu;
label_1b47bc:
    // 0x1b47bc: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B47BCu;
    {
        const bool branch_taken_0x1b47bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47BCu;
        // 0x1b47c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47bc) {
            ctx->pc = 0x1B47FCu;
            goto label_1b47fc;
        }
    }
    ctx->pc = 0x1B47C4u;
    // 0x1b47c4: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x1b47c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x1b47c8: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B47C8u;
    {
        const bool branch_taken_0x1b47c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47C8u;
        // 0x1b47cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47c8) {
            ctx->pc = 0x1B47E4u;
            goto label_1b47e4;
        }
    }
    ctx->pc = 0x1B47D0u;
    // 0x1b47d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b47d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b47d4: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B47D4u;
    {
        const bool branch_taken_0x1b47d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B47D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47D4u;
        // 0x1b47d8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47d4) {
            ctx->pc = 0x1B47E4u;
            goto label_1b47e4;
        }
    }
    ctx->pc = 0x1B47DCu;
    // 0x1b47dc: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B47DCu;
    {
        const bool branch_taken_0x1b47dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b47dc) {
            ctx->pc = 0x1B47E8u;
            goto label_1b47e8;
        }
    }
    ctx->pc = 0x1B47E4u;
label_1b47e4:
    // 0x1b47e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b47e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b47e8:
    // 0x1b47e8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B47E8u;
    {
        const bool branch_taken_0x1b47e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47E8u;
        // 0x1b47ec: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47e8) {
            ctx->pc = 0x1B47FCu;
            goto label_1b47fc;
        }
    }
    ctx->pc = 0x1B47F0u;
    // 0x1b47f0: 0x8ea30150  lw          $v1, 0x150($s5)
    ctx->pc = 0x1b47f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
    // 0x1b47f4: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1B47F4u;
    {
        const bool branch_taken_0x1b47f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47F4u;
        // 0x1b47f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47f4) {
            ctx->pc = 0x1B48F0u;
            goto label_1b48f0;
        }
    }
    ctx->pc = 0x1B47FCu;
label_1b47fc:
    // 0x1b47fc: 0xc06d16a  jal         func_1B45A8
    ctx->pc = 0x1B47FCu;
    SET_GPR_U32(ctx, 31, 0x1B4804u);
    ctx->pc = 0x1B4800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B47FCu;
    // 0x1b4800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B45A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B45A8u, 0x1B47FCu, 0x1B4804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4804u;
label_1b4804:
    // 0x1b4804: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x1B4804u;
    {
        const bool branch_taken_0x1b4804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4804u;
        // 0x1b4808: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4804) {
            ctx->pc = 0x1B4A50u;
            goto label_1b4a50;
        }
    }
    ctx->pc = 0x1B480Cu;
    // 0x1b480c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1b480cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1b4810: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1b4810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1b4814: 0xc442f100  lwc1        $f2, -0xF00($v0)
    ctx->pc = 0x1b4814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4818: 0xc4608988  lwc1        $f0, -0x7678($v1)
    ctx->pc = 0x1b4818u;
    { uint32_t bits = FAST_READ32(0x3F8988u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b481c: 0xc481898c  lwc1        $f1, -0x7674($a0)
    ctx->pc = 0x1b481cu;
    { uint32_t bits = FAST_READ32(0x3F898Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4820: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x1b4820u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x1b4824: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b4824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b4828: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b4828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b482c: 0x0  nop
    ctx->pc = 0x1b482cu;
    // NOP
    // 0x1b4830: 0x45010096  bc1t        . + 4 + (0x96 << 2)
    ctx->pc = 0x1B4830u;
    {
        const bool branch_taken_0x1b4830 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4830u;
        // 0x1b4834: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4830) {
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B4838u;
    // 0x1b4838: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1b4838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1b483c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b4840: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4840u;
    {
        const bool branch_taken_0x1b4840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4840u;
        // 0x1b4844: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4840) {
            ctx->pc = 0x1B4850u;
            goto label_1b4850;
        }
    }
    ctx->pc = 0x1B4848u;
    // 0x1b4848: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1b4848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b484c: 0x28440097  slti        $a0, $v0, 0x97
    ctx->pc = 0x1b484cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_1b4850:
    // 0x1b4850: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B4850u;
    {
        const bool branch_taken_0x1b4850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4850u;
        // 0x1b4854: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4850) {
            ctx->pc = 0x1B48A4u;
            goto label_1b48a4;
        }
    }
    ctx->pc = 0x1B4858u;
    // 0x1b4858: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x1b4858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1b485c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B485Cu;
    {
        const bool branch_taken_0x1b485c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B485Cu;
        // 0x1b4860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b485c) {
            ctx->pc = 0x1B4870u;
            goto label_1b4870;
        }
    }
    ctx->pc = 0x1B4864u;
    // 0x1b4864: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x1b4864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1b4868: 0x28420174  slti        $v0, $v0, 0x174
    ctx->pc = 0x1b4868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)372) ? 1 : 0);
    // 0x1b486c: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x1b486cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b4870:
    // 0x1b4870: 0x14800086  bnez        $a0, . + 4 + (0x86 << 2)
    ctx->pc = 0x1B4870u;
    {
        const bool branch_taken_0x1b4870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4870u;
        // 0x1b4874: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4870) {
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B4878u;
    // 0x1b4878: 0x38620014  xori        $v0, $v1, 0x14
    ctx->pc = 0x1b4878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)20);
    // 0x1b487c: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x1B487Cu;
    {
        const bool branch_taken_0x1b487c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B487Cu;
        // 0x1b4880: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b487c) {
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B4884u;
    // 0x1b4884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4888: 0x0  nop
    ctx->pc = 0x1b4888u;
    // NOP
    // 0x1b488c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b488cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4890: 0x0  nop
    ctx->pc = 0x1b4890u;
    // NOP
    // 0x1b4894: 0x4500006e  bc1f        . + 4 + (0x6E << 2)
    ctx->pc = 0x1B4894u;
    {
        const bool branch_taken_0x1b4894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4894u;
        // 0x1b4898: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4894) {
            ctx->pc = 0x1B4A50u;
            goto label_1b4a50;
        }
    }
    ctx->pc = 0x1B489Cu;
    // 0x1b489c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1B489Cu;
    {
        const bool branch_taken_0x1b489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B48A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B489Cu;
        // 0x1b48a0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b489c) {
            ctx->pc = 0x1B4A50u;
            goto label_1b4a50;
        }
    }
    ctx->pc = 0x1B48A4u;
label_1b48a4:
    // 0x1b48a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b48a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b48a8: 0x0  nop
    ctx->pc = 0x1b48a8u;
    // NOP
    // 0x1b48ac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b48acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b48b0: 0x0  nop
    ctx->pc = 0x1b48b0u;
    // NOP
    // 0x1b48b4: 0x45000066  bc1f        . + 4 + (0x66 << 2)
    ctx->pc = 0x1B48B4u;
    {
        const bool branch_taken_0x1b48b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b48b4) {
            ctx->pc = 0x1B4A50u;
            goto label_1b4a50;
        }
    }
    ctx->pc = 0x1B48BCu;
    // 0x1b48bc: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x1b48bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1b48c0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B48C0u;
    {
        const bool branch_taken_0x1b48c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B48C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48C0u;
        // 0x1b48c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48c0) {
            ctx->pc = 0x1B48D4u;
            goto label_1b48d4;
        }
    }
    ctx->pc = 0x1B48C8u;
    // 0x1b48c8: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x1b48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1b48cc: 0x28420174  slti        $v0, $v0, 0x174
    ctx->pc = 0x1b48ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)372) ? 1 : 0);
    // 0x1b48d0: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x1b48d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b48d4:
    // 0x1b48d4: 0x1480005e  bnez        $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1B48D4u;
    {
        const bool branch_taken_0x1b48d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B48D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48D4u;
        // 0x1b48d8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48d4) {
            ctx->pc = 0x1B4A50u;
            goto label_1b4a50;
        }
    }
    ctx->pc = 0x1B48DCu;
    // 0x1b48dc: 0x38620014  xori        $v0, $v1, 0x14
    ctx->pc = 0x1b48dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)20);
    // 0x1b48e0: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1B48E0u;
    {
        const bool branch_taken_0x1b48e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48E0u;
        // 0x1b48e4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48e0) {
            ctx->pc = 0x1B4A50u;
            goto label_1b4a50;
        }
    }
    ctx->pc = 0x1B48E8u;
    // 0x1b48e8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1B48E8u;
    {
        const bool branch_taken_0x1b48e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48E8u;
        // 0x1b48ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48e8) {
            ctx->pc = 0x1B4A50u;
            goto label_1b4a50;
        }
    }
    ctx->pc = 0x1B48F0u;
label_1b48f0:
    // 0x1b48f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b48f4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B48F4u;
    {
        const bool branch_taken_0x1b48f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48F4u;
        // 0x1b48f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48f4) {
            ctx->pc = 0x1B4908u;
            goto label_1b4908;
        }
    }
    ctx->pc = 0x1B48FCu;
    // 0x1b48fc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b4900: 0x2842006f  slti        $v0, $v0, 0x6F
    ctx->pc = 0x1b4900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
    // 0x1b4904: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1b4904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b4908:
    // 0x1b4908: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B4908u;
    {
        const bool branch_taken_0x1b4908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4908) {
            ctx->pc = 0x1B490Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4908u;
            // 0x1b490c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4950u;
            goto label_1b4950;
        }
    }
    ctx->pc = 0x1B4910u;
    // 0x1b4910: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1b4910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b4914: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4914u;
    {
        const bool branch_taken_0x1b4914 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4914u;
        // 0x1b4918: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4914) {
            ctx->pc = 0x1B4928u;
            goto label_1b4928;
        }
    }
    ctx->pc = 0x1B491Cu;
    // 0x1b491c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1b491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b4920: 0x28420083  slti        $v0, $v0, 0x83
    ctx->pc = 0x1b4920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
    // 0x1b4924: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1b4924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b4928:
    // 0x1b4928: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4928u;
    {
        const bool branch_taken_0x1b4928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4928) {
            ctx->pc = 0x1B492Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4928u;
            // 0x1b492c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4950u;
            goto label_1b4950;
        }
    }
    ctx->pc = 0x1B4930u;
    // 0x1b4930: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b4930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b4934: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4934u;
    {
        const bool branch_taken_0x1b4934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4934u;
        // 0x1b4938: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4934) {
            ctx->pc = 0x1B4948u;
            goto label_1b4948;
        }
    }
    ctx->pc = 0x1B493Cu;
    // 0x1b493c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1b493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b4940: 0x28420097  slti        $v0, $v0, 0x97
    ctx->pc = 0x1b4940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x1b4944: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1b4944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b4948:
    // 0x1b4948: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B4948u;
    {
        const bool branch_taken_0x1b4948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4948) {
            ctx->pc = 0x1B494Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4948u;
            // 0x1b494c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4950u;
            goto label_1b4950;
        }
    }
    ctx->pc = 0x1B4950u;
label_1b4950:
    // 0x1b4950: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1B4950u;
    {
        const bool branch_taken_0x1b4950 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4950u;
        // 0x1b4954: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4950) {
            ctx->pc = 0x1B4980u;
            goto label_1b4980;
        }
    }
    ctx->pc = 0x1B4958u;
    // 0x1b4958: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4958u;
    {
        const bool branch_taken_0x1b4958 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4958u;
        // 0x1b495c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4958) {
            ctx->pc = 0x1B4974u;
            goto label_1b4974;
        }
    }
    ctx->pc = 0x1B4960u;
    // 0x1b4960: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b4960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4964: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4964u;
    {
        const bool branch_taken_0x1b4964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4964u;
        // 0x1b4968: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4964) {
            ctx->pc = 0x1B4974u;
            goto label_1b4974;
        }
    }
    ctx->pc = 0x1B496Cu;
    // 0x1b496c: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B496Cu;
    {
        const bool branch_taken_0x1b496c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b496c) {
            ctx->pc = 0x1B4978u;
            goto label_1b4978;
        }
    }
    ctx->pc = 0x1B4974u;
label_1b4974:
    // 0x1b4974: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b4974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4978:
    // 0x1b4978: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B4978u;
    {
        const bool branch_taken_0x1b4978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4978) {
            ctx->pc = 0x1B4A50u;
            goto label_1b4a50;
        }
    }
    ctx->pc = 0x1B4980u;
label_1b4980:
    // 0x1b4980: 0xc06d172  jal         func_1B45C8
    ctx->pc = 0x1B4980u;
    SET_GPR_U32(ctx, 31, 0x1B4988u);
    ctx->pc = 0x1B4984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4980u;
    // 0x1b4984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B45C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B45C8u, 0x1B4980u, 0x1B4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4988u;
label_1b4988:
    // 0x1b4988: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1B4988u;
    {
        const bool branch_taken_0x1b4988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4988u;
        // 0x1b498c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4988) {
            ctx->pc = 0x1B4A50u;
            goto label_1b4a50;
        }
    }
    ctx->pc = 0x1B4990u;
    // 0x1b4990: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1b4990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1b4994: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1b4994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1b4998: 0xc461f108  lwc1        $f1, -0xEF8($v1)
    ctx->pc = 0x1b4998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b499c: 0xc443898c  lwc1        $f3, -0x7674($v0)
    ctx->pc = 0x1b499cu;
    { uint32_t bits = FAST_READ32(0x3F898Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b49a0: 0xc480f118  lwc1        $f0, -0xEE8($a0)
    ctx->pc = 0x1b49a0u;
    { uint32_t bits = FAST_READ32(0x48F118u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b49a4: 0x46140881  sub.s       $f2, $f1, $f20
    ctx->pc = 0x1b49a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1b49a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1b49a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1b49ac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b49acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b49b0: 0x0  nop
    ctx->pc = 0x1b49b0u;
    // NOP
    // 0x1b49b4: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x1B49B4u;
    {
        const bool branch_taken_0x1b49b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49B4u;
        // 0x1b49b8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b49b4) {
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B49BCu;
    // 0x1b49bc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1b49bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1b49c0: 0xc440f110  lwc1        $f0, -0xEF0($v0)
    ctx->pc = 0x1b49c0u;
    { uint32_t bits = FAST_READ32(0x48F110u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b49c4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1b49c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1b49c8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b49c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b49cc: 0x0  nop
    ctx->pc = 0x1b49ccu;
    // NOP
    // 0x1b49d0: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x1B49D0u;
    {
        const bool branch_taken_0x1b49d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B49D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49D0u;
        // 0x1b49d4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b49d0) {
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B49D8u;
    // 0x1b49d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1b49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1b49dc: 0xc4408988  lwc1        $f0, -0x7678($v0)
    ctx->pc = 0x1b49dcu;
    { uint32_t bits = FAST_READ32(0x3F8988u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b49e0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1b49e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1b49e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b49e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b49e8: 0x0  nop
    ctx->pc = 0x1b49e8u;
    // NOP
    // 0x1b49ec: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x1B49ECu;
    {
        const bool branch_taken_0x1b49ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49ECu;
        // 0x1b49f0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b49ec) {
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B49F4u;
    // 0x1b49f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b49f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b49f8: 0x0  nop
    ctx->pc = 0x1b49f8u;
    // NOP
    // 0x1b49fc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b49fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4a00: 0x0  nop
    ctx->pc = 0x1b4a00u;
    // NOP
    // 0x1b4a04: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1B4A04u;
    {
        const bool branch_taken_0x1b4a04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A04u;
        // 0x1b4a08: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a04) {
            ctx->pc = 0x1B4A50u;
            goto label_1b4a50;
        }
    }
    ctx->pc = 0x1B4A0Cu;
    // 0x1b4a0c: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x1b4a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1b4a10: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4A10u;
    {
        const bool branch_taken_0x1b4a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A10u;
        // 0x1b4a14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a10) {
            ctx->pc = 0x1B4A24u;
            goto label_1b4a24;
        }
    }
    ctx->pc = 0x1B4A18u;
    // 0x1b4a18: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x1b4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1b4a1c: 0x28420174  slti        $v0, $v0, 0x174
    ctx->pc = 0x1b4a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)372) ? 1 : 0);
    // 0x1b4a20: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x1b4a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b4a24:
    // 0x1b4a24: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B4A24u;
    {
        const bool branch_taken_0x1b4a24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A24u;
        // 0x1b4a28: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a24) {
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B4A2Cu;
    // 0x1b4a2c: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x1b4a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b4a30: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1b4a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1b4a34: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x1b4a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x1b4a38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4a3c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1b4a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1b4a40: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4A40u;
    {
        const bool branch_taken_0x1b4a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A40u;
        // 0x1b4a44: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a40) {
            ctx->pc = 0x1B4A50u;
            goto label_1b4a50;
        }
    }
    ctx->pc = 0x1B4A48u;
    // 0x1b4a48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B4A48u;
    {
        const bool branch_taken_0x1b4a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A48u;
        // 0x1b4a4c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a48) {
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B4A50u;
label_1b4a50:
    // 0x1b4a50: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x1B4A50u;
    {
        const bool branch_taken_0x1b4a50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A50u;
        // 0x1b4a54: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a50) {
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B4A58u;
    // 0x1b4a58: 0xc06d156  jal         func_1B4558
    ctx->pc = 0x1B4A58u;
    SET_GPR_U32(ctx, 31, 0x1B4A60u);
    ctx->pc = 0x1B4A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A58u;
    // 0x1b4a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4558u, 0x1B4A58u, 0x1B4A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A60u;
label_1b4a60:
    // 0x1b4a60: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4A60u;
    {
        const bool branch_taken_0x1b4a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A60u;
        // 0x1b4a64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a60) {
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B4A68u;
    // 0x1b4a68: 0xc06d16a  jal         func_1B45A8
    ctx->pc = 0x1B4A68u;
    SET_GPR_U32(ctx, 31, 0x1B4A70u);
    ctx->pc = 0x1B4A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A68u;
    // 0x1b4a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B45A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B45A8u, 0x1B4A68u, 0x1B4A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A70u;
label_1b4a70:
    // 0x1b4a70: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4A70u;
    {
        const bool branch_taken_0x1b4a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a70) {
            ctx->pc = 0x1B4A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4A70u;
            // 0x1b4a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4A8Cu;
            goto label_1b4a8c;
        }
    }
    ctx->pc = 0x1B4A78u;
    // 0x1b4a78: 0xc06d172  jal         func_1B45C8
    ctx->pc = 0x1B4A78u;
    SET_GPR_U32(ctx, 31, 0x1B4A80u);
    ctx->pc = 0x1B4A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A78u;
    // 0x1b4a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B45C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B45C8u, 0x1B4A78u, 0x1B4A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A80u;
label_1b4a80:
    // 0x1b4a80: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1b4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b4a84: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1b4a84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1b4a88: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b4a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b4a8c:
    // 0x1b4a8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4a90:
    // 0x1b4a90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4a94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b4a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4a98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b4a98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b4a9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b4a9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4aa0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b4aa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4aa4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b4aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4aa8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1b4aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b4aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4AACu;
        // 0x1b4ab0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4AB4u;
    // 0x1b4ab4: 0x0  nop
    ctx->pc = 0x1b4ab4u;
    // NOP
    ctx->pc = 0x1b4ab8u;
}
