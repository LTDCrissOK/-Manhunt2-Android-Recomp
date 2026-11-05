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

// Function: sub_00164EA8
// Address: 0x164ea8 - 0x165078
void sub_00164EA8_0x164ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164EA8_0x164ea8");
#endif

    switch (ctx->pc) {
        case 0x164ee0u: goto label_164ee0;
        case 0x164ef4u: goto label_164ef4;
        case 0x164f08u: goto label_164f08;
        case 0x164f2cu: goto label_164f2c;
        case 0x164f38u: goto label_164f38;
        case 0x164f48u: goto label_164f48;
        case 0x164f60u: goto label_164f60;
        case 0x164f74u: goto label_164f74;
        case 0x164f8cu: goto label_164f8c;
        case 0x164fa4u: goto label_164fa4;
        case 0x164fd8u: goto label_164fd8;
        case 0x164fe0u: goto label_164fe0;
        case 0x164ff0u: goto label_164ff0;
        case 0x165010u: goto label_165010;
        case 0x16503cu: goto label_16503c;
        case 0x165058u: goto label_165058;
        default: break;
    }

    ctx->pc = 0x164ea8u;

    // 0x164ea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x164eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164eb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x164eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x164eb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x164eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164eb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164ebc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x164ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x164ec0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x164ec4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x164ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164ec8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x164ec8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x164ecc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x164eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x164ed0: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x164ED0u;
    {
        const bool branch_taken_0x164ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164ED0u;
        // 0x164ed4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ed0) {
            ctx->pc = 0x165058u;
            goto label_165058;
        }
    }
    ctx->pc = 0x164ED8u;
    // 0x164ed8: 0xc059cfc  jal         func_1673F0
    ctx->pc = 0x164ED8u;
    SET_GPR_U32(ctx, 31, 0x164EE0u);
    ctx->pc = 0x1673F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1673F0u, 0x164ED8u, 0x164EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164EE0u;
label_164ee0:
    // 0x164ee0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x164ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ee4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x164EE4u;
    {
        const bool branch_taken_0x164ee4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x164EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EE4u;
        // 0x164ee8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ee4) {
            ctx->pc = 0x164EFCu;
            goto label_164efc;
        }
    }
    ctx->pc = 0x164EECu;
    // 0x164eec: 0xc059d1a  jal         func_167468
    ctx->pc = 0x164EECu;
    SET_GPR_U32(ctx, 31, 0x164EF4u);
    ctx->pc = 0x164EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164EECu;
    // 0x164ef0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167468u, 0x164EECu, 0x164EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164EF4u;
label_164ef4:
    // 0x164ef4: 0x54400059  bnel        $v0, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x164EF4u;
    {
        const bool branch_taken_0x164ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164ef4) {
            ctx->pc = 0x164EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164EF4u;
            // 0x164ef8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16505Cu;
            goto label_16505c;
        }
    }
    ctx->pc = 0x164EFCu;
label_164efc:
    // 0x164efc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f00: 0xc059a48  jal         func_166920
    ctx->pc = 0x164F00u;
    SET_GPR_U32(ctx, 31, 0x164F08u);
    ctx->pc = 0x164F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F00u;
    // 0x164f04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166920u, 0x164F00u, 0x164F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F08u;
label_164f08:
    // 0x164f08: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x164F08u;
    {
        const bool branch_taken_0x164f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f08) {
            ctx->pc = 0x164F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164F08u;
            // 0x164f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164F7Cu;
            goto label_164f7c;
        }
    }
    ctx->pc = 0x164F10u;
    // 0x164f10: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x164f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x164f14: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x164f14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x164f18: 0x2610b060  addiu       $s0, $s0, -0x4FA0
    ctx->pc = 0x164f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946912));
    // 0x164f1c: 0x8e4602e0  lw          $a2, 0x2E0($s2)
    ctx->pc = 0x164f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
    // 0x164f20: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x164f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x164f24: 0xc04ae0e  jal         func_12B838
    ctx->pc = 0x164F24u;
    SET_GPR_U32(ctx, 31, 0x164F2Cu);
    ctx->pc = 0x164F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F24u;
    // 0x164f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B838u, 0x164F24u, 0x164F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F2Cu;
label_164f2c:
    // 0x164f2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f30: 0xc04f0b6  jal         func_13C2D8
    ctx->pc = 0x164F30u;
    SET_GPR_U32(ctx, 31, 0x164F38u);
    ctx->pc = 0x164F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F30u;
    // 0x164f34: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x164F30u, 0x164F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F38u;
label_164f38:
    // 0x164f38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x164f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f3c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x164f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164f40: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x164F40u;
    SET_GPR_U32(ctx, 31, 0x164F48u);
    ctx->pc = 0x164F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F40u;
    // 0x164f44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x164F40u, 0x164F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F48u;
label_164f48:
    // 0x164f48: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x164f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x164f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f50: 0x8e4602e0  lw          $a2, 0x2E0($s2)
    ctx->pc = 0x164f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
    // 0x164f54: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x164f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f58: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x164F58u;
    SET_GPR_U32(ctx, 31, 0x164F60u);
    ctx->pc = 0x164F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F58u;
    // 0x164f5c: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x164F58u, 0x164F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F60u;
label_164f60:
    // 0x164f60: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x164f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x164f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f68: 0x8e4602e0  lw          $a2, 0x2E0($s2)
    ctx->pc = 0x164f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
    // 0x164f6c: 0xc04add4  jal         func_12B750
    ctx->pc = 0x164F6Cu;
    SET_GPR_U32(ctx, 31, 0x164F74u);
    ctx->pc = 0x164F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F6Cu;
    // 0x164f70: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B750u, 0x164F6Cu, 0x164F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F74u;
label_164f74:
    // 0x164f74: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x164F74u;
    {
        const bool branch_taken_0x164f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F74u;
        // 0x164f78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f74) {
            ctx->pc = 0x16505Cu;
            goto label_16505c;
        }
    }
    ctx->pc = 0x164F7Cu;
label_164f7c:
    // 0x164f7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x164f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164f80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x164f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164f84: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x164F84u;
    SET_GPR_U32(ctx, 31, 0x164F8Cu);
    ctx->pc = 0x164F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F84u;
    // 0x164f88: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x164F84u, 0x164F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F8Cu;
label_164f8c:
    // 0x164f8c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x164F8Cu;
    {
        const bool branch_taken_0x164f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F8Cu;
        // 0x164f90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f8c) {
            ctx->pc = 0x164FD0u;
            goto label_164fd0;
        }
    }
    ctx->pc = 0x164F94u;
    // 0x164f94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x164f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164f98: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x164f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164f9c: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x164F9Cu;
    SET_GPR_U32(ctx, 31, 0x164FA4u);
    ctx->pc = 0x164FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F9Cu;
    // 0x164fa0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x164F9Cu, 0x164FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FA4u;
label_164fa4:
    // 0x164fa4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x164FA4u;
    {
        const bool branch_taken_0x164fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164fa4) {
            ctx->pc = 0x164FD0u;
            goto label_164fd0;
        }
    }
    ctx->pc = 0x164FACu;
    // 0x164fac: 0x5620002b  bnel        $s1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x164FACu;
    {
        const bool branch_taken_0x164fac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x164fac) {
            ctx->pc = 0x164FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164FACu;
            // 0x164fb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16505Cu;
            goto label_16505c;
        }
    }
    ctx->pc = 0x164FB4u;
    // 0x164fb4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x164fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x164fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164fbc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x164FBCu;
    {
        const bool branch_taken_0x164fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164fbc) {
            ctx->pc = 0x164FE8u;
            goto label_164fe8;
        }
    }
    ctx->pc = 0x164FC4u;
    // 0x164fc4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x164fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x164fc8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164FC8u;
    {
        const bool branch_taken_0x164fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164fc8) {
            ctx->pc = 0x164FE8u;
            goto label_164fe8;
        }
    }
    ctx->pc = 0x164FD0u;
label_164fd0:
    // 0x164fd0: 0xc05964a  jal         func_165928
    ctx->pc = 0x164FD0u;
    SET_GPR_U32(ctx, 31, 0x164FD8u);
    ctx->pc = 0x164FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164FD0u;
    // 0x164fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165928u, 0x164FD0u, 0x164FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FD8u;
label_164fd8:
    // 0x164fd8: 0xc059670  jal         func_1659C0
    ctx->pc = 0x164FD8u;
    SET_GPR_U32(ctx, 31, 0x164FE0u);
    ctx->pc = 0x164FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164FD8u;
    // 0x164fdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659C0u, 0x164FD8u, 0x164FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FE0u;
label_164fe0:
    // 0x164fe0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x164FE0u;
    {
        const bool branch_taken_0x164fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FE0u;
        // 0x164fe4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fe0) {
            ctx->pc = 0x16505Cu;
            goto label_16505c;
        }
    }
    ctx->pc = 0x164FE8u;
label_164fe8:
    // 0x164fe8: 0xc05964a  jal         func_165928
    ctx->pc = 0x164FE8u;
    SET_GPR_U32(ctx, 31, 0x164FF0u);
    ctx->pc = 0x164FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164FE8u;
    // 0x164fec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165928u, 0x164FE8u, 0x164FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FF0u;
label_164ff0:
    // 0x164ff0: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x164ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x164ff4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x164FF4u;
    {
        const bool branch_taken_0x164ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FF4u;
        // 0x164ff8: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ff4) {
            ctx->pc = 0x165050u;
            goto label_165050;
        }
    }
    ctx->pc = 0x164FFCu;
    // 0x164ffc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x164ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165000: 0x24539b10  addiu       $s3, $v0, -0x64F0
    ctx->pc = 0x165000u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x165004: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x165004u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x165008: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x165008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16500c: 0x0  nop
    ctx->pc = 0x16500cu;
    // NOP
label_165010:
    // 0x165010: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x165010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x165014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165018: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x165018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16501c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16501Cu;
    {
        const bool branch_taken_0x16501c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16501Cu;
        // 0x165020: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16501c) {
            ctx->pc = 0x16503Cu;
            goto label_16503c;
        }
    }
    ctx->pc = 0x165024u;
    // 0x165024: 0x8e4702e0  lw          $a3, 0x2E0($s2)
    ctx->pc = 0x165024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
    // 0x165028: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x165028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16502c: 0x262487a0  addiu       $a0, $s1, -0x7860
    ctx->pc = 0x16502cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936480));
    // 0x165030: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x165030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165034: 0xc04668a  jal         func_119A28
    ctx->pc = 0x165034u;
    SET_GPR_U32(ctx, 31, 0x16503Cu);
    ctx->pc = 0x165038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165034u;
    // 0x165038: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x165034u, 0x16503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16503Cu;
label_16503c:
    // 0x16503c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x165040: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x165040u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x165044: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x165044u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165048: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x165048u;
    {
        const bool branch_taken_0x165048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165048) {
            ctx->pc = 0x16504Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165048u;
            // 0x16504c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165010;
        }
    }
    ctx->pc = 0x165050u;
label_165050:
    // 0x165050: 0xc04f478  jal         func_13D1E0
    ctx->pc = 0x165050u;
    SET_GPR_U32(ctx, 31, 0x165058u);
    ctx->pc = 0x165054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165050u;
    // 0x165054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D1E0u, 0x165050u, 0x165058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165058u;
label_165058:
    // 0x165058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16505c:
    // 0x16505c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16505cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165060: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x165060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165064: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x165064u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165068: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x165068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16506c: 0x3e00008  jr          $ra
    ctx->pc = 0x16506Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16506Cu;
        // 0x165070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16506Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165074u;
    // 0x165074: 0x0  nop
    ctx->pc = 0x165074u;
    // NOP
    ctx->pc = 0x165078u;
}
