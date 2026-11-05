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

// Function: sub_002CE988
// Address: 0x2ce988 - 0x2ceb40
void sub_002CE988_0x2ce988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE988_0x2ce988");
#endif

    switch (ctx->pc) {
        case 0x2ce9dcu: goto label_2ce9dc;
        case 0x2ce9fcu: goto label_2ce9fc;
        case 0x2cea08u: goto label_2cea08;
        case 0x2cea1cu: goto label_2cea1c;
        case 0x2cea34u: goto label_2cea34;
        case 0x2cea3cu: goto label_2cea3c;
        case 0x2cea44u: goto label_2cea44;
        case 0x2cea50u: goto label_2cea50;
        case 0x2cea5cu: goto label_2cea5c;
        case 0x2cea68u: goto label_2cea68;
        case 0x2ceaa4u: goto label_2ceaa4;
        case 0x2ceaacu: goto label_2ceaac;
        case 0x2ceac4u: goto label_2ceac4;
        case 0x2cead8u: goto label_2cead8;
        case 0x2ceae8u: goto label_2ceae8;
        case 0x2ceaf0u: goto label_2ceaf0;
        case 0x2ceafcu: goto label_2ceafc;
        case 0x2ceb04u: goto label_2ceb04;
        default: break;
    }

    ctx->pc = 0x2ce988u;

    // 0x2ce988: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ce988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ce98c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ce98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ce990: 0x8c62b4b8  lw          $v0, -0x4B48($v1)
    ctx->pc = 0x2ce990u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB4B8u));
    // 0x2ce994: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x2ce994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x2ce998: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2ce998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2ce99c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2ce99cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce9a0: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x2ce9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2ce9a4: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2ce9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2ce9a8: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2ce9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2ce9ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ce9acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce9b0: 0xac62b4b8  sw          $v0, -0x4B48($v1)
    ctx->pc = 0x2ce9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948024), GPR_U32(ctx, 2));
    // 0x2ce9b4: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x2ce9b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce9b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce9bc: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2ce9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2ce9c0: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2ce9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2ce9c4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2ce9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2ce9c8: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2ce9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2ce9cc: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2ce9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2ce9d0: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2ce9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2ce9d4: 0xc0b315e  jal         func_2CC578
    ctx->pc = 0x2CE9D4u;
    SET_GPR_U32(ctx, 31, 0x2CE9DCu);
    ctx->pc = 0x2CE9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE9D4u;
    // 0x2ce9d8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC578u, 0x2CE9D4u, 0x2CE9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE9DCu;
label_2ce9dc:
    // 0x2ce9dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ce9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ce9e0: 0x90432c2c  lbu         $v1, 0x2C2C($v0)
    ctx->pc = 0x2ce9e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x482C2Cu));
    // 0x2ce9e4: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2CE9E4u;
    {
        const bool branch_taken_0x2ce9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce9e4) {
            ctx->pc = 0x2CEAF4u;
            goto label_2ceaf4;
        }
    }
    ctx->pc = 0x2CE9ECu;
    // 0x2ce9ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ce9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce9f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ce9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ce9f4: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x2CE9F4u;
    SET_GPR_U32(ctx, 31, 0x2CE9FCu);
    ctx->pc = 0x2CE9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE9F4u;
    // 0x2ce9f8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x2CE9F4u, 0x2CE9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE9FCu;
label_2ce9fc:
    // 0x2ce9fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ce9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cea00: 0xc0b3962  jal         func_2CE588
    ctx->pc = 0x2CEA00u;
    SET_GPR_U32(ctx, 31, 0x2CEA08u);
    ctx->pc = 0x2CEA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA00u;
    // 0x2cea04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE588u, 0x2CEA00u, 0x2CEA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA08u;
label_2cea08:
    // 0x2cea08: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cea08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cea0c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2CEA0Cu;
    {
        const bool branch_taken_0x2cea0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA0Cu;
        // 0x2cea10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea0c) {
            ctx->pc = 0x2CEAF4u;
            goto label_2ceaf4;
        }
    }
    ctx->pc = 0x2CEA14u;
    // 0x2cea14: 0xc0b31be  jal         func_2CC6F8
    ctx->pc = 0x2CEA14u;
    SET_GPR_U32(ctx, 31, 0x2CEA1Cu);
    ctx->pc = 0x2CEA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA14u;
    // 0x2cea18: 0x3c130048  lui         $s3, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC6F8u, 0x2CEA14u, 0x2CEA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA1Cu;
label_2cea1c:
    // 0x2cea1c: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x2cea1cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x2cea20: 0x8e642c28  lw          $a0, 0x2C28($s3)
    ctx->pc = 0x2cea20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11304)));
    // 0x2cea24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cea24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cea28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea2c: 0xc0b308c  jal         func_2CC230
    ctx->pc = 0x2CEA2Cu;
    SET_GPR_U32(ctx, 31, 0x2CEA34u);
    ctx->pc = 0x2CEA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA2Cu;
    // 0x2cea30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC230u, 0x2CEA2Cu, 0x2CEA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA34u;
label_2cea34:
    // 0x2cea34: 0xc0b3278  jal         func_2CC9E0
    ctx->pc = 0x2CEA34u;
    SET_GPR_U32(ctx, 31, 0x2CEA3Cu);
    ctx->pc = 0x2CC9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC9E0u, 0x2CEA34u, 0x2CEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA3Cu;
label_2cea3c:
    // 0x2cea3c: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2CEA3Cu;
    SET_GPR_U32(ctx, 31, 0x2CEA44u);
    ctx->pc = 0x2CEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA3Cu;
    // 0x2cea40: 0xc7ac0024  lwc1        $f12, 0x24($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2CEA3Cu, 0x2CEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA44u;
label_2cea44:
    // 0x2cea44: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2cea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cea48: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2CEA48u;
    SET_GPR_U32(ctx, 31, 0x2CEA50u);
    ctx->pc = 0x2CEA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA48u;
    // 0x2cea4c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2CEA48u, 0x2CEA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA50u;
label_2cea50:
    // 0x2cea50: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x2cea50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cea54: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2CEA54u;
    SET_GPR_U32(ctx, 31, 0x2CEA5Cu);
    ctx->pc = 0x2CEA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA54u;
    // 0x2cea58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2CEA54u, 0x2CEA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA5Cu;
label_2cea5c:
    // 0x2cea5c: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2cea5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cea60: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2CEA60u;
    SET_GPR_U32(ctx, 31, 0x2CEA68u);
    ctx->pc = 0x2CEA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA60u;
    // 0x2cea64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2CEA60u, 0x2CEA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA68u;
label_2cea68:
    // 0x2cea68: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x2cea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2cea6c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2cea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2cea70: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2cea70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2cea74: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2cea74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cea78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2cea7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea80: 0x240a1000  addiu       $t2, $zero, 0x1000
    ctx->pc = 0x2cea80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2cea84: 0x240b1000  addiu       $t3, $zero, 0x1000
    ctx->pc = 0x2cea84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2cea88: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2cea88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2cea8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cea8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cea90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cea94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea98: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2cea98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2cea9c: 0xc0b3282  jal         func_2CCA08
    ctx->pc = 0x2CEA9Cu;
    SET_GPR_U32(ctx, 31, 0x2CEAA4u);
    ctx->pc = 0x2CEAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA9Cu;
    // 0x2ceaa0: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCA08u, 0x2CEA9Cu, 0x2CEAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAA4u;
label_2ceaa4:
    // 0x2ceaa4: 0xc0b32b2  jal         func_2CCAC8
    ctx->pc = 0x2CEAA4u;
    SET_GPR_U32(ctx, 31, 0x2CEAACu);
    ctx->pc = 0x2CCAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCAC8u, 0x2CEAA4u, 0x2CEAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAACu;
label_2ceaac:
    // 0x2ceaac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ceaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ceab0: 0x8e642c28  lw          $a0, 0x2C28($s3)
    ctx->pc = 0x2ceab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11304)));
    // 0x2ceab4: 0x8c452c38  lw          $a1, 0x2C38($v0)
    ctx->pc = 0x2ceab4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482C38u));
    // 0x2ceab8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ceab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceabc: 0xc0b308c  jal         func_2CC230
    ctx->pc = 0x2CEABCu;
    SET_GPR_U32(ctx, 31, 0x2CEAC4u);
    ctx->pc = 0x2CEAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEABCu;
    // 0x2ceac0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC230u, 0x2CEABCu, 0x2CEAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAC4u;
label_2ceac4:
    // 0x2ceac4: 0x92c22c3c  lbu         $v0, 0x2C3C($s6)
    ctx->pc = 0x2ceac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 11324)));
    // 0x2ceac8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2CEAC8u;
    {
        const bool branch_taken_0x2ceac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ceac8) {
            ctx->pc = 0x2CEACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEAC8u;
            // 0x2ceacc: 0xa2c02c3c  sb          $zero, 0x2C3C($s6) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 22), 11324), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEAF4u;
            goto label_2ceaf4;
        }
    }
    ctx->pc = 0x2CEAD0u;
    // 0x2cead0: 0xc0b3278  jal         func_2CC9E0
    ctx->pc = 0x2CEAD0u;
    SET_GPR_U32(ctx, 31, 0x2CEAD8u);
    ctx->pc = 0x2CEAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEAD0u;
    // 0x2cead4: 0x3c10006c  lui         $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC9E0u, 0x2CEAD0u, 0x2CEAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAD8u;
label_2cead8:
    // 0x2cead8: 0xae17aff0  sw          $s7, -0x5010($s0)
    ctx->pc = 0x2cead8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294946800), GPR_U32(ctx, 23));
    // 0x2ceadc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ceadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ceae0: 0xc0b3962  jal         func_2CE588
    ctx->pc = 0x2CEAE0u;
    SET_GPR_U32(ctx, 31, 0x2CEAE8u);
    ctx->pc = 0x2CEAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEAE0u;
    // 0x2ceae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE588u, 0x2CEAE0u, 0x2CEAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAE8u;
label_2ceae8:
    // 0x2ceae8: 0xc0b32b2  jal         func_2CCAC8
    ctx->pc = 0x2CEAE8u;
    SET_GPR_U32(ctx, 31, 0x2CEAF0u);
    ctx->pc = 0x2CEAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEAE8u;
    // 0x2ceaec: 0xae00aff0  sw          $zero, -0x5010($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294946800), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCAC8u, 0x2CEAE8u, 0x2CEAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAF0u;
label_2ceaf0:
    // 0x2ceaf0: 0xa2c02c3c  sb          $zero, 0x2C3C($s6)
    ctx->pc = 0x2ceaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 11324), (uint8_t)GPR_U32(ctx, 0));
label_2ceaf4:
    // 0x2ceaf4: 0xc0b31a0  jal         func_2CC680
    ctx->pc = 0x2CEAF4u;
    SET_GPR_U32(ctx, 31, 0x2CEAFCu);
    ctx->pc = 0x2CC680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC680u, 0x2CEAF4u, 0x2CEAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAFCu;
label_2ceafc:
    // 0x2ceafc: 0xc0b31a8  jal         func_2CC6A0
    ctx->pc = 0x2CEAFCu;
    SET_GPR_U32(ctx, 31, 0x2CEB04u);
    ctx->pc = 0x2CEB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEAFCu;
    // 0x2ceb00: 0x8fc4b4b8  lw          $a0, -0x4B48($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC6A0u, 0x2CEAFCu, 0x2CEB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB04u;
label_2ceb04:
    // 0x2ceb04: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2ceb04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ceb08: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2ceb08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ceb0c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2ceb0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ceb10: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2ceb10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ceb14: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2ceb14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ceb18: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2ceb18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ceb1c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2ceb1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ceb20: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x2ceb20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2ceb24: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2ceb24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ceb28: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2ceb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2ceb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB2Cu;
        // 0x2ceb30: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEB34u;
    // 0x2ceb34: 0x0  nop
    ctx->pc = 0x2ceb34u;
    // NOP
    // 0x2ceb38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ceb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ceb3c: 0x0  nop
    ctx->pc = 0x2ceb3cu;
    // NOP
    ctx->pc = 0x2ceb40u;
}
