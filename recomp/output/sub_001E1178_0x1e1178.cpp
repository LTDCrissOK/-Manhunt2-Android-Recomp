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

// Function: sub_001E1178
// Address: 0x1e1178 - 0x1e12f0
void sub_001E1178_0x1e1178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1178_0x1e1178");
#endif

    switch (ctx->pc) {
        case 0x1e11c8u: goto label_1e11c8;
        case 0x1e11dcu: goto label_1e11dc;
        case 0x1e11e8u: goto label_1e11e8;
        case 0x1e1204u: goto label_1e1204;
        case 0x1e1214u: goto label_1e1214;
        case 0x1e1270u: goto label_1e1270;
        default: break;
    }

    ctx->pc = 0x1e1178u;

    // 0x1e1178: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e1178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e117c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1e117cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1e1180: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1e1180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1e1184: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1e1184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1e1188: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e1188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e118c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1e118cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1e1190: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e1190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e1194: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e1194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e1198: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1198u;
    {
        const bool branch_taken_0x1e1198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1198u;
        // 0x1e119c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1198) {
            ctx->pc = 0x1E11B0u;
            goto label_1e11b0;
        }
    }
    ctx->pc = 0x1E11A0u;
    // 0x1e11a0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1e11a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e11a4: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x1e11a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x1e11a8: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1E11A8u;
    {
        const bool branch_taken_0x1e11a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11A8u;
        // 0x1e11ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11a8) {
            ctx->pc = 0x1E12D4u;
            goto label_1e12d4;
        }
    }
    ctx->pc = 0x1E11B0u;
label_1e11b0:
    // 0x1e11b0: 0x3c120049  lui         $s2, 0x49
    ctx->pc = 0x1e11b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)73 << 16));
    // 0x1e11b4: 0x8e420170  lw          $v0, 0x170($s2)
    ctx->pc = 0x1e11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x490170u));
    // 0x1e11b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E11B8u;
    {
        const bool branch_taken_0x1e11b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E11BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11B8u;
        // 0x1e11bc: 0x3c130049  lui         $s3, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11b8) {
            ctx->pc = 0x1E11DCu;
            goto label_1e11dc;
        }
    }
    ctx->pc = 0x1E11C0u;
    // 0x1e11c0: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1E11C0u;
    SET_GPR_U32(ctx, 31, 0x1E11C8u);
    ctx->pc = 0x1E11C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E11C0u;
    // 0x1e11c4: 0x26640110  addiu       $a0, $s3, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1E11C0u, 0x1E11C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E11C8u;
label_1e11c8:
    // 0x1e11c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e11cc: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x1e11ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x1e11d0: 0xae420170  sw          $v0, 0x170($s2)
    ctx->pc = 0x1e11d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
    // 0x1e11d4: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x1E11D4u;
    SET_GPR_U32(ctx, 31, 0x1E11DCu);
    ctx->pc = 0x1E11D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E11D4u;
    // 0x1e11d8: 0x24841170  addiu       $a0, $a0, 0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x1E11D4u, 0x1E11DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E11DCu;
label_1e11dc:
    // 0x1e11dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e11dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11e0: 0xc07a804  jal         func_1EA010
    ctx->pc = 0x1E11E0u;
    SET_GPR_U32(ctx, 31, 0x1E11E8u);
    ctx->pc = 0x1E11E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E11E0u;
    // 0x1e11e4: 0x26720110  addiu       $s2, $s3, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA010u, 0x1E11E0u, 0x1E11E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E11E8u;
label_1e11e8:
    // 0x1e11e8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e11e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e11ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e11ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11f0: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1e11f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1e11f4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1e11f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11f8: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x1e11f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1e11fc: 0xc07a814  jal         func_1EA050
    ctx->pc = 0x1E11FCu;
    SET_GPR_U32(ctx, 31, 0x1E1204u);
    ctx->pc = 0x1E1200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E11FCu;
    // 0x1e1200: 0x8c670014  lw          $a3, 0x14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA050u, 0x1E11FCu, 0x1E1204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1204u;
label_1e1204:
    // 0x1e1204: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1e1204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1208: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e1208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e120c: 0xc078c16  jal         func_1E3058
    ctx->pc = 0x1E120Cu;
    SET_GPR_U32(ctx, 31, 0x1E1214u);
    ctx->pc = 0x1E1210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E120Cu;
    // 0x1e1210: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3058u, 0x1E120Cu, 0x1E1214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1214u;
label_1e1214:
    // 0x1e1214: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E1214u;
    {
        const bool branch_taken_0x1e1214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1214u;
        // 0x1e1218: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1214) {
            ctx->pc = 0x1E12D0u;
            goto label_1e12d0;
        }
    }
    ctx->pc = 0x1E121Cu;
    // 0x1e121c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1e121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1220: 0xc44091cc  lwc1        $f0, -0x6E34($v0)
    ctx->pc = 0x1e1220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1224: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e1224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e1228: 0x0  nop
    ctx->pc = 0x1e1228u;
    // NOP
    // 0x1e122c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x1E122Cu;
    {
        const bool branch_taken_0x1e122c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E122Cu;
        // 0x1e1230: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e122c) {
            ctx->pc = 0x1E12D0u;
            goto label_1e12d0;
        }
    }
    ctx->pc = 0x1E1234u;
    // 0x1e1234: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1e1234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1238: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1e1238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1e123c: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1e123cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1e1240: 0xe52091cc  swc1        $f0, -0x6E34($t1)
    ctx->pc = 0x1e1240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294939084), bits); }
    // 0x1e1244: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e1244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e1248: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e1248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e124c: 0xf8410180  sqc2        $vf1, 0x180($v0)
    ctx->pc = 0x1e124cu;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x490180u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x490180u, _value); } while (0);
    // 0x1e1250: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1e1250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1254: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e1254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1258: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1e1258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e125c: 0x24860014  addiu       $a2, $a0, 0x14
    ctx->pc = 0x1e125cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1e1260: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1e1260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1e1264: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e1264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1268: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1e1268u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x490190u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490190u, _value); } while (0);
    // 0x1e126c: 0x0  nop
    ctx->pc = 0x1e126cu;
    // NOP
label_1e1270:
    // 0x1e1270: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e1270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1274: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1e1274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1e1278: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1e1278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e127c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e127cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e1280: 0x14a7fffb  bne         $a1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E1280u;
    {
        const bool branch_taken_0x1e1280 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x1E1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1280u;
        // 0x1e1284: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1280) {
            ctx->pc = 0x1E1270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1270;
        }
    }
    ctx->pc = 0x1E1288u;
    // 0x1e1288: 0x25020180  addiu       $v0, $t0, 0x180
    ctx->pc = 0x1e1288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 384));
    // 0x1e128c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e1290: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1e1290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1e1294: 0x26640110  addiu       $a0, $s3, 0x110
    ctx->pc = 0x1e1294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
    // 0x1e1298: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1e1298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1e129c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e12a0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1e12a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e12a4: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1e12a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1e12a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e12a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e12ac: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1e12acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1e12b0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e12b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e12b4: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e12b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e12b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e12bc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1e12bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1e12c0: 0xc52091cc  lwc1        $f0, -0x6E34($t1)
    ctx->pc = 0x1e12c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294939084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e12c4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1e12c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1e12c8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e12cc: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1e12ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1e12d0:
    // 0x1e12d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e12d4:
    // 0x1e12d4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1e12d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e12d8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1e12d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e12dc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1e12dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e12e0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1e12e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e12e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e12e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e12e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E12E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12E8u;
        // 0x1e12ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E12E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E12F0u;
}
