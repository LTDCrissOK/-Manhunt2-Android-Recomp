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

// Function: sub_00276DF8
// Address: 0x276df8 - 0x276fe0
void sub_00276DF8_0x276df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276DF8_0x276df8");
#endif

    switch (ctx->pc) {
        case 0x276e60u: goto label_276e60;
        case 0x276e8cu: goto label_276e8c;
        case 0x276ea4u: goto label_276ea4;
        case 0x276eb8u: goto label_276eb8;
        case 0x276ec0u: goto label_276ec0;
        case 0x276ee8u: goto label_276ee8;
        case 0x276f08u: goto label_276f08;
        case 0x276f20u: goto label_276f20;
        case 0x276f30u: goto label_276f30;
        case 0x276f3cu: goto label_276f3c;
        case 0x276f94u: goto label_276f94;
        case 0x276fa0u: goto label_276fa0;
        case 0x276facu: goto label_276fac;
        default: break;
    }

    ctx->pc = 0x276df8u;

    // 0x276df8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x276df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x276dfc: 0x28840003  slti        $a0, $a0, 0x3
    ctx->pc = 0x276dfcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x276e00: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x276e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x276e04: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x276e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x276e08: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x276e08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e0c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x276e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x276e10: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x276e10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e14: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x276e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x276e18: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x276e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x276e1c: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x276e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x276e20: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x276e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x276e24: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x276e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x276e28: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x276e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x276e2c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276E2Cu;
    {
        const bool branch_taken_0x276e2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x276E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E2Cu;
        // 0x276e30: 0xffbf0148  sd          $ra, 0x148($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e2c) {
            ctx->pc = 0x276E3Cu;
            goto label_276e3c;
        }
    }
    ctx->pc = 0x276E34u;
    // 0x276e34: 0x8cb50008  lw          $s5, 0x8($a1)
    ctx->pc = 0x276e34u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x276e38: 0x8cb40004  lw          $s4, 0x4($a1)
    ctx->pc = 0x276e38u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_276e3c:
    // 0x276e3c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x276e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x276e40: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x276e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x276e44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x276e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e48: 0xac809e40  sw          $zero, -0x61C0($a0)
    ctx->pc = 0x276e48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F9E40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9E40u, _value); } while (0);
    // 0x276e4c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x276e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e50: 0x24769e28  addiu       $s6, $v1, -0x61D8
    ctx->pc = 0x276e50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942248));
    // 0x276e54: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x276e54u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x276e58: 0x3c13004c  lui         $s3, 0x4C
    ctx->pc = 0x276e58u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)76 << 16));
    // 0x276e5c: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x276e5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_276e60:
    // 0x276e60: 0x8c829e40  lw          $v0, -0x61C0($a0)
    ctx->pc = 0x276e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942272)));
    // 0x276e64: 0x545e000b  bnel        $v0, $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x276E64u;
    {
        const bool branch_taken_0x276e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x276e64) {
            ctx->pc = 0x276E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276E64u;
            // 0x276e68: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276E94u;
            goto label_276e94;
        }
    }
    ctx->pc = 0x276E6Cu;
    // 0x276e6c: 0x12800036  beqz        $s4, . + 4 + (0x36 << 2)
    ctx->pc = 0x276E6Cu;
    {
        const bool branch_taken_0x276e6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x276E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E6Cu;
        // 0x276e70: 0x8e429e40  lw          $v0, -0x61C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e6c) {
            ctx->pc = 0x276F48u;
            goto label_276f48;
        }
    }
    ctx->pc = 0x276E74u;
    // 0x276e74: 0x12a00034  beqz        $s5, . + 4 + (0x34 << 2)
    ctx->pc = 0x276E74u;
    {
        const bool branch_taken_0x276e74 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x276E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E74u;
        // 0x276e78: 0x2664ed20  addiu       $a0, $s3, -0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e74) {
            ctx->pc = 0x276F48u;
            goto label_276f48;
        }
    }
    ctx->pc = 0x276E7Cu;
    // 0x276e7c: 0x8ec5000c  lw          $a1, 0xC($s6)
    ctx->pc = 0x276e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x276e80: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x276e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e84: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x276E84u;
    SET_GPR_U32(ctx, 31, 0x276E8Cu);
    ctx->pc = 0x276E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276E84u;
    // 0x276e88: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x276E84u, 0x276E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E8Cu;
label_276e8c:
    // 0x276e8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x276E8Cu;
    {
        const bool branch_taken_0x276e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E8Cu;
        // 0x276e90: 0x3c05004c  lui         $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e8c) {
            ctx->pc = 0x276EA8u;
            goto label_276ea8;
        }
    }
    ctx->pc = 0x276E94u;
label_276e94:
    // 0x276e94: 0x2664ed20  addiu       $a0, $s3, -0x12E0
    ctx->pc = 0x276e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962464));
    // 0x276e98: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x276e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x276e9c: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x276E9Cu;
    SET_GPR_U32(ctx, 31, 0x276EA4u);
    ctx->pc = 0x276EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276E9Cu;
    // 0x276ea0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x276E9Cu, 0x276EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276EA4u;
label_276ea4:
    // 0x276ea4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x276ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_276ea8:
    // 0x276ea8: 0x8e229e40  lw          $v0, -0x61C0($s1)
    ctx->pc = 0x276ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942272)));
    // 0x276eac: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x276EACu;
    {
        const bool branch_taken_0x276eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276EACu;
        // 0x276eb0: 0x24a5ed20  addiu       $a1, $a1, -0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276eac) {
            ctx->pc = 0x276EE0u;
            goto label_276ee0;
        }
    }
    ctx->pc = 0x276EB4u;
    // 0x276eb4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x276eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276eb8:
    // 0x276eb8: 0xc0ee34a  jal         func_3B8D28
    ctx->pc = 0x276EB8u;
    SET_GPR_U32(ctx, 31, 0x276EC0u);
    ctx->pc = 0x3B8D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8D28u, 0x276EB8u, 0x276EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276EC0u;
label_276ec0:
    // 0x276ec0: 0x0  nop
    ctx->pc = 0x276ec0u;
    // NOP
    // 0x276ec4: 0x0  nop
    ctx->pc = 0x276ec4u;
    // NOP
    // 0x276ec8: 0x1050fffb  beq         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x276EC8u;
    {
        const bool branch_taken_0x276ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x276ec8) {
            ctx->pc = 0x276EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276eb8;
        }
    }
    ctx->pc = 0x276ED0u;
    // 0x276ed0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x276ED0u;
    {
        const bool branch_taken_0x276ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x276ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276ED0u;
        // 0x276ed4: 0x8e429e40  lw          $v0, -0x61C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ed0) {
            ctx->pc = 0x276F5Cu;
            goto label_276f5c;
        }
    }
    ctx->pc = 0x276ED8u;
    // 0x276ed8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x276ED8u;
    {
        const bool branch_taken_0x276ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276ED8u;
        // 0x276edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ed8) {
            ctx->pc = 0x276F4Cu;
            goto label_276f4c;
        }
    }
    ctx->pc = 0x276EE0u;
label_276ee0:
    // 0x276ee0: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x276EE0u;
    SET_GPR_U32(ctx, 31, 0x276EE8u);
    ctx->pc = 0x276EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276EE0u;
    // 0x276ee4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x276EE0u, 0x276EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276EE8u;
label_276ee8:
    // 0x276ee8: 0x8e239e40  lw          $v1, -0x61C0($s1)
    ctx->pc = 0x276ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942272)));
    // 0x276eec: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x276eecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x276ef0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x276EF0u;
    {
        const bool branch_taken_0x276ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x276ef0) {
            ctx->pc = 0x276F10u;
            goto label_276f10;
        }
    }
    ctx->pc = 0x276EF8u;
    // 0x276ef8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x276ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x276efc: 0x24a58278  addiu       $a1, $a1, -0x7D88
    ctx->pc = 0x276efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935160));
    // 0x276f00: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x276F00u;
    SET_GPR_U32(ctx, 31, 0x276F08u);
    ctx->pc = 0x276F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276F00u;
    // 0x276f04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x276F00u, 0x276F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F08u;
label_276f08:
    // 0x276f08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x276F08u;
    {
        const bool branch_taken_0x276f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F08u;
        // 0x276f0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f08) {
            ctx->pc = 0x276F24u;
            goto label_276f24;
        }
    }
    ctx->pc = 0x276F10u;
label_276f10:
    // 0x276f10: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x276f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x276f14: 0x24a58260  addiu       $a1, $a1, -0x7DA0
    ctx->pc = 0x276f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935136));
    // 0x276f18: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x276F18u;
    SET_GPR_U32(ctx, 31, 0x276F20u);
    ctx->pc = 0x276F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276F18u;
    // 0x276f1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x276F18u, 0x276F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F20u;
label_276f20:
    // 0x276f20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x276f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_276f24:
    // 0x276f24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x276f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276f28: 0xc0f3872  jal         func_3CE1C8
    ctx->pc = 0x276F28u;
    SET_GPR_U32(ctx, 31, 0x276F30u);
    ctx->pc = 0x276F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276F28u;
    // 0x276f2c: 0x240601ff  addiu       $a2, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE1C8u, 0x276F28u, 0x276F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F30u;
label_276f30:
    // 0x276f30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x276f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f34: 0xc0f3916  jal         func_3CE458
    ctx->pc = 0x276F34u;
    SET_GPR_U32(ctx, 31, 0x276F3Cu);
    ctx->pc = 0x276F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276F34u;
    // 0x276f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE458u, 0x276F34u, 0x276F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F3Cu;
label_276f3c:
    // 0x276f3c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x276F3Cu;
    {
        const bool branch_taken_0x276f3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x276F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F3Cu;
        // 0x276f40: 0x8e229e40  lw          $v0, -0x61C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f3c) {
            ctx->pc = 0x276F60u;
            goto label_276f60;
        }
    }
    ctx->pc = 0x276F44u;
    // 0x276f44: 0x8e429e40  lw          $v0, -0x61C0($s2)
    ctx->pc = 0x276f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942272)));
label_276f48:
    // 0x276f48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x276f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_276f4c:
    // 0x276f4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x276f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x276f50: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x276f50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x276f54: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x276F54u;
    {
        const bool branch_taken_0x276f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F54u;
        // 0x276f58: 0xae429e40  sw          $v0, -0x61C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294942272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f54) {
            ctx->pc = 0x276E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276e60;
        }
    }
    ctx->pc = 0x276F5Cu;
label_276f5c:
    // 0x276f5c: 0x8e229e40  lw          $v0, -0x61C0($s1)
    ctx->pc = 0x276f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942272)));
label_276f60:
    // 0x276f60: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x276F60u;
    {
        const bool branch_taken_0x276f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276f60) {
            ctx->pc = 0x276F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276F60u;
            // 0x276f64: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276F74u;
            goto label_276f74;
        }
    }
    ctx->pc = 0x276F68u;
    // 0x276f68: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x276f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x276f6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x276F6Cu;
    {
        const bool branch_taken_0x276f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F6Cu;
        // 0x276f70: 0x24428288  addiu       $v0, $v0, -0x7D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276f6c) {
            ctx->pc = 0x276F78u;
            goto label_276f78;
        }
    }
    ctx->pc = 0x276F74u;
label_276f74:
    // 0x276f74: 0x24428290  addiu       $v0, $v0, -0x7D70
    ctx->pc = 0x276f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
label_276f78:
    // 0x276f78: 0xaee29e3c  sw          $v0, -0x61C4($s7)
    ctx->pc = 0x276f78u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294942268), GPR_U32(ctx, 2));
    // 0x276f7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x276f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x276f80: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x276f80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x276f84: 0x2610ec20  addiu       $s0, $s0, -0x13E0
    ctx->pc = 0x276f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962208));
    // 0x276f88: 0x8c459e38  lw          $a1, -0x61C8($v0)
    ctx->pc = 0x276f88u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3F9E38u));
    // 0x276f8c: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x276F8Cu;
    SET_GPR_U32(ctx, 31, 0x276F94u);
    ctx->pc = 0x276F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276F8Cu;
    // 0x276f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x276F8Cu, 0x276F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F94u;
label_276f94:
    // 0x276f94: 0x8ee59e3c  lw          $a1, -0x61C4($s7)
    ctx->pc = 0x276f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294942268)));
    // 0x276f98: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x276F98u;
    SET_GPR_U32(ctx, 31, 0x276FA0u);
    ctx->pc = 0x276F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276F98u;
    // 0x276f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x276F98u, 0x276FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276FA0u;
label_276fa0:
    // 0x276fa0: 0x8e249e40  lw          $a0, -0x61C0($s1)
    ctx->pc = 0x276fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942272)));
    // 0x276fa4: 0xc09e914  jal         func_27A450
    ctx->pc = 0x276FA4u;
    SET_GPR_U32(ctx, 31, 0x276FACu);
    ctx->pc = 0x276FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276FA4u;
    // 0x276fa8: 0x2c840002  sltiu       $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A450u, 0x276FA4u, 0x276FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276FACu;
label_276fac:
    // 0x276fac: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x276facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x276fb0: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x276fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x276fb4: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x276fb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x276fb8: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x276fb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x276fbc: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x276fbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x276fc0: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x276fc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x276fc4: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x276fc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x276fc8: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x276fc8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x276fcc: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x276fccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x276fd0: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x276fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x276fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x276FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FD4u;
        // 0x276fd8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276FDCu;
    // 0x276fdc: 0x0  nop
    ctx->pc = 0x276fdcu;
    // NOP
    ctx->pc = 0x276fe0u;
}
