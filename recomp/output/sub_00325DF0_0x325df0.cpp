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

// Function: sub_00325DF0
// Address: 0x325df0 - 0x325f40
void sub_00325DF0_0x325df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325DF0_0x325df0");
#endif

    switch (ctx->pc) {
        case 0x325e3cu: goto label_325e3c;
        case 0x325e44u: goto label_325e44;
        case 0x325e4cu: goto label_325e4c;
        case 0x325e5cu: goto label_325e5c;
        case 0x325e64u: goto label_325e64;
        case 0x325e6cu: goto label_325e6c;
        case 0x325e80u: goto label_325e80;
        case 0x325e88u: goto label_325e88;
        case 0x325e98u: goto label_325e98;
        case 0x325ec0u: goto label_325ec0;
        case 0x325ec8u: goto label_325ec8;
        case 0x325edcu: goto label_325edc;
        case 0x325f04u: goto label_325f04;
        case 0x325f20u: goto label_325f20;
        default: break;
    }

    ctx->pc = 0x325df0u;

    // 0x325df0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x325df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x325df4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x325df4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x325df8: 0x8c62be30  lw          $v0, -0x41D0($v1)
    ctx->pc = 0x325df8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBE30u));
    // 0x325dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325e00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x325e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x325e04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x325E04u;
    {
        const bool branch_taken_0x325e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E04u;
        // 0x325e08: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e04) {
            ctx->pc = 0x325E14u;
            goto label_325e14;
        }
    }
    ctx->pc = 0x325E0Cu;
    // 0x325e0c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x325E0Cu;
    {
        const bool branch_taken_0x325e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E0Cu;
        // 0x325e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e0c) {
            ctx->pc = 0x325F24u;
            goto label_325f24;
        }
    }
    ctx->pc = 0x325E14u;
label_325e14:
    // 0x325e14: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x325e14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x325e18: 0xac60be30  sw          $zero, -0x41D0($v1)
    ctx->pc = 0x325e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950448), GPR_U32(ctx, 0));
    // 0x325e1c: 0x8e04bd50  lw          $a0, -0x42B0($s0)
    ctx->pc = 0x325e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x325e20: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x325e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x325e24: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x325e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e28: 0x8c8211c0  lw          $v0, 0x11C0($a0)
    ctx->pc = 0x325e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4544)));
    // 0x325e2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x325e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x325e30: 0xac8211c0  sw          $v0, 0x11C0($a0)
    ctx->pc = 0x325e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4544), GPR_U32(ctx, 2));
    // 0x325e34: 0xc0953c0  jal         func_254F00
    ctx->pc = 0x325E34u;
    SET_GPR_U32(ctx, 31, 0x325E3Cu);
    ctx->pc = 0x325E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E34u;
    // 0x325e38: 0x8e04bd50  lw          $a0, -0x42B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F00u, 0x325E34u, 0x325E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E3Cu;
label_325e3c:
    // 0x325e3c: 0xc0953a6  jal         func_254E98
    ctx->pc = 0x325E3Cu;
    SET_GPR_U32(ctx, 31, 0x325E44u);
    ctx->pc = 0x325E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E3Cu;
    // 0x325e40: 0x8e04bd50  lw          $a0, -0x42B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E98u, 0x325E3Cu, 0x325E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E44u;
label_325e44:
    // 0x325e44: 0xc0bb6c2  jal         func_2EDB08
    ctx->pc = 0x325E44u;
    SET_GPR_U32(ctx, 31, 0x325E4Cu);
    ctx->pc = 0x325E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E44u;
    // 0x325e48: 0x8e04bd50  lw          $a0, -0x42B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB08u, 0x325E44u, 0x325E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E4Cu;
label_325e4c:
    // 0x325e4c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x325e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x325e50: 0x8e04bd50  lw          $a0, -0x42B0($s0)
    ctx->pc = 0x325e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    // 0x325e54: 0xc0bcc6a  jal         func_2F31A8
    ctx->pc = 0x325E54u;
    SET_GPR_U32(ctx, 31, 0x325E5Cu);
    ctx->pc = 0x325E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E54u;
    // 0x325e58: 0xc44c4774  lwc1        $f12, 0x4774($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x325E54u, 0x325E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E5Cu;
label_325e5c:
    // 0x325e5c: 0xc0b9558  jal         func_2E5560
    ctx->pc = 0x325E5Cu;
    SET_GPR_U32(ctx, 31, 0x325E64u);
    ctx->pc = 0x325E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E5Cu;
    // 0x325e60: 0x8e04bd50  lw          $a0, -0x42B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5560u, 0x325E5Cu, 0x325E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E64u;
label_325e64:
    // 0x325e64: 0xc0a4758  jal         func_291D60
    ctx->pc = 0x325E64u;
    SET_GPR_U32(ctx, 31, 0x325E6Cu);
    ctx->pc = 0x291D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D60u, 0x325E64u, 0x325E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E6Cu;
label_325e6c:
    // 0x325e6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x325e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325e70: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x325e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x325e74: 0xa0430061  sb          $v1, 0x61($v0)
    ctx->pc = 0x325e74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x325e78: 0xc049544  jal         func_125510
    ctx->pc = 0x325E78u;
    SET_GPR_U32(ctx, 31, 0x325E80u);
    ctx->pc = 0x325E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E78u;
    // 0x325e7c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125510u, 0x325E78u, 0x325E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E80u;
label_325e80:
    // 0x325e80: 0xc0c9770  jal         func_325DC0
    ctx->pc = 0x325E80u;
    SET_GPR_U32(ctx, 31, 0x325E88u);
    ctx->pc = 0x325DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325DC0u, 0x325E80u, 0x325E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E88u;
label_325e88:
    // 0x325e88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x325E88u;
    {
        const bool branch_taken_0x325e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E88u;
        // 0x325e8c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e88) {
            ctx->pc = 0x325E9Cu;
            goto label_325e9c;
        }
    }
    ctx->pc = 0x325E90u;
    // 0x325e90: 0xc0c9766  jal         func_325D98
    ctx->pc = 0x325E90u;
    SET_GPR_U32(ctx, 31, 0x325E98u);
    ctx->pc = 0x325D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325D98u, 0x325E90u, 0x325E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E98u;
label_325e98:
    // 0x325e98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x325e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_325e9c:
    // 0x325e9c: 0x8c43be98  lw          $v1, -0x4168($v0)
    ctx->pc = 0x325e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950552)));
    // 0x325ea0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x325EA0u;
    {
        const bool branch_taken_0x325ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x325EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325EA0u;
        // 0x325ea4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ea0) {
            ctx->pc = 0x325EC8u;
            goto label_325ec8;
        }
    }
    ctx->pc = 0x325EA8u;
    // 0x325ea8: 0x9043be9c  lbu         $v1, -0x4164($v0)
    ctx->pc = 0x325ea8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950556)));
    // 0x325eac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x325EACu;
    {
        const bool branch_taken_0x325eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325eac) {
            ctx->pc = 0x325EC0u;
            goto label_325ec0;
        }
    }
    ctx->pc = 0x325EB4u;
    // 0x325eb4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x325eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x325eb8: 0xc07f5dc  jal         func_1FD770
    ctx->pc = 0x325EB8u;
    SET_GPR_U32(ctx, 31, 0x325EC0u);
    ctx->pc = 0x325EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325EB8u;
    // 0x325ebc: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD770u, 0x325EB8u, 0x325EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325EC0u;
label_325ec0:
    // 0x325ec0: 0xc07f428  jal         func_1FD0A0
    ctx->pc = 0x325EC0u;
    SET_GPR_U32(ctx, 31, 0x325EC8u);
    ctx->pc = 0x1FD0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD0A0u, 0x325EC0u, 0x325EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325EC8u;
label_325ec8:
    // 0x325ec8: 0x8e24bd50  lw          $a0, -0x42B0($s1)
    ctx->pc = 0x325ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950224)));
    // 0x325ecc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x325eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x325ed0: 0x9045be9d  lbu         $a1, -0x4163($v0)
    ctx->pc = 0x325ed0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x3FBE9Du));
    // 0x325ed4: 0xc0b906c  jal         func_2E41B0
    ctx->pc = 0x325ED4u;
    SET_GPR_U32(ctx, 31, 0x325EDCu);
    ctx->pc = 0x325ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325ED4u;
    // 0x325ed8: 0x2484117c  addiu       $a0, $a0, 0x117C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4476));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E41B0u, 0x325ED4u, 0x325EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325EDCu;
label_325edc:
    // 0x325edc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x325edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x325ee0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x325ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x325ee4: 0x24505da0  addiu       $s0, $v0, 0x5DA0
    ctx->pc = 0x325ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23968));
    // 0x325ee8: 0xc44c5da0  lwc1        $f12, 0x5DA0($v0)
    ctx->pc = 0x325ee8u;
    { uint32_t bits = FAST_READ32(0x595DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325eec: 0x2611fad0  addiu       $s1, $s0, -0x530
    ctx->pc = 0x325eecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965968));
    // 0x325ef0: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x325ef0u;
    { uint32_t bits = FAST_READ32(0x595DA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x325ef4: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x325ef4u;
    { uint32_t bits = FAST_READ32(0x595DA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x325ef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325efc: 0xc0b8f54  jal         func_2E3D50
    ctx->pc = 0x325EFCu;
    SET_GPR_U32(ctx, 31, 0x325F04u);
    ctx->pc = 0x325F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325EFCu;
    // 0x325f00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3D50u, 0x325EFCu, 0x325F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F04u;
label_325f04:
    // 0x325f04: 0xc60e0014  lwc1        $f14, 0x14($s0)
    ctx->pc = 0x325f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x325f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325f0c: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x325f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325f10: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x325f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x325f14: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x325f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x325f18: 0xc0b8f54  jal         func_2E3D50
    ctx->pc = 0x325F18u;
    SET_GPR_U32(ctx, 31, 0x325F20u);
    ctx->pc = 0x325F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F18u;
    // 0x325f1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3D50u, 0x325F18u, 0x325F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F20u;
label_325f20:
    // 0x325f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_325f24:
    // 0x325f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325f28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x325f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325f2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x325f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325f30: 0x3e00008  jr          $ra
    ctx->pc = 0x325F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F30u;
        // 0x325f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325F38u;
    // 0x325f38: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x325f38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x325f3c: 0x0  nop
    ctx->pc = 0x325f3cu;
    // NOP
    ctx->pc = 0x325f40u;
}
