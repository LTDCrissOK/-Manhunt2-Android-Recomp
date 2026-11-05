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

// Function: sub_002E9358
// Address: 0x2e9358 - 0x2e9540
void sub_002E9358_0x2e9358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9358_0x2e9358");
#endif

    switch (ctx->pc) {
        case 0x2e9398u: goto label_2e9398;
        case 0x2e93a8u: goto label_2e93a8;
        case 0x2e93bcu: goto label_2e93bc;
        case 0x2e93d8u: goto label_2e93d8;
        case 0x2e93f8u: goto label_2e93f8;
        case 0x2e941cu: goto label_2e941c;
        case 0x2e945cu: goto label_2e945c;
        case 0x2e9484u: goto label_2e9484;
        case 0x2e9494u: goto label_2e9494;
        case 0x2e949cu: goto label_2e949c;
        case 0x2e94b4u: goto label_2e94b4;
        case 0x2e94e8u: goto label_2e94e8;
        case 0x2e9504u: goto label_2e9504;
        case 0x2e9514u: goto label_2e9514;
        default: break;
    }

    ctx->pc = 0x2e9358u;

    // 0x2e9358: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e935c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2e935cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e9360: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e9360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e9364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9368: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e936c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e936cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e9370: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e9370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e9374: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e9374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e9378: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e9378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2e937c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2e937cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2e9380: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2e9380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2e9384: 0x8e220418  lw          $v0, 0x418($s1)
    ctx->pc = 0x2e9384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
    // 0x2e9388: 0x10430063  beq         $v0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x2E9388u;
    {
        const bool branch_taken_0x2e9388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9388u;
        // 0x2e938c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9388) {
            ctx->pc = 0x2E9518u;
            goto label_2e9518;
        }
    }
    ctx->pc = 0x2E9390u;
    // 0x2e9390: 0xc092432  jal         func_2490C8
    ctx->pc = 0x2E9390u;
    SET_GPR_U32(ctx, 31, 0x2E9398u);
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x2E9390u, 0x2E9398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9398u;
label_2e9398:
    // 0x2e9398: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2E9398u;
    {
        const bool branch_taken_0x2e9398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9398u;
        // 0x2e939c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9398) {
            ctx->pc = 0x2E9518u;
            goto label_2e9518;
        }
    }
    ctx->pc = 0x2E93A0u;
    // 0x2e93a0: 0xc0a03d8  jal         func_280F60
    ctx->pc = 0x2E93A0u;
    SET_GPR_U32(ctx, 31, 0x2E93A8u);
    ctx->pc = 0x280F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F60u, 0x2E93A0u, 0x2E93A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E93A8u;
label_2e93a8:
    // 0x2e93a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e93a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e93ac: 0x10430059  beq         $v0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2E93ACu;
    {
        const bool branch_taken_0x2e93ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93ACu;
        // 0x2e93b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93ac) {
            ctx->pc = 0x2E9514u;
            goto label_2e9514;
        }
    }
    ctx->pc = 0x2E93B4u;
    // 0x2e93b4: 0xc0c580c  jal         func_316030
    ctx->pc = 0x2E93B4u;
    SET_GPR_U32(ctx, 31, 0x2E93BCu);
    ctx->pc = 0x2E93B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E93B4u;
    // 0x2e93b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x2E93B4u, 0x2E93BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E93BCu;
label_2e93bc:
    // 0x2e93bc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e93bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2e93c0: 0x9064b9dc  lbu         $a0, -0x4624($v1)
    ctx->pc = 0x2e93c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3FB9DCu));
    // 0x2e93c4: 0x44980a  movz        $s3, $v0, $a0
    ctx->pc = 0x2e93c4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x2e93c8: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E93C8u;
    {
        const bool branch_taken_0x2e93c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e93c8) {
            ctx->pc = 0x2E93CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E93C8u;
            // 0x2e93cc: 0x8e230224  lw          $v1, 0x224($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E93DCu;
            goto label_2e93dc;
        }
    }
    ctx->pc = 0x2E93D0u;
    // 0x2e93d0: 0xc0c4dda  jal         func_313768
    ctx->pc = 0x2E93D0u;
    SET_GPR_U32(ctx, 31, 0x2E93D8u);
    ctx->pc = 0x2E93D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E93D0u;
    // 0x2e93d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313768u, 0x2E93D0u, 0x2E93D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E93D8u;
label_2e93d8:
    // 0x2e93d8: 0x8e230224  lw          $v1, 0x224($s1)
    ctx->pc = 0x2e93d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_2e93dc:
    // 0x2e93dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e93dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e93e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e93e4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E93E4u;
    {
        const bool branch_taken_0x2e93e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93E4u;
        // 0x2e93e8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93e4) {
            ctx->pc = 0x2E944Cu;
            goto label_2e944c;
        }
    }
    ctx->pc = 0x2E93ECu;
    // 0x2e93ec: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x2e93ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e93f0: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x2e93f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e93f4: 0x0  nop
    ctx->pc = 0x2e93f4u;
    // NOP
label_2e93f8:
    // 0x2e93f8: 0x1256000e  beq         $s2, $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x2E93F8u;
    {
        const bool branch_taken_0x2e93f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        ctx->pc = 0x2E93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93F8u;
        // 0x2e93fc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93f8) {
            ctx->pc = 0x2E9434u;
            goto label_2e9434;
        }
    }
    ctx->pc = 0x2E9400u;
    // 0x2e9400: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e9400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e9404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9408: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2e9408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e940c: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2E940Cu;
    {
        const bool branch_taken_0x2e940c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e940c) {
            ctx->pc = 0x2E9410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E940Cu;
            // 0x2e9410: 0x8e230224  lw          $v1, 0x224($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9438u;
            goto label_2e9438;
        }
    }
    ctx->pc = 0x2E9414u;
    // 0x2e9414: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2E9414u;
    SET_GPR_U32(ctx, 31, 0x2E941Cu);
    ctx->pc = 0x2E9418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9414u;
    // 0x2e9418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E9414u, 0x2E941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E941Cu;
label_2e941c:
    // 0x2e941c: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E941Cu;
    {
        const bool branch_taken_0x2e941c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e941c) {
            ctx->pc = 0x2E9420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E941Cu;
            // 0x2e9420: 0x8e230224  lw          $v1, 0x224($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9438u;
            goto label_2e9438;
        }
    }
    ctx->pc = 0x2E9424u;
    // 0x2e9424: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x2e9424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e9428: 0x8c430224  lw          $v1, 0x224($v0)
    ctx->pc = 0x2e9428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x2e942c: 0x50750007  beql        $v1, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E942Cu;
    {
        const bool branch_taken_0x2e942c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x2e942c) {
            ctx->pc = 0x2E9430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E942Cu;
            // 0x2e9430: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E944Cu;
            goto label_2e944c;
        }
    }
    ctx->pc = 0x2E9434u;
label_2e9434:
    // 0x2e9434: 0x8e230224  lw          $v1, 0x224($s1)
    ctx->pc = 0x2e9434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_2e9438:
    // 0x2e9438: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e9438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e943c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9440: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2e9440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e9444: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2E9444u;
    {
        const bool branch_taken_0x2e9444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9444) {
            ctx->pc = 0x2E93F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e93f8;
        }
    }
    ctx->pc = 0x2E944Cu;
label_2e944c:
    // 0x2e944c: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2e944cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2e9450: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2e9450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2e9454: 0xc0c2eba  jal         func_30BAE8
    ctx->pc = 0x2E9454u;
    SET_GPR_U32(ctx, 31, 0x2E945Cu);
    ctx->pc = 0x2E9458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9454u;
    // 0x2e9458: 0x24a517b0  addiu       $a1, $a1, 0x17B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BAE8u, 0x2E9454u, 0x2E945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E945Cu;
label_2e945c:
    // 0x2e945c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9460: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E9460u;
    {
        const bool branch_taken_0x2e9460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9460) {
            ctx->pc = 0x2E9494u;
            goto label_2e9494;
        }
    }
    ctx->pc = 0x2E9468u;
    // 0x2e9468: 0x52800008  beql        $s4, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9468u;
    {
        const bool branch_taken_0x2e9468 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9468) {
            ctx->pc = 0x2E946Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9468u;
            // 0x2e946c: 0x8c850018  lw          $a1, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E948Cu;
            goto label_2e948c;
        }
    }
    ctx->pc = 0x2E9470u;
    // 0x2e9470: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2e9470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e9474: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2e9474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2e9478: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x2e9478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x2e947c: 0xc0c24de  jal         func_309378
    ctx->pc = 0x2E947Cu;
    SET_GPR_U32(ctx, 31, 0x2E9484u);
    ctx->pc = 0x2E9480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E947Cu;
    // 0x2e9480: 0x452824  and         $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309378u, 0x2E947Cu, 0x2E9484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9484u;
label_2e9484:
    // 0x2e9484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9484u;
    {
        const bool branch_taken_0x2e9484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9484) {
            ctx->pc = 0x2E9494u;
            goto label_2e9494;
        }
    }
    ctx->pc = 0x2E948Cu;
label_2e948c:
    // 0x2e948c: 0xc0c24de  jal         func_309378
    ctx->pc = 0x2E948Cu;
    SET_GPR_U32(ctx, 31, 0x2E9494u);
    ctx->pc = 0x2E9490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E948Cu;
    // 0x2e9490: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x309378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309378u, 0x2E948Cu, 0x2E9494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9494u;
label_2e9494:
    // 0x2e9494: 0xc08d1f6  jal         func_2347D8
    ctx->pc = 0x2E9494u;
    SET_GPR_U32(ctx, 31, 0x2E949Cu);
    ctx->pc = 0x2E9498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9494u;
    // 0x2e9498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347D8u, 0x2E9494u, 0x2E949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E949Cu;
label_2e949c:
    // 0x2e949c: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x2e949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x2e94a0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2e94a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2e94a4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E94A4u;
    {
        const bool branch_taken_0x2e94a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e94a4) {
            ctx->pc = 0x2E94A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E94A4u;
            // 0x2e94a8: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E94B8u;
            goto label_2e94b8;
        }
    }
    ctx->pc = 0x2E94ACu;
    // 0x2e94ac: 0xc0ba472  jal         func_2E91C8
    ctx->pc = 0x2E94ACu;
    SET_GPR_U32(ctx, 31, 0x2E94B4u);
    ctx->pc = 0x2E94B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E94ACu;
    // 0x2e94b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E91C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E91C8u, 0x2E94ACu, 0x2E94B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E94B4u;
label_2e94b4:
    // 0x2e94b4: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2e94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_2e94b8:
    // 0x2e94b8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2e94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2e94bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e94bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e94c0: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E94C0u;
    {
        const bool branch_taken_0x2e94c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e94c0) {
            ctx->pc = 0x2E9504u;
            goto label_2e9504;
        }
    }
    ctx->pc = 0x2E94C8u;
    // 0x2e94c8: 0x8e2311e4  lw          $v1, 0x11E4($s1)
    ctx->pc = 0x2e94c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
    // 0x2e94cc: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2e94ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x2e94d0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2e94d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e94d4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2e94d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2e94d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E94D8u;
    {
        const bool branch_taken_0x2e94d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e94d8) {
            ctx->pc = 0x2E9504u;
            goto label_2e9504;
        }
    }
    ctx->pc = 0x2E94E0u;
    // 0x2e94e0: 0xc0c313a  jal         func_30C4E8
    ctx->pc = 0x2E94E0u;
    SET_GPR_U32(ctx, 31, 0x2E94E8u);
    ctx->pc = 0x2E94E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E94E0u;
    // 0x2e94e4: 0x8c640104  lw          $a0, 0x104($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C4E8u, 0x2E94E0u, 0x2E94E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E94E8u;
label_2e94e8:
    // 0x2e94e8: 0x8e2211e4  lw          $v0, 0x11E4($s1)
    ctx->pc = 0x2e94e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
    // 0x2e94ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e94ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e94f0: 0x92250144  lbu         $a1, 0x144($s1)
    ctx->pc = 0x2e94f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x2e94f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e94f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e94f8: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x2e94f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2e94fc: 0xc0c2ecc  jal         func_30BB30
    ctx->pc = 0x2E94FCu;
    SET_GPR_U32(ctx, 31, 0x2E9504u);
    ctx->pc = 0x2E9500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E94FCu;
    // 0x2e9500: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB30u, 0x2E94FCu, 0x2E9504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9504u;
label_2e9504:
    // 0x2e9504: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9504u;
    {
        const bool branch_taken_0x2e9504 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9504u;
        // 0x2e9508: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9504) {
            ctx->pc = 0x2E9518u;
            goto label_2e9518;
        }
    }
    ctx->pc = 0x2E950Cu;
    // 0x2e950c: 0xc0c4de6  jal         func_313798
    ctx->pc = 0x2E950Cu;
    SET_GPR_U32(ctx, 31, 0x2E9514u);
    ctx->pc = 0x313798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313798u, 0x2E950Cu, 0x2E9514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9514u;
label_2e9514:
    // 0x2e9514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e9514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e9518:
    // 0x2e9518: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e9518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e951c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e951cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9520: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e9520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e9524: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e9524u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9528: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e9528u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e952c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2e952cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9530: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2e9530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e9534: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9534u;
        // 0x2e9538: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E953Cu;
    // 0x2e953c: 0x0  nop
    ctx->pc = 0x2e953cu;
    // NOP
    ctx->pc = 0x2e9540u;
}
