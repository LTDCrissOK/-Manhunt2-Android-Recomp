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

// Function: sub_00362E80
// Address: 0x362e80 - 0x362ff8
void sub_00362E80_0x362e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362E80_0x362e80");
#endif

    switch (ctx->pc) {
        case 0x362e80u: goto label_362e80;
        case 0x362e84u: goto label_362e84;
        case 0x362e88u: goto label_362e88;
        case 0x362e8cu: goto label_362e8c;
        case 0x362e90u: goto label_362e90;
        case 0x362e94u: goto label_362e94;
        case 0x362e98u: goto label_362e98;
        case 0x362e9cu: goto label_362e9c;
        case 0x362ea0u: goto label_362ea0;
        case 0x362ea4u: goto label_362ea4;
        case 0x362ea8u: goto label_362ea8;
        case 0x362eacu: goto label_362eac;
        case 0x362eb0u: goto label_362eb0;
        case 0x362eb4u: goto label_362eb4;
        case 0x362eb8u: goto label_362eb8;
        case 0x362ebcu: goto label_362ebc;
        case 0x362ec0u: goto label_362ec0;
        case 0x362ec4u: goto label_362ec4;
        case 0x362ec8u: goto label_362ec8;
        case 0x362eccu: goto label_362ecc;
        case 0x362ed0u: goto label_362ed0;
        case 0x362ed4u: goto label_362ed4;
        case 0x362ed8u: goto label_362ed8;
        case 0x362edcu: goto label_362edc;
        case 0x362ee0u: goto label_362ee0;
        case 0x362ee4u: goto label_362ee4;
        case 0x362ee8u: goto label_362ee8;
        case 0x362eecu: goto label_362eec;
        case 0x362ef0u: goto label_362ef0;
        case 0x362ef4u: goto label_362ef4;
        case 0x362ef8u: goto label_362ef8;
        case 0x362efcu: goto label_362efc;
        case 0x362f00u: goto label_362f00;
        case 0x362f04u: goto label_362f04;
        case 0x362f08u: goto label_362f08;
        case 0x362f0cu: goto label_362f0c;
        case 0x362f10u: goto label_362f10;
        case 0x362f14u: goto label_362f14;
        case 0x362f18u: goto label_362f18;
        case 0x362f1cu: goto label_362f1c;
        case 0x362f20u: goto label_362f20;
        case 0x362f24u: goto label_362f24;
        case 0x362f28u: goto label_362f28;
        case 0x362f2cu: goto label_362f2c;
        case 0x362f30u: goto label_362f30;
        case 0x362f34u: goto label_362f34;
        case 0x362f38u: goto label_362f38;
        case 0x362f3cu: goto label_362f3c;
        case 0x362f40u: goto label_362f40;
        case 0x362f44u: goto label_362f44;
        case 0x362f48u: goto label_362f48;
        case 0x362f4cu: goto label_362f4c;
        case 0x362f50u: goto label_362f50;
        case 0x362f54u: goto label_362f54;
        case 0x362f58u: goto label_362f58;
        case 0x362f5cu: goto label_362f5c;
        case 0x362f60u: goto label_362f60;
        case 0x362f64u: goto label_362f64;
        case 0x362f68u: goto label_362f68;
        case 0x362f6cu: goto label_362f6c;
        case 0x362f70u: goto label_362f70;
        case 0x362f74u: goto label_362f74;
        case 0x362f78u: goto label_362f78;
        case 0x362f7cu: goto label_362f7c;
        case 0x362f80u: goto label_362f80;
        case 0x362f84u: goto label_362f84;
        case 0x362f88u: goto label_362f88;
        case 0x362f8cu: goto label_362f8c;
        case 0x362f90u: goto label_362f90;
        case 0x362f94u: goto label_362f94;
        case 0x362f98u: goto label_362f98;
        case 0x362f9cu: goto label_362f9c;
        case 0x362fa0u: goto label_362fa0;
        case 0x362fa4u: goto label_362fa4;
        case 0x362fa8u: goto label_362fa8;
        case 0x362facu: goto label_362fac;
        case 0x362fb0u: goto label_362fb0;
        case 0x362fb4u: goto label_362fb4;
        case 0x362fb8u: goto label_362fb8;
        case 0x362fbcu: goto label_362fbc;
        case 0x362fc0u: goto label_362fc0;
        case 0x362fc4u: goto label_362fc4;
        case 0x362fc8u: goto label_362fc8;
        case 0x362fccu: goto label_362fcc;
        case 0x362fd0u: goto label_362fd0;
        case 0x362fd4u: goto label_362fd4;
        case 0x362fd8u: goto label_362fd8;
        case 0x362fdcu: goto label_362fdc;
        case 0x362fe0u: goto label_362fe0;
        case 0x362fe4u: goto label_362fe4;
        case 0x362fe8u: goto label_362fe8;
        case 0x362fecu: goto label_362fec;
        case 0x362ff0u: goto label_362ff0;
        case 0x362ff4u: goto label_362ff4;
        default: break;
    }

    ctx->pc = 0x362e80u;

label_362e80:
    // 0x362e80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x362e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_362e84:
    // 0x362e84: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x362e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_362e88:
    // 0x362e88: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x362e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_362e8c:
    // 0x362e8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x362e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_362e90:
    // 0x362e90: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x362e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_362e94:
    // 0x362e94: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x362e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_362e98:
    // 0x362e98: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x362e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_362e9c:
    // 0x362e9c: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
label_362ea0:
    if (ctx->pc == 0x362EA0u) {
        ctx->pc = 0x362EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E9Cu;
        // 0x362ea0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362EA4u;
        goto label_362ea4;
    }
    ctx->pc = 0x362E9Cu;
    {
        const bool branch_taken_0x362e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E9Cu;
        // 0x362ea0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362e9c) {
            ctx->pc = 0x362FD0u;
            goto label_362fd0;
        }
    }
    ctx->pc = 0x362EA4u;
label_362ea4:
    // 0x362ea4: 0xc0b1488  jal         func_2C5220
label_362ea8:
    if (ctx->pc == 0x362EA8u) {
        ctx->pc = 0x362EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362EA4u;
        // 0x362ea8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362EACu;
        goto label_362eac;
    }
    ctx->pc = 0x362EA4u;
    SET_GPR_U32(ctx, 31, 0x362EACu);
    ctx->pc = 0x362EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362EA4u;
    // 0x362ea8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x362EA4u, 0x362EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362EACu;
label_362eac:
    // 0x362eac: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x362eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_362eb0:
    // 0x362eb0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_362eb4:
    if (ctx->pc == 0x362EB4u) {
        ctx->pc = 0x362EB8u;
        goto label_362eb8;
    }
    ctx->pc = 0x362EB0u;
    {
        const bool branch_taken_0x362eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362eb0) {
            ctx->pc = 0x362F3Cu;
            goto label_362f3c;
        }
    }
    ctx->pc = 0x362EB8u;
label_362eb8:
    // 0x362eb8: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x362eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_362ebc:
    // 0x362ebc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x362ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_362ec0:
    // 0x362ec0: 0xc0f70ce  jal         func_3DC338
label_362ec4:
    if (ctx->pc == 0x362EC4u) {
        ctx->pc = 0x362EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362EC0u;
        // 0x362ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362EC8u;
        goto label_362ec8;
    }
    ctx->pc = 0x362EC0u;
    SET_GPR_U32(ctx, 31, 0x362EC8u);
    ctx->pc = 0x362EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362EC0u;
    // 0x362ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x362EC0u, 0x362EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362EC8u;
label_362ec8:
    // 0x362ec8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_362ecc:
    if (ctx->pc == 0x362ECCu) {
        ctx->pc = 0x362ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362EC8u;
        // 0x362ecc: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362ED0u;
        goto label_362ed0;
    }
    ctx->pc = 0x362EC8u;
    {
        const bool branch_taken_0x362ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362EC8u;
        // 0x362ecc: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362ec8) {
            ctx->pc = 0x362EDCu;
            goto label_362edc;
        }
    }
    ctx->pc = 0x362ED0u;
label_362ed0:
    // 0x362ed0: 0xc0c4900  jal         func_312400
label_362ed4:
    if (ctx->pc == 0x362ED4u) {
        ctx->pc = 0x362ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362ED0u;
        // 0x362ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362ED8u;
        goto label_362ed8;
    }
    ctx->pc = 0x362ED0u;
    SET_GPR_U32(ctx, 31, 0x362ED8u);
    ctx->pc = 0x362ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362ED0u;
    // 0x362ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x362ED0u, 0x362ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362ED8u;
label_362ed8:
    // 0x362ed8: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x362ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_362edc:
    // 0x362edc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x362edcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_362ee0:
    // 0x362ee0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x362ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_362ee4:
    // 0x362ee4: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x362ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_362ee8:
    // 0x362ee8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x362ee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_362eec:
    // 0x362eec: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x362eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_362ef0:
    // 0x362ef0: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x362ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_362ef4:
    // 0x362ef4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x362ef4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_362ef8:
    // 0x362ef8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x362ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_362efc:
    // 0x362efc: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x362efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_362f00:
    // 0x362f00: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x362f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_362f04:
    // 0x362f04: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x362f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_362f08:
    // 0x362f08: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x362f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_362f0c:
    // 0x362f0c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x362f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_362f10:
    // 0x362f10: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x362f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_362f14:
    // 0x362f14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x362f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_362f18:
    // 0x362f18: 0xac8200c0  sw          $v0, 0xC0($a0)
    ctx->pc = 0x362f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
label_362f1c:
    // 0x362f1c: 0xc0837b4  jal         func_20DED0
label_362f20:
    if (ctx->pc == 0x362F20u) {
        ctx->pc = 0x362F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F1Cu;
        // 0x362f20: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362F24u;
        goto label_362f24;
    }
    ctx->pc = 0x362F1Cu;
    SET_GPR_U32(ctx, 31, 0x362F24u);
    ctx->pc = 0x362F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362F1Cu;
    // 0x362f20: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x362F1Cu, 0x362F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362F24u;
label_362f24:
    // 0x362f24: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x362f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_362f28:
    // 0x362f28: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x362f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_362f2c:
    // 0x362f2c: 0x90820032  lbu         $v0, 0x32($a0)
    ctx->pc = 0x362f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
label_362f30:
    // 0x362f30: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x362f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_362f34:
    // 0x362f34: 0xa0820032  sb          $v0, 0x32($a0)
    ctx->pc = 0x362f34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 2));
label_362f38:
    // 0x362f38: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x362f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_362f3c:
    // 0x362f3c: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_362f40:
    if (ctx->pc == 0x362F40u) {
        ctx->pc = 0x362F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F3Cu;
        // 0x362f40: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362F44u;
        goto label_362f44;
    }
    ctx->pc = 0x362F3Cu;
    {
        const bool branch_taken_0x362f3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x362F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F3Cu;
        // 0x362f40: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362f3c) {
            ctx->pc = 0x362F80u;
            goto label_362f80;
        }
    }
    ctx->pc = 0x362F44u;
label_362f44:
    // 0x362f44: 0x8c44010c  lw          $a0, 0x10C($v0)
    ctx->pc = 0x362f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_362f48:
    // 0x362f48: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x362f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_362f4c:
    // 0x362f4c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x362f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_362f50:
    // 0x362f50: 0x40f809  jalr        $v0
label_362f54:
    if (ctx->pc == 0x362F54u) {
        ctx->pc = 0x362F58u;
        goto label_362f58;
    }
    ctx->pc = 0x362F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362F58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362F50u, 0x362F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362F58u;
label_362f58:
    // 0x362f58: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x362f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_362f5c:
    // 0x362f5c: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x362f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_362f60:
    // 0x362f60: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x362f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_362f64:
    // 0x362f64: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x362f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_362f68:
    // 0x362f68: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x362f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_362f6c:
    // 0x362f6c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x362f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_362f70:
    // 0x362f70: 0x40f809  jalr        $v0
label_362f74:
    if (ctx->pc == 0x362F74u) {
        ctx->pc = 0x362F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F70u;
        // 0x362f74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362F78u;
        goto label_362f78;
    }
    ctx->pc = 0x362F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362F78u);
        ctx->pc = 0x362F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F70u;
        // 0x362f74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362F70u, 0x362F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362F78u;
label_362f78:
    // 0x362f78: 0x10000006  b           . + 4 + (0x6 << 2)
label_362f7c:
    if (ctx->pc == 0x362F7Cu) {
        ctx->pc = 0x362F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F78u;
        // 0x362f7c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362F80u;
        goto label_362f80;
    }
    ctx->pc = 0x362F78u;
    {
        const bool branch_taken_0x362f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362F78u;
        // 0x362f7c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362f78) {
            ctx->pc = 0x362F94u;
            goto label_362f94;
        }
    }
    ctx->pc = 0x362F80u;
label_362f80:
    // 0x362f80: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x362f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_362f84:
    // 0x362f84: 0x90830032  lbu         $v1, 0x32($a0)
    ctx->pc = 0x362f84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
label_362f88:
    // 0x362f88: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x362f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_362f8c:
    // 0x362f8c: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x362f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
label_362f90:
    // 0x362f90: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x362f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_362f94:
    // 0x362f94: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x362f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_362f98:
    // 0x362f98: 0x2444dc30  addiu       $a0, $v0, -0x23D0
    ctx->pc = 0x362f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958128));
label_362f9c:
    // 0x362f9c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x362f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_362fa0:
    // 0x362fa0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x362fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_362fa4:
    // 0x362fa4: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x362fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
label_362fa8:
    // 0x362fa8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_362fac:
    if (ctx->pc == 0x362FACu) {
        ctx->pc = 0x362FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362FA8u;
        // 0x362fac: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362FB0u;
        goto label_362fb0;
    }
    ctx->pc = 0x362FA8u;
    {
        const bool branch_taken_0x362fa8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x362FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362FA8u;
        // 0x362fac: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362fa8) {
            ctx->pc = 0x362FCCu;
            goto label_362fcc;
        }
    }
    ctx->pc = 0x362FB0u;
label_362fb0:
    // 0x362fb0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x362fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_362fb4:
    // 0x362fb4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x362fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_362fb8:
    // 0x362fb8: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x362fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_362fbc:
    // 0x362fbc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x362fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_362fc0:
    // 0x362fc0: 0xc0fbcc6  jal         func_3EF318
label_362fc4:
    if (ctx->pc == 0x362FC4u) {
        ctx->pc = 0x362FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362FC0u;
        // 0x362fc4: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362FC8u;
        goto label_362fc8;
    }
    ctx->pc = 0x362FC0u;
    SET_GPR_U32(ctx, 31, 0x362FC8u);
    ctx->pc = 0x362FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362FC0u;
    // 0x362fc4: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF318u, 0x362FC0u, 0x362FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362FC8u;
label_362fc8:
    // 0x362fc8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x362fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_362fcc:
    // 0x362fcc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x362fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_362fd0:
    // 0x362fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x362fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_362fd4:
    // 0x362fd4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x362fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_362fd8:
    // 0x362fd8: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x362fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_362fdc:
    // 0x362fdc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x362fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_362fe0:
    // 0x362fe0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x362fe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_362fe4:
    // 0x362fe4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x362fe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_362fe8:
    // 0x362fe8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x362fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_362fec:
    // 0x362fec: 0x3e00008  jr          $ra
label_362ff0:
    if (ctx->pc == 0x362FF0u) {
        ctx->pc = 0x362FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362FECu;
        // 0x362ff0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362FF4u;
        goto label_362ff4;
    }
    ctx->pc = 0x362FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362FECu;
        // 0x362ff0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362FF4u;
label_362ff4:
    // 0x362ff4: 0x0  nop
    ctx->pc = 0x362ff4u;
    // NOP
    ctx->pc = 0x362ff8u;
}
