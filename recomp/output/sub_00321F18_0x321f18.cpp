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

// Function: sub_00321F18
// Address: 0x321f18 - 0x322078
void sub_00321F18_0x321f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321F18_0x321f18");
#endif

    switch (ctx->pc) {
        case 0x321f18u: goto label_321f18;
        case 0x321f1cu: goto label_321f1c;
        case 0x321f20u: goto label_321f20;
        case 0x321f24u: goto label_321f24;
        case 0x321f28u: goto label_321f28;
        case 0x321f2cu: goto label_321f2c;
        case 0x321f30u: goto label_321f30;
        case 0x321f34u: goto label_321f34;
        case 0x321f38u: goto label_321f38;
        case 0x321f3cu: goto label_321f3c;
        case 0x321f40u: goto label_321f40;
        case 0x321f44u: goto label_321f44;
        case 0x321f48u: goto label_321f48;
        case 0x321f4cu: goto label_321f4c;
        case 0x321f50u: goto label_321f50;
        case 0x321f54u: goto label_321f54;
        case 0x321f58u: goto label_321f58;
        case 0x321f5cu: goto label_321f5c;
        case 0x321f60u: goto label_321f60;
        case 0x321f64u: goto label_321f64;
        case 0x321f68u: goto label_321f68;
        case 0x321f6cu: goto label_321f6c;
        case 0x321f70u: goto label_321f70;
        case 0x321f74u: goto label_321f74;
        case 0x321f78u: goto label_321f78;
        case 0x321f7cu: goto label_321f7c;
        case 0x321f80u: goto label_321f80;
        case 0x321f84u: goto label_321f84;
        case 0x321f88u: goto label_321f88;
        case 0x321f8cu: goto label_321f8c;
        case 0x321f90u: goto label_321f90;
        case 0x321f94u: goto label_321f94;
        case 0x321f98u: goto label_321f98;
        case 0x321f9cu: goto label_321f9c;
        case 0x321fa0u: goto label_321fa0;
        case 0x321fa4u: goto label_321fa4;
        case 0x321fa8u: goto label_321fa8;
        case 0x321facu: goto label_321fac;
        case 0x321fb0u: goto label_321fb0;
        case 0x321fb4u: goto label_321fb4;
        case 0x321fb8u: goto label_321fb8;
        case 0x321fbcu: goto label_321fbc;
        case 0x321fc0u: goto label_321fc0;
        case 0x321fc4u: goto label_321fc4;
        case 0x321fc8u: goto label_321fc8;
        case 0x321fccu: goto label_321fcc;
        case 0x321fd0u: goto label_321fd0;
        case 0x321fd4u: goto label_321fd4;
        case 0x321fd8u: goto label_321fd8;
        case 0x321fdcu: goto label_321fdc;
        case 0x321fe0u: goto label_321fe0;
        case 0x321fe4u: goto label_321fe4;
        case 0x321fe8u: goto label_321fe8;
        case 0x321fecu: goto label_321fec;
        case 0x321ff0u: goto label_321ff0;
        case 0x321ff4u: goto label_321ff4;
        case 0x321ff8u: goto label_321ff8;
        case 0x321ffcu: goto label_321ffc;
        case 0x322000u: goto label_322000;
        case 0x322004u: goto label_322004;
        case 0x322008u: goto label_322008;
        case 0x32200cu: goto label_32200c;
        case 0x322010u: goto label_322010;
        case 0x322014u: goto label_322014;
        case 0x322018u: goto label_322018;
        case 0x32201cu: goto label_32201c;
        case 0x322020u: goto label_322020;
        case 0x322024u: goto label_322024;
        case 0x322028u: goto label_322028;
        case 0x32202cu: goto label_32202c;
        case 0x322030u: goto label_322030;
        case 0x322034u: goto label_322034;
        case 0x322038u: goto label_322038;
        case 0x32203cu: goto label_32203c;
        case 0x322040u: goto label_322040;
        case 0x322044u: goto label_322044;
        case 0x322048u: goto label_322048;
        case 0x32204cu: goto label_32204c;
        case 0x322050u: goto label_322050;
        case 0x322054u: goto label_322054;
        case 0x322058u: goto label_322058;
        case 0x32205cu: goto label_32205c;
        case 0x322060u: goto label_322060;
        case 0x322064u: goto label_322064;
        case 0x322068u: goto label_322068;
        case 0x32206cu: goto label_32206c;
        case 0x322070u: goto label_322070;
        case 0x322074u: goto label_322074;
        default: break;
    }

    ctx->pc = 0x321f18u;

label_321f18:
    // 0x321f18: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x321f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_321f1c:
    // 0x321f1c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x321f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_321f20:
    // 0x321f20: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x321f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
label_321f24:
    // 0x321f24: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x321f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
label_321f28:
    // 0x321f28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321f2c:
    // 0x321f2c: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x321f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
label_321f30:
    // 0x321f30: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x321f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
label_321f34:
    // 0x321f34: 0x8c62cba8  lw          $v0, -0x3458($v1)
    ctx->pc = 0x321f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953896)));
label_321f38:
    // 0x321f38: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x321f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_321f3c:
    // 0x321f3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x321f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_321f40:
    // 0x321f40: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x321f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_321f44:
    // 0x321f44: 0x40f809  jalr        $v0
label_321f48:
    if (ctx->pc == 0x321F48u) {
        ctx->pc = 0x321F4Cu;
        goto label_321f4c;
    }
    ctx->pc = 0x321F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321F4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321F44u, 0x321F4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321F4Cu;
label_321f4c:
    // 0x321f4c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x321f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_321f50:
    // 0x321f50: 0x8c64be1c  lw          $a0, -0x41E4($v1)
    ctx->pc = 0x321f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950428)));
label_321f54:
    // 0x321f54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_321f58:
    if (ctx->pc == 0x321F58u) {
        ctx->pc = 0x321F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F54u;
        // 0x321f58: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F5Cu;
        goto label_321f5c;
    }
    ctx->pc = 0x321F54u;
    {
        const bool branch_taken_0x321f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x321F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F54u;
        // 0x321f58: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f54) {
            ctx->pc = 0x321F64u;
            goto label_321f64;
        }
    }
    ctx->pc = 0x321F5Cu;
label_321f5c:
    // 0x321f5c: 0xc0c7a4c  jal         func_31E930
label_321f60:
    if (ctx->pc == 0x321F60u) {
        ctx->pc = 0x321F64u;
        goto label_321f64;
    }
    ctx->pc = 0x321F5Cu;
    SET_GPR_U32(ctx, 31, 0x321F64u);
    ctx->pc = 0x31E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E930u, 0x321F5Cu, 0x321F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F64u;
label_321f64:
    // 0x321f64: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x321f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_321f68:
    // 0x321f68: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x321f68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
label_321f6c:
    // 0x321f6c: 0x8e06ee20  lw          $a2, -0x11E0($s0)
    ctx->pc = 0x321f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962720)));
label_321f70:
    // 0x321f70: 0x24a54618  addiu       $a1, $a1, 0x4618
    ctx->pc = 0x321f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17944));
label_321f74:
    // 0x321f74: 0x24e74620  addiu       $a3, $a3, 0x4620
    ctx->pc = 0x321f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17952));
label_321f78:
    // 0x321f78: 0xc0efefa  jal         func_3BFBE8
label_321f7c:
    if (ctx->pc == 0x321F7Cu) {
        ctx->pc = 0x321F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F78u;
        // 0x321f7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F80u;
        goto label_321f80;
    }
    ctx->pc = 0x321F78u;
    SET_GPR_U32(ctx, 31, 0x321F80u);
    ctx->pc = 0x321F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F78u;
    // 0x321f7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x321F78u, 0x321F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F80u;
label_321f80:
    // 0x321f80: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x321f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_321f84:
    // 0x321f84: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x321f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942272)));
label_321f88:
    // 0x321f88: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x321f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_321f8c:
    // 0x321f8c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_321f90:
    if (ctx->pc == 0x321F90u) {
        ctx->pc = 0x321F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F8Cu;
        // 0x321f90: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F94u;
        goto label_321f94;
    }
    ctx->pc = 0x321F8Cu;
    {
        const bool branch_taken_0x321f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F8Cu;
        // 0x321f90: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f8c) {
            ctx->pc = 0x321FD4u;
            goto label_321fd4;
        }
    }
    ctx->pc = 0x321F94u;
label_321f94:
    // 0x321f94: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x321f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_321f98:
    // 0x321f98: 0x8c439160  lw          $v1, -0x6EA0($v0)
    ctx->pc = 0x321f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938976)));
label_321f9c:
    // 0x321f9c: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x321f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
label_321fa0:
    // 0x321fa0: 0x24e79920  addiu       $a3, $a3, -0x66E0
    ctx->pc = 0x321fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940960));
label_321fa4:
    // 0x321fa4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x321fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_321fa8:
    // 0x321fa8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x321fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_321fac:
    // 0x321fac: 0x3c090047  lui         $t1, 0x47
    ctx->pc = 0x321facu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)71 << 16));
label_321fb0:
    // 0x321fb0: 0x8e06ee20  lw          $a2, -0x11E0($s0)
    ctx->pc = 0x321fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962720)));
label_321fb4:
    // 0x321fb4: 0x24a54638  addiu       $a1, $a1, 0x4638
    ctx->pc = 0x321fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17976));
label_321fb8:
    // 0x321fb8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x321fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321fbc:
    // 0x321fbc: 0x25294648  addiu       $t1, $t1, 0x4648
    ctx->pc = 0x321fbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 17992));
label_321fc0:
    // 0x321fc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x321fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_321fc4:
    // 0x321fc4: 0xc0efefa  jal         func_3BFBE8
label_321fc8:
    if (ctx->pc == 0x321FC8u) {
        ctx->pc = 0x321FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FC4u;
        // 0x321fc8: 0x673821  addu        $a3, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FCCu;
        goto label_321fcc;
    }
    ctx->pc = 0x321FC4u;
    SET_GPR_U32(ctx, 31, 0x321FCCu);
    ctx->pc = 0x321FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321FC4u;
    // 0x321fc8: 0x673821  addu        $a3, $v1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x321FC4u, 0x321FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FCCu;
label_321fcc:
    // 0x321fcc: 0x10000009  b           . + 4 + (0x9 << 2)
label_321fd0:
    if (ctx->pc == 0x321FD0u) {
        ctx->pc = 0x321FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FCCu;
        // 0x321fd0: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FD4u;
        goto label_321fd4;
    }
    ctx->pc = 0x321FCCu;
    {
        const bool branch_taken_0x321fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FCCu;
        // 0x321fd0: 0x27b20100  addiu       $s2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321fcc) {
            ctx->pc = 0x321FF4u;
            goto label_321ff4;
        }
    }
    ctx->pc = 0x321FD4u;
label_321fd4:
    // 0x321fd4: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x321fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_321fd8:
    // 0x321fd8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x321fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_321fdc:
    // 0x321fdc: 0x8c4621e0  lw          $a2, 0x21E0($v0)
    ctx->pc = 0x321fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8672)));
label_321fe0:
    // 0x321fe0: 0x24a54650  addiu       $a1, $a1, 0x4650
    ctx->pc = 0x321fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18000));
label_321fe4:
    // 0x321fe4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x321fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321fe8:
    // 0x321fe8: 0xc0efefa  jal         func_3BFBE8
label_321fec:
    if (ctx->pc == 0x321FECu) {
        ctx->pc = 0x321FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FE8u;
        // 0x321fec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FF0u;
        goto label_321ff0;
    }
    ctx->pc = 0x321FE8u;
    SET_GPR_U32(ctx, 31, 0x321FF0u);
    ctx->pc = 0x321FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321FE8u;
    // 0x321fec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x321FE8u, 0x321FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FF0u;
label_321ff0:
    // 0x321ff0: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x321ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_321ff4:
    // 0x321ff4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x321ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_321ff8:
    // 0x321ff8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x321ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_321ffc:
    // 0x321ffc: 0xc09dc30  jal         func_2770C0
label_322000:
    if (ctx->pc == 0x322000u) {
        ctx->pc = 0x322000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FFCu;
        // 0x322000: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322004u;
        goto label_322004;
    }
    ctx->pc = 0x321FFCu;
    SET_GPR_U32(ctx, 31, 0x322004u);
    ctx->pc = 0x322000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321FFCu;
    // 0x322000: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2770C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2770C0u, 0x321FFCu, 0x322004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322004u;
label_322004:
    // 0x322004: 0x3c105752  lui         $s0, 0x5752
    ctx->pc = 0x322004u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22354 << 16));
label_322008:
    // 0x322008: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x322008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32200c:
    // 0x32200c: 0x36104c44  ori         $s0, $s0, 0x4C44
    ctx->pc = 0x32200cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)19524);
label_322010:
    // 0x322010: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_322014:
    if (ctx->pc == 0x322014u) {
        ctx->pc = 0x322014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322010u;
        // 0x322014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322018u;
        goto label_322018;
    }
    ctx->pc = 0x322010u;
    {
        const bool branch_taken_0x322010 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x322014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322010u;
        // 0x322014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322010) {
            ctx->pc = 0x32205Cu;
            goto label_32205c;
        }
    }
    ctx->pc = 0x322018u;
label_322018:
    // 0x322018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x322018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32201c:
    // 0x32201c: 0xafb00120  sw          $s0, 0x120($sp)
    ctx->pc = 0x32201cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 16));
label_322020:
    // 0x322020: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x322020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_322024:
    // 0x322024: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x322024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_322028:
    // 0x322028: 0xafb10128  sw          $s1, 0x128($sp)
    ctx->pc = 0x322028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 17));
label_32202c:
    // 0x32202c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32202cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_322030:
    // 0x322030: 0xc0dc12a  jal         func_3704A8
label_322034:
    if (ctx->pc == 0x322034u) {
        ctx->pc = 0x322034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322030u;
        // 0x322034: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322038u;
        goto label_322038;
    }
    ctx->pc = 0x322030u;
    SET_GPR_U32(ctx, 31, 0x322038u);
    ctx->pc = 0x322034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322030u;
    // 0x322034: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3704A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3704A8u, 0x322030u, 0x322038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322038u;
label_322038:
    // 0x322038: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x322038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_32203c:
    // 0x32203c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32203cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_322040:
    // 0x322040: 0xc0dc17a  jal         func_3705E8
label_322044:
    if (ctx->pc == 0x322044u) {
        ctx->pc = 0x322044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322040u;
        // 0x322044: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322048u;
        goto label_322048;
    }
    ctx->pc = 0x322040u;
    SET_GPR_U32(ctx, 31, 0x322048u);
    ctx->pc = 0x322044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322040u;
    // 0x322044: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3705E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3705E8u, 0x322040u, 0x322048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322048u;
label_322048:
    // 0x322048: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32204c:
    // 0x32204c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x32204cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_322050:
    // 0x322050: 0xc0c547a  jal         func_3151E8
label_322054:
    if (ctx->pc == 0x322054u) {
        ctx->pc = 0x322054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322050u;
        // 0x322054: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322058u;
        goto label_322058;
    }
    ctx->pc = 0x322050u;
    SET_GPR_U32(ctx, 31, 0x322058u);
    ctx->pc = 0x322054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322050u;
    // 0x322054: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3151E8u, 0x322050u, 0x322058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322058u;
label_322058:
    // 0x322058: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x322058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32205c:
    // 0x32205c: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x32205cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_322060:
    // 0x322060: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x322060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
label_322064:
    // 0x322064: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x322064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_322068:
    // 0x322068: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x322068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_32206c:
    // 0x32206c: 0x3e00008  jr          $ra
label_322070:
    if (ctx->pc == 0x322070u) {
        ctx->pc = 0x322070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32206Cu;
        // 0x322070: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322074u;
        goto label_322074;
    }
    ctx->pc = 0x32206Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32206Cu;
        // 0x322070: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32206Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322074u;
label_322074:
    // 0x322074: 0x0  nop
    ctx->pc = 0x322074u;
    // NOP
    ctx->pc = 0x322078u;
}
