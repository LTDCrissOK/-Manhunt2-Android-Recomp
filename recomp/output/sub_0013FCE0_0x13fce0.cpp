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

// Function: sub_0013FCE0
// Address: 0x13fce0 - 0x13fe40
void sub_0013FCE0_0x13fce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FCE0_0x13fce0");
#endif

    switch (ctx->pc) {
        case 0x13fd2cu: goto label_13fd2c;
        case 0x13fd40u: goto label_13fd40;
        case 0x13fd4cu: goto label_13fd4c;
        case 0x13fd5cu: goto label_13fd5c;
        case 0x13fd68u: goto label_13fd68;
        case 0x13fd78u: goto label_13fd78;
        case 0x13fd94u: goto label_13fd94;
        case 0x13fdb8u: goto label_13fdb8;
        case 0x13fdc4u: goto label_13fdc4;
        case 0x13fdd0u: goto label_13fdd0;
        case 0x13fdecu: goto label_13fdec;
        case 0x13fe00u: goto label_13fe00;
        case 0x13fe18u: goto label_13fe18;
        case 0x13fe24u: goto label_13fe24;
        default: break;
    }

    ctx->pc = 0x13fce0u;

    // 0x13fce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13fce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13fce4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13fce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13fce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13fcec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13fcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13fcf0: 0x24509a08  addiu       $s0, $v0, -0x65F8
    ctx->pc = 0x13fcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13fcf4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13fcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13fcf8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13fcf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fcfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13fcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13fd00: 0x2613020c  addiu       $s3, $s0, 0x20C
    ctx->pc = 0x13fd00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 524));
    // 0x13fd04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13fd08: 0x9243046c  lbu         $v1, 0x46C($s2)
    ctx->pc = 0x13fd08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fd0c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x13fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13fd10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13fd14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13fd18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fd1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13fd20: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13fd24: 0xc04392e  jal         func_10E4B8
    ctx->pc = 0x13FD24u;
    SET_GPR_U32(ctx, 31, 0x13FD2Cu);
    ctx->pc = 0x13FD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD24u;
    // 0x13fd28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4B8u, 0x13FD24u, 0x13FD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD2Cu;
label_13fd2c:
    // 0x13fd2c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x13FD2Cu;
    {
        const bool branch_taken_0x13fd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FD2Cu;
        // 0x13fd30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd2c) {
            ctx->pc = 0x13FE24u;
            goto label_13fe24;
        }
    }
    ctx->pc = 0x13FD34u;
    // 0x13fd34: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13fd34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fd38: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x13FD38u;
    SET_GPR_U32(ctx, 31, 0x13FD40u);
    ctx->pc = 0x13FD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD38u;
    // 0x13fd3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x13FD38u, 0x13FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD40u;
label_13fd40:
    // 0x13fd40: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13fd40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fd44: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x13FD44u;
    SET_GPR_U32(ctx, 31, 0x13FD4Cu);
    ctx->pc = 0x13FD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD44u;
    // 0x13fd48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x13FD44u, 0x13FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD4Cu;
label_13fd4c:
    // 0x13fd4c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13fd4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fd50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x13fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13fd54: 0xc04fe52  jal         func_13F948
    ctx->pc = 0x13FD54u;
    SET_GPR_U32(ctx, 31, 0x13FD5Cu);
    ctx->pc = 0x13FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD54u;
    // 0x13fd58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F948u, 0x13FD54u, 0x13FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD5Cu;
label_13fd5c:
    // 0x13fd5c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13fd5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fd60: 0xc04fea2  jal         func_13FA88
    ctx->pc = 0x13FD60u;
    SET_GPR_U32(ctx, 31, 0x13FD68u);
    ctx->pc = 0x13FD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD60u;
    // 0x13fd64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FA88u, 0x13FD60u, 0x13FD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD68u;
label_13fd68:
    // 0x13fd68: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13fd68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fd6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13fd6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd70: 0xc04fe6a  jal         func_13F9A8
    ctx->pc = 0x13FD70u;
    SET_GPR_U32(ctx, 31, 0x13FD78u);
    ctx->pc = 0x13FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD70u;
    // 0x13fd74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F9A8u, 0x13FD70u, 0x13FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD78u;
label_13fd78:
    // 0x13fd78: 0x8e420620  lw          $v0, 0x620($s2)
    ctx->pc = 0x13fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1568)));
    // 0x13fd7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13fd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd80: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x13fd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13fd84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13fd88: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x13fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13fd8c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x13FD8Cu;
    SET_GPR_U32(ctx, 31, 0x13FD94u);
    ctx->pc = 0x13FD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FD8Cu;
    // 0x13fd90: 0x8c500108  lw          $s0, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x13FD8Cu, 0x13FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD94u;
label_13fd94:
    // 0x13fd94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13fd94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd98: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x13fd98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd9c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x13fd9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fda0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x13fda0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fda4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x13fda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13fda8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x13fda8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fdac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13fdacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fdb0: 0xc04daca  jal         func_136B28
    ctx->pc = 0x13FDB0u;
    SET_GPR_U32(ctx, 31, 0x13FDB8u);
    ctx->pc = 0x13FDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FDB0u;
    // 0x13fdb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x13FDB0u, 0x13FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FDB8u;
label_13fdb8:
    // 0x13fdb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13fdb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fdbc: 0xc046030  jal         func_1180C0
    ctx->pc = 0x13FDBCu;
    SET_GPR_U32(ctx, 31, 0x13FDC4u);
    ctx->pc = 0x13FDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FDBCu;
    // 0x13fdc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x13FDBCu, 0x13FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FDC4u;
label_13fdc4:
    // 0x13fdc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13fdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fdc8: 0xc0460c4  jal         func_118310
    ctx->pc = 0x13FDC8u;
    SET_GPR_U32(ctx, 31, 0x13FDD0u);
    ctx->pc = 0x13FDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FDC8u;
    // 0x13fdcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x13FDC8u, 0x13FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FDD0u;
label_13fdd0:
    // 0x13fdd0: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x13fdd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x13fdd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13fdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fdd8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x13fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13fddc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13fde0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13fde4: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x13FDE4u;
    SET_GPR_U32(ctx, 31, 0x13FDECu);
    ctx->pc = 0x13FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FDE4u;
    // 0x13fde8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x13FDE4u, 0x13FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FDECu;
label_13fdec:
    // 0x13fdec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13fdecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fdf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13fdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fdf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13fdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fdf8: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x13FDF8u;
    SET_GPR_U32(ctx, 31, 0x13FE00u);
    ctx->pc = 0x13FDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FDF8u;
    // 0x13fdfc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x13FDF8u, 0x13FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE00u;
label_13fe00:
    // 0x13fe00: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x13fe00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13fe04: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x13fe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x13fe08: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x13fe08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x13fe0c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x13fe0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13fe10: 0xc043c56  jal         func_10F158
    ctx->pc = 0x13FE10u;
    SET_GPR_U32(ctx, 31, 0x13FE18u);
    ctx->pc = 0x13FE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE10u;
    // 0x13fe14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x13FE10u, 0x13FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE18u;
label_13fe18:
    // 0x13fe18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13fe18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe1c: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x13FE1Cu;
    SET_GPR_U32(ctx, 31, 0x13FE24u);
    ctx->pc = 0x13FE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE1Cu;
    // 0x13fe20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x13FE1Cu, 0x13FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE24u;
label_13fe24:
    // 0x13fe24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13fe24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fe28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13fe28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13fe2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13fe2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fe30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13fe30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13fe34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13fe34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fe38: 0x3e00008  jr          $ra
    ctx->pc = 0x13FE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FE38u;
        // 0x13fe3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FE40u;
}
