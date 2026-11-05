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

// Function: sub_00256D70
// Address: 0x256d70 - 0x256ed8
void sub_00256D70_0x256d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256D70_0x256d70");
#endif

    switch (ctx->pc) {
        case 0x256dacu: goto label_256dac;
        case 0x256dc0u: goto label_256dc0;
        case 0x256e28u: goto label_256e28;
        case 0x256e4cu: goto label_256e4c;
        case 0x256e70u: goto label_256e70;
        case 0x256e94u: goto label_256e94;
        case 0x256ebcu: goto label_256ebc;
        default: break;
    }

    ctx->pc = 0x256d70u;

    // 0x256d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x256d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x256d78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x256d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x256d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x256d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x256d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x256d84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x256d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x256d88: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x256d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x256d8c: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x256d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x256d90: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x256D90u;
    {
        const bool branch_taken_0x256d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256d90) {
            ctx->pc = 0x256D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256D90u;
            // 0x256d94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256EC0u;
            goto label_256ec0;
        }
    }
    ctx->pc = 0x256D98u;
    // 0x256d98: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x256d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x256d9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x256d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256da0: 0x24513d20  addiu       $s1, $v0, 0x3D20
    ctx->pc = 0x256da0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x256da4: 0xc0f7dec  jal         func_3DF7B0
    ctx->pc = 0x256DA4u;
    SET_GPR_U32(ctx, 31, 0x256DACu);
    ctx->pc = 0x256DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256DA4u;
    // 0x256da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF7B0u, 0x256DA4u, 0x256DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256DACu;
label_256dac:
    // 0x256dac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256DACu;
    {
        const bool branch_taken_0x256dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DACu;
        // 0x256db0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256dac) {
            ctx->pc = 0x256DC8u;
            goto label_256dc8;
        }
    }
    ctx->pc = 0x256DB4u;
    // 0x256db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256db8: 0xc0f71b8  jal         func_3DC6E0
    ctx->pc = 0x256DB8u;
    SET_GPR_U32(ctx, 31, 0x256DC0u);
    ctx->pc = 0x256DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256DB8u;
    // 0x256dbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6E0u, 0x256DB8u, 0x256DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256DC0u;
label_256dc0:
    // 0x256dc0: 0xae0210d4  sw          $v0, 0x10D4($s0)
    ctx->pc = 0x256dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4308), GPR_U32(ctx, 2));
    // 0x256dc4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x256dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_256dc8:
    // 0x256dc8: 0x8c6295bc  lw          $v0, -0x6A44($v1)
    ctx->pc = 0x256dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940092)));
    // 0x256dcc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x256DCCu;
    {
        const bool branch_taken_0x256dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DCCu;
        // 0x256dd0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256dcc) {
            ctx->pc = 0x256E04u;
            goto label_256e04;
        }
    }
    ctx->pc = 0x256DD4u;
    // 0x256dd4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x256dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x256dd8: 0x8c4395c0  lw          $v1, -0x6A40($v0)
    ctx->pc = 0x256dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F95C0u));
    // 0x256ddc: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x256DDCu;
    {
        const bool branch_taken_0x256ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x256ddc) {
            ctx->pc = 0x256DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256DDCu;
            // 0x256de0: 0x8e0210cc  lw          $v0, 0x10CC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256E08u;
            goto label_256e08;
        }
    }
    ctx->pc = 0x256DE4u;
    // 0x256de4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x256de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x256de8: 0x8c4395c4  lw          $v1, -0x6A3C($v0)
    ctx->pc = 0x256de8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F95C4u));
    // 0x256dec: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x256DECu;
    {
        const bool branch_taken_0x256dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x256dec) {
            ctx->pc = 0x256DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256DECu;
            // 0x256df0: 0x8e0210cc  lw          $v0, 0x10CC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256E08u;
            goto label_256e08;
        }
    }
    ctx->pc = 0x256DF4u;
    // 0x256df4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x256df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x256df8: 0x8c4395c8  lw          $v1, -0x6A38($v0)
    ctx->pc = 0x256df8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F95C8u));
    // 0x256dfc: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x256DFCu;
    {
        const bool branch_taken_0x256dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256dfc) {
            ctx->pc = 0x256E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256DFCu;
            // 0x256e00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256EC0u;
            goto label_256ec0;
        }
    }
    ctx->pc = 0x256E04u;
label_256e04:
    // 0x256e04: 0x8e0210cc  lw          $v0, 0x10CC($s0)
    ctx->pc = 0x256e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4300)));
label_256e08:
    // 0x256e08: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x256E08u;
    {
        const bool branch_taken_0x256e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256e08) {
            ctx->pc = 0x256E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256E08u;
            // 0x256e0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256EC0u;
            goto label_256ec0;
        }
    }
    ctx->pc = 0x256E10u;
    // 0x256e10: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x256e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x256e14: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x256e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x256e18: 0x8c653550  lw          $a1, 0x3550($v1)
    ctx->pc = 0x256e18u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4A3550u));
    // 0x256e1c: 0x24511410  addiu       $s1, $v0, 0x1410
    ctx->pc = 0x256e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5136));
    // 0x256e20: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x256E20u;
    SET_GPR_U32(ctx, 31, 0x256E28u);
    ctx->pc = 0x256E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256E20u;
    // 0x256e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x256E20u, 0x256E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E28u;
label_256e28:
    // 0x256e28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256e2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256E2Cu;
    {
        const bool branch_taken_0x256e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E2Cu;
        // 0x256e30: 0x8e4295bc  lw          $v0, -0x6A44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294940092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e2c) {
            ctx->pc = 0x256E3Cu;
            goto label_256e3c;
        }
    }
    ctx->pc = 0x256E34u;
    // 0x256e34: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x256E34u;
    {
        const bool branch_taken_0x256e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E34u;
        // 0x256e38: 0xae0210cc  sw          $v0, 0x10CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e34) {
            ctx->pc = 0x256EA8u;
            goto label_256ea8;
        }
    }
    ctx->pc = 0x256E3Cu;
label_256e3c:
    // 0x256e3c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x256e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x256e40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e44: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x256E44u;
    SET_GPR_U32(ctx, 31, 0x256E4Cu);
    ctx->pc = 0x256E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256E44u;
    // 0x256e48: 0x8c453558  lw          $a1, 0x3558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13656)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x256E44u, 0x256E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E4Cu;
label_256e4c:
    // 0x256e4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256e50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256E50u;
    {
        const bool branch_taken_0x256e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E50u;
        // 0x256e54: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e50) {
            ctx->pc = 0x256E60u;
            goto label_256e60;
        }
    }
    ctx->pc = 0x256E58u;
    // 0x256e58: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x256E58u;
    {
        const bool branch_taken_0x256e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E58u;
        // 0x256e5c: 0x8c4395c0  lw          $v1, -0x6A40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e58) {
            ctx->pc = 0x256EA4u;
            goto label_256ea4;
        }
    }
    ctx->pc = 0x256E60u;
label_256e60:
    // 0x256e60: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x256e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x256e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e68: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x256E68u;
    SET_GPR_U32(ctx, 31, 0x256E70u);
    ctx->pc = 0x256E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256E68u;
    // 0x256e6c: 0x8c453560  lw          $a1, 0x3560($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x256E68u, 0x256E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E70u;
label_256e70:
    // 0x256e70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256e74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256E74u;
    {
        const bool branch_taken_0x256e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E74u;
        // 0x256e78: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e74) {
            ctx->pc = 0x256E84u;
            goto label_256e84;
        }
    }
    ctx->pc = 0x256E7Cu;
    // 0x256e7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x256E7Cu;
    {
        const bool branch_taken_0x256e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E7Cu;
        // 0x256e80: 0x8c4395c4  lw          $v1, -0x6A3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e7c) {
            ctx->pc = 0x256EA4u;
            goto label_256ea4;
        }
    }
    ctx->pc = 0x256E84u;
label_256e84:
    // 0x256e84: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x256e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x256e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e8c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x256E8Cu;
    SET_GPR_U32(ctx, 31, 0x256E94u);
    ctx->pc = 0x256E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256E8Cu;
    // 0x256e90: 0x8c453568  lw          $a1, 0x3568($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x256E8Cu, 0x256E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E94u;
label_256e94:
    // 0x256e94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x256e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x256e98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256E98u;
    {
        const bool branch_taken_0x256e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E98u;
        // 0x256e9c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e98) {
            ctx->pc = 0x256EA8u;
            goto label_256ea8;
        }
    }
    ctx->pc = 0x256EA0u;
    // 0x256ea0: 0x8c4395c8  lw          $v1, -0x6A38($v0)
    ctx->pc = 0x256ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940104)));
label_256ea4:
    // 0x256ea4: 0xae0310cc  sw          $v1, 0x10CC($s0)
    ctx->pc = 0x256ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4300), GPR_U32(ctx, 3));
label_256ea8:
    // 0x256ea8: 0x8e0410cc  lw          $a0, 0x10CC($s0)
    ctx->pc = 0x256ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4300)));
    // 0x256eac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x256EACu;
    {
        const bool branch_taken_0x256eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x256eac) {
            ctx->pc = 0x256EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256EACu;
            // 0x256eb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256EC0u;
            goto label_256ec0;
        }
    }
    ctx->pc = 0x256EB4u;
    // 0x256eb4: 0xc096518  jal         func_259460
    ctx->pc = 0x256EB4u;
    SET_GPR_U32(ctx, 31, 0x256EBCu);
    ctx->pc = 0x256EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256EB4u;
    // 0x256eb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259460u, 0x256EB4u, 0x256EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256EBCu;
label_256ebc:
    // 0x256ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x256ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_256ec0:
    // 0x256ec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x256ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x256ec4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x256ec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256ec8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x256ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x256ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x256ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256ECCu;
        // 0x256ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256ED4u;
    // 0x256ed4: 0x0  nop
    ctx->pc = 0x256ed4u;
    // NOP
    ctx->pc = 0x256ed8u;
}
