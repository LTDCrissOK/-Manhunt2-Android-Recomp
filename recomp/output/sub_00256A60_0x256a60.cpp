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

// Function: sub_00256A60
// Address: 0x256a60 - 0x256bc8
void sub_00256A60_0x256a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256A60_0x256a60");
#endif

    switch (ctx->pc) {
        case 0x256a78u: goto label_256a78;
        case 0x256ae0u: goto label_256ae0;
        case 0x256aecu: goto label_256aec;
        case 0x256b04u: goto label_256b04;
        case 0x256b30u: goto label_256b30;
        case 0x256b5cu: goto label_256b5c;
        case 0x256b70u: goto label_256b70;
        case 0x256b7cu: goto label_256b7c;
        case 0x256b8cu: goto label_256b8c;
        case 0x256b98u: goto label_256b98;
        case 0x256ba0u: goto label_256ba0;
        case 0x256bacu: goto label_256bac;
        default: break;
    }

    ctx->pc = 0x256a60u;

    // 0x256a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256a64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x256a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x256a68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x256a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x256a6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x256a70: 0xc09439a  jal         func_250E68
    ctx->pc = 0x256A70u;
    SET_GPR_U32(ctx, 31, 0x256A78u);
    ctx->pc = 0x256A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A70u;
    // 0x256a74: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250E68u, 0x256A70u, 0x256A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A78u;
label_256a78:
    // 0x256a78: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x256a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x256a7c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x256a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x256a80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x256a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256a84: 0x24631e70  addiu       $v1, $v1, 0x1E70
    ctx->pc = 0x256a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7792));
    // 0x256a88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x256a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x256a8c: 0xae230218  sw          $v1, 0x218($s1)
    ctx->pc = 0x256a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 3));
    // 0x256a90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x256a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x256a94: 0x262310f0  addiu       $v1, $s1, 0x10F0
    ctx->pc = 0x256a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4336));
    // 0x256a98: 0xe62010c0  swc1        $f0, 0x10C0($s1)
    ctx->pc = 0x256a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4288), bits); }
    // 0x256a9c: 0xae2210d8  sw          $v0, 0x10D8($s1)
    ctx->pc = 0x256a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4312), GPR_U32(ctx, 2));
    // 0x256aa0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x256aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x256aa4: 0xa22010c4  sb          $zero, 0x10C4($s1)
    ctx->pc = 0x256aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4292), (uint8_t)GPR_U32(ctx, 0));
    // 0x256aa8: 0xa22010c5  sb          $zero, 0x10C5($s1)
    ctx->pc = 0x256aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4293), (uint8_t)GPR_U32(ctx, 0));
    // 0x256aac: 0xa22010c6  sb          $zero, 0x10C6($s1)
    ctx->pc = 0x256aacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294), (uint8_t)GPR_U32(ctx, 0));
    // 0x256ab0: 0xae2010cc  sw          $zero, 0x10CC($s1)
    ctx->pc = 0x256ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4300), GPR_U32(ctx, 0));
    // 0x256ab4: 0xae2010d0  sw          $zero, 0x10D0($s1)
    ctx->pc = 0x256ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4304), GPR_U32(ctx, 0));
    // 0x256ab8: 0xa22010dc  sb          $zero, 0x10DC($s1)
    ctx->pc = 0x256ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4316), (uint8_t)GPR_U32(ctx, 0));
    // 0x256abc: 0xae2010e4  sw          $zero, 0x10E4($s1)
    ctx->pc = 0x256abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4324), GPR_U32(ctx, 0));
    // 0x256ac0: 0xae2010f0  sw          $zero, 0x10F0($s1)
    ctx->pc = 0x256ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4336), GPR_U32(ctx, 0));
    // 0x256ac4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x256ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x256ac8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x256ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x256acc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x256accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x256ad0: 0xae201100  sw          $zero, 0x1100($s1)
    ctx->pc = 0x256ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4352), GPR_U32(ctx, 0));
    // 0x256ad4: 0xa2201104  sb          $zero, 0x1104($s1)
    ctx->pc = 0x256ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4356), (uint8_t)GPR_U32(ctx, 0));
    // 0x256ad8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x256AD8u;
    SET_GPR_U32(ctx, 31, 0x256AE0u);
    ctx->pc = 0x256ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256AD8u;
    // 0x256adc: 0xae201108  sw          $zero, 0x1108($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4360), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x256AD8u, 0x256AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256AE0u;
label_256ae0:
    // 0x256ae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x256ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ae4: 0xc072ff4  jal         func_1CBFD0
    ctx->pc = 0x256AE4u;
    SET_GPR_U32(ctx, 31, 0x256AECu);
    ctx->pc = 0x256AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256AE4u;
    // 0x256ae8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFD0u, 0x256AE4u, 0x256AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256AECu;
label_256aec:
    // 0x256aec: 0xae2210c8  sw          $v0, 0x10C8($s1)
    ctx->pc = 0x256aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4296), GPR_U32(ctx, 2));
    // 0x256af0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x256af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256af4: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x256AF4u;
    {
        const bool branch_taken_0x256af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256af4) {
            ctx->pc = 0x256AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256AF4u;
            // 0x256af8: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256B40u;
            goto label_256b40;
        }
    }
    ctx->pc = 0x256AFCu;
    // 0x256afc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x256AFCu;
    SET_GPR_U32(ctx, 31, 0x256B04u);
    ctx->pc = 0x256B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256AFCu;
    // 0x256b00: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x256AFCu, 0x256B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B04u;
label_256b04:
    // 0x256b04: 0x8e2310c8  lw          $v1, 0x10C8($s1)
    ctx->pc = 0x256b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4296)));
    // 0x256b08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x256b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b0c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x256b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x256b10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x256b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x256b14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x256b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256b18: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x256b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x256b1c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x256b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x256b20: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x256b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x256b24: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x256b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x256b28: 0xc076e4a  jal         func_1DB928
    ctx->pc = 0x256B28u;
    SET_GPR_U32(ctx, 31, 0x256B30u);
    ctx->pc = 0x256B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B28u;
    // 0x256b2c: 0x8c450058  lw          $a1, 0x58($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB928u, 0x256B28u, 0x256B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B30u;
label_256b30:
    // 0x256b30: 0x8e2310c8  lw          $v1, 0x10C8($s1)
    ctx->pc = 0x256b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4296)));
    // 0x256b34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256b38: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x256b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x256b3c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x256b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_256b40:
    // 0x256b40: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x256b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x256b44: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x256B44u;
    {
        const bool branch_taken_0x256b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B44u;
        // 0x256b48: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b44) {
            ctx->pc = 0x256B74u;
            goto label_256b74;
        }
    }
    ctx->pc = 0x256B4Cu;
    // 0x256b4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x256b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b50: 0x24503d20  addiu       $s0, $v0, 0x3D20
    ctx->pc = 0x256b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x256b54: 0xc0f7dec  jal         func_3DF7B0
    ctx->pc = 0x256B54u;
    SET_GPR_U32(ctx, 31, 0x256B5Cu);
    ctx->pc = 0x256B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B54u;
    // 0x256b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF7B0u, 0x256B54u, 0x256B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B5Cu;
label_256b5c:
    // 0x256b5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x256B5Cu;
    {
        const bool branch_taken_0x256b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256b5c) {
            ctx->pc = 0x256B74u;
            goto label_256b74;
        }
    }
    ctx->pc = 0x256B64u;
    // 0x256b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b68: 0xc0f71b8  jal         func_3DC6E0
    ctx->pc = 0x256B68u;
    SET_GPR_U32(ctx, 31, 0x256B70u);
    ctx->pc = 0x256B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B68u;
    // 0x256b6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6E0u, 0x256B68u, 0x256B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B70u;
label_256b70:
    // 0x256b70: 0xae2210d4  sw          $v0, 0x10D4($s1)
    ctx->pc = 0x256b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4308), GPR_U32(ctx, 2));
label_256b74:
    // 0x256b74: 0xc095b5c  jal         func_256D70
    ctx->pc = 0x256B74u;
    SET_GPR_U32(ctx, 31, 0x256B7Cu);
    ctx->pc = 0x256B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B74u;
    // 0x256b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256D70u, 0x256B74u, 0x256B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B7Cu;
label_256b7c:
    // 0x256b7c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x256b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x256b80: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x256b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x256b84: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x256B84u;
    SET_GPR_U32(ctx, 31, 0x256B8Cu);
    ctx->pc = 0x256B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B84u;
    // 0x256b88: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x256B84u, 0x256B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B8Cu;
label_256b8c:
    // 0x256b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x256b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256b90: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x256B90u;
    SET_GPR_U32(ctx, 31, 0x256B98u);
    ctx->pc = 0x256B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B90u;
    // 0x256b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x256B90u, 0x256B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B98u;
label_256b98:
    // 0x256b98: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x256B98u;
    SET_GPR_U32(ctx, 31, 0x256BA0u);
    ctx->pc = 0x256B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256B98u;
    // 0x256b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x256B98u, 0x256BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BA0u;
label_256ba0:
    // 0x256ba0: 0xae3010e0  sw          $s0, 0x10E0($s1)
    ctx->pc = 0x256ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4320), GPR_U32(ctx, 16));
    // 0x256ba4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x256BA4u;
    SET_GPR_U32(ctx, 31, 0x256BACu);
    ctx->pc = 0x256BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256BA4u;
    // 0x256ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x256BA4u, 0x256BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BACu;
label_256bac:
    // 0x256bac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x256bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256bb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x256bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256bb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x256bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x256bb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x256bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x256BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BBCu;
        // 0x256bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256BC4u;
    // 0x256bc4: 0x0  nop
    ctx->pc = 0x256bc4u;
    // NOP
    ctx->pc = 0x256bc8u;
}
