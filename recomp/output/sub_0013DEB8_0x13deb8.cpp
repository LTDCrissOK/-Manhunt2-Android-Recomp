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

// Function: sub_0013DEB8
// Address: 0x13deb8 - 0x13df80
void sub_0013DEB8_0x13deb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DEB8_0x13deb8");
#endif

    switch (ctx->pc) {
        case 0x13deb8u: goto label_13deb8;
        case 0x13debcu: goto label_13debc;
        case 0x13dec0u: goto label_13dec0;
        case 0x13dec4u: goto label_13dec4;
        case 0x13dec8u: goto label_13dec8;
        case 0x13deccu: goto label_13decc;
        case 0x13ded0u: goto label_13ded0;
        case 0x13ded4u: goto label_13ded4;
        case 0x13ded8u: goto label_13ded8;
        case 0x13dedcu: goto label_13dedc;
        case 0x13dee0u: goto label_13dee0;
        case 0x13dee4u: goto label_13dee4;
        case 0x13dee8u: goto label_13dee8;
        case 0x13deecu: goto label_13deec;
        case 0x13def0u: goto label_13def0;
        case 0x13def4u: goto label_13def4;
        case 0x13def8u: goto label_13def8;
        case 0x13defcu: goto label_13defc;
        case 0x13df00u: goto label_13df00;
        case 0x13df04u: goto label_13df04;
        case 0x13df08u: goto label_13df08;
        case 0x13df0cu: goto label_13df0c;
        case 0x13df10u: goto label_13df10;
        case 0x13df14u: goto label_13df14;
        case 0x13df18u: goto label_13df18;
        case 0x13df1cu: goto label_13df1c;
        case 0x13df20u: goto label_13df20;
        case 0x13df24u: goto label_13df24;
        case 0x13df28u: goto label_13df28;
        case 0x13df2cu: goto label_13df2c;
        case 0x13df30u: goto label_13df30;
        case 0x13df34u: goto label_13df34;
        case 0x13df38u: goto label_13df38;
        case 0x13df3cu: goto label_13df3c;
        case 0x13df40u: goto label_13df40;
        case 0x13df44u: goto label_13df44;
        case 0x13df48u: goto label_13df48;
        case 0x13df4cu: goto label_13df4c;
        case 0x13df50u: goto label_13df50;
        case 0x13df54u: goto label_13df54;
        case 0x13df58u: goto label_13df58;
        case 0x13df5cu: goto label_13df5c;
        case 0x13df60u: goto label_13df60;
        case 0x13df64u: goto label_13df64;
        case 0x13df68u: goto label_13df68;
        case 0x13df6cu: goto label_13df6c;
        case 0x13df70u: goto label_13df70;
        case 0x13df74u: goto label_13df74;
        case 0x13df78u: goto label_13df78;
        case 0x13df7cu: goto label_13df7c;
        default: break;
    }

    ctx->pc = 0x13deb8u;

label_13deb8:
    // 0x13deb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13deb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13debc:
    // 0x13debc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13debcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13dec0:
    // 0x13dec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13dec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13dec4:
    // 0x13dec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13dec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13dec8:
    // 0x13dec8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13dec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13decc:
    // 0x13decc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13deccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_13ded0:
    // 0x13ded0: 0xc04f76e  jal         func_13DDB8
label_13ded4:
    if (ctx->pc == 0x13DED4u) {
        ctx->pc = 0x13DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DED0u;
        // 0x13ded4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DED8u;
        goto label_13ded8;
    }
    ctx->pc = 0x13DED0u;
    SET_GPR_U32(ctx, 31, 0x13DED8u);
    ctx->pc = 0x13DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DED0u;
    // 0x13ded4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DDB8u, 0x13DED0u, 0x13DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DED8u;
label_13ded8:
    // 0x13ded8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13ded8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dedc:
    // 0x13dedc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13dee0:
    // 0x13dee0: 0xc04f74a  jal         func_13DD28
label_13dee4:
    if (ctx->pc == 0x13DEE4u) {
        ctx->pc = 0x13DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEE0u;
        // 0x13dee4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DEE8u;
        goto label_13dee8;
    }
    ctx->pc = 0x13DEE0u;
    SET_GPR_U32(ctx, 31, 0x13DEE8u);
    ctx->pc = 0x13DEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DEE0u;
    // 0x13dee4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD28u, 0x13DEE0u, 0x13DEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DEE8u;
label_13dee8:
    // 0x13dee8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x13dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13deec:
    // 0x13deec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13deecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13def0:
    // 0x13def0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x13def0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_13def4:
    // 0x13def4: 0x40f809  jalr        $v0
label_13def8:
    if (ctx->pc == 0x13DEF8u) {
        ctx->pc = 0x13DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEF4u;
        // 0x13def8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DEFCu;
        goto label_13defc;
    }
    ctx->pc = 0x13DEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13DEFCu);
        ctx->pc = 0x13DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEF4u;
        // 0x13def8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DEF4u, 0x13DEFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DEFCu;
label_13defc:
    // 0x13defc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13defcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13df00:
    // 0x13df00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13df00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13df04:
    // 0x13df04: 0xc04f744  jal         func_13DD10
label_13df08:
    if (ctx->pc == 0x13DF08u) {
        ctx->pc = 0x13DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF04u;
        // 0x13df08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DF0Cu;
        goto label_13df0c;
    }
    ctx->pc = 0x13DF04u;
    SET_GPR_U32(ctx, 31, 0x13DF0Cu);
    ctx->pc = 0x13DF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF04u;
    // 0x13df08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD10u, 0x13DF04u, 0x13DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DF0Cu;
label_13df0c:
    // 0x13df0c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x13df0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_13df10:
    // 0x13df10: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x13df10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_13df14:
    // 0x13df14: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x13df14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_13df18:
    // 0x13df18: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x13df18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
label_13df1c:
    // 0x13df1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13df20:
    // 0x13df20: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x13df20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_13df24:
    // 0x13df24: 0xa2220009  sb          $v0, 0x9($s1)
    ctx->pc = 0x13df24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 2));
label_13df28:
    // 0x13df28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13df28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_13df2c:
    // 0x13df2c: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x13df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
label_13df30:
    // 0x13df30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13df34:
    if (ctx->pc == 0x13DF34u) {
        ctx->pc = 0x13DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF30u;
        // 0x13df34: 0x8c65020c  lw          $a1, 0x20C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DF38u;
        goto label_13df38;
    }
    ctx->pc = 0x13DF30u;
    {
        const bool branch_taken_0x13df30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF30u;
        // 0x13df34: 0x8c65020c  lw          $a1, 0x20C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df30) {
            ctx->pc = 0x13DF40u;
            goto label_13df40;
        }
    }
    ctx->pc = 0x13DF38u;
label_13df38:
    // 0x13df38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13df38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13df3c:
    // 0x13df3c: 0xaca2020c  sw          $v0, 0x20C($a1)
    ctx->pc = 0x13df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 2));
label_13df40:
    // 0x13df40: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x13df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_13df44:
    // 0x13df44: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x13df44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_13df48:
    // 0x13df48: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_13df4c:
    if (ctx->pc == 0x13DF4Cu) {
        ctx->pc = 0x13DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF48u;
        // 0x13df4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DF50u;
        goto label_13df50;
    }
    ctx->pc = 0x13DF48u;
    {
        const bool branch_taken_0x13df48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF48u;
        // 0x13df4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df48) {
            ctx->pc = 0x13DF54u;
            goto label_13df54;
        }
    }
    ctx->pc = 0x13DF50u;
label_13df50:
    // 0x13df50: 0xaca20214  sw          $v0, 0x214($a1)
    ctx->pc = 0x13df50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 532), GPR_U32(ctx, 2));
label_13df54:
    // 0x13df54: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x13df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13df58:
    // 0x13df58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13df58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13df5c:
    // 0x13df5c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_13df60:
    // 0x13df60: 0x40f809  jalr        $v0
label_13df64:
    if (ctx->pc == 0x13DF64u) {
        ctx->pc = 0x13DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF60u;
        // 0x13df64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DF68u;
        goto label_13df68;
    }
    ctx->pc = 0x13DF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13DF68u);
        ctx->pc = 0x13DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF60u;
        // 0x13df64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DF60u, 0x13DF68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DF68u;
label_13df68:
    // 0x13df68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13df68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13df6c:
    // 0x13df6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13df6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13df70:
    // 0x13df70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13df70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13df74:
    // 0x13df74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13df74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13df78:
    // 0x13df78: 0x3e00008  jr          $ra
label_13df7c:
    if (ctx->pc == 0x13DF7Cu) {
        ctx->pc = 0x13DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF78u;
        // 0x13df7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DF80u;
        goto label_fallthrough_0x13df78;
    }
    ctx->pc = 0x13DF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF78u;
        // 0x13df7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13df78:
    ctx->pc = 0x13DF80u;
}
