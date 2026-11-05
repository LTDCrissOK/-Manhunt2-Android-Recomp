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

// Function: sub_00128CE0
// Address: 0x128ce0 - 0x129048
void sub_00128CE0_0x128ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128CE0_0x128ce0");
#endif

    switch (ctx->pc) {
        case 0x128d44u: goto label_128d44;
        case 0x128d50u: goto label_128d50;
        case 0x128d60u: goto label_128d60;
        case 0x128d78u: goto label_128d78;
        case 0x128d88u: goto label_128d88;
        case 0x128d90u: goto label_128d90;
        case 0x128d98u: goto label_128d98;
        case 0x128da8u: goto label_128da8;
        case 0x128dccu: goto label_128dcc;
        case 0x128ddcu: goto label_128ddc;
        case 0x128decu: goto label_128dec;
        case 0x128dfcu: goto label_128dfc;
        case 0x128e10u: goto label_128e10;
        case 0x128e20u: goto label_128e20;
        case 0x128e30u: goto label_128e30;
        case 0x128e5cu: goto label_128e5c;
        case 0x128e6cu: goto label_128e6c;
        case 0x128e80u: goto label_128e80;
        case 0x128e8cu: goto label_128e8c;
        case 0x128ea8u: goto label_128ea8;
        case 0x128ebcu: goto label_128ebc;
        case 0x128eccu: goto label_128ecc;
        case 0x128ee0u: goto label_128ee0;
        case 0x128ef4u: goto label_128ef4;
        case 0x128f04u: goto label_128f04;
        case 0x128f14u: goto label_128f14;
        case 0x128f28u: goto label_128f28;
        case 0x128f38u: goto label_128f38;
        case 0x128f48u: goto label_128f48;
        case 0x128f5cu: goto label_128f5c;
        case 0x128f6cu: goto label_128f6c;
        case 0x128f78u: goto label_128f78;
        case 0x128f84u: goto label_128f84;
        case 0x128f9cu: goto label_128f9c;
        case 0x128fa8u: goto label_128fa8;
        case 0x128fb4u: goto label_128fb4;
        case 0x128fc8u: goto label_128fc8;
        case 0x128fe0u: goto label_128fe0;
        case 0x128fecu: goto label_128fec;
        case 0x128ff8u: goto label_128ff8;
        case 0x129004u: goto label_129004;
        default: break;
    }

    ctx->pc = 0x128ce0u;

    // 0x128ce0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x128ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x128ce4: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x128ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x128ce8: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x128ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x128cec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x128cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cf0: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x128cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x128cf4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x128cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x128cf8: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x128cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x128cfc: 0x2484edf0  addiu       $a0, $a0, -0x1210
    ctx->pc = 0x128cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    // 0x128d00: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x128d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x128d04: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x128d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128d08: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x128d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x128d0c: 0x3c110044  lui         $s1, 0x44
    ctx->pc = 0x128d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
    // 0x128d10: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x128d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x128d14: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x128d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x128d18: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x128d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x128d1c: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x128d1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x128d20: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x128d20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x128d24: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x128d24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x128d28: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x128d28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x128d2c: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x128d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x128d30: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x128d30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x128d34: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x128d34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
    // 0x128d38: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x128d38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x128d3c: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x128D3Cu;
    SET_GPR_U32(ctx, 31, 0x128D44u);
    ctx->pc = 0x128D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D3Cu;
    // 0x128d40: 0xae400074  sw          $zero, 0x74($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x128D3Cu, 0x128D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D44u;
label_128d44:
    // 0x128d44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d48: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x128D48u;
    SET_GPR_U32(ctx, 31, 0x128D50u);
    ctx->pc = 0x128D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D48u;
    // 0x128d4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x128D48u, 0x128D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D50u;
label_128d50:
    // 0x128d50: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x128d50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x128d54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d58: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x128D58u;
    SET_GPR_U32(ctx, 31, 0x128D60u);
    ctx->pc = 0x128D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D58u;
    // 0x128d5c: 0x24a5ee40  addiu       $a1, $a1, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x128D58u, 0x128D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D60u;
label_128d60:
    // 0x128d60: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x128d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x128d64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x128d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d68: 0x2453fe40  addiu       $s3, $v0, -0x1C0
    ctx->pc = 0x128d68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x128d6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d70: 0xc09dd98  jal         func_277660
    ctx->pc = 0x128D70u;
    SET_GPR_U32(ctx, 31, 0x128D78u);
    ctx->pc = 0x128D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D70u;
    // 0x128d74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x128D70u, 0x128D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D78u;
label_128d78:
    // 0x128d78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x128d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x128d7c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x128d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x128d80: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x128D80u;
    SET_GPR_U32(ctx, 31, 0x128D88u);
    ctx->pc = 0x128D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D80u;
    // 0x128d84: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x128D80u, 0x128D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D88u;
label_128d88:
    // 0x128d88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d8c: 0x0  nop
    ctx->pc = 0x128d8cu;
    // NOP
label_128d90:
    // 0x128d90: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x128D90u;
    SET_GPR_U32(ctx, 31, 0x128D98u);
    ctx->pc = 0x128D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D90u;
    // 0x128d94: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x128D90u, 0x128D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128D98u;
label_128d98:
    // 0x128d98: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x128D98u;
    {
        const bool branch_taken_0x128d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D98u;
        // 0x128d9c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d98) {
            ctx->pc = 0x128F94u;
            goto label_128f94;
        }
    }
    ctx->pc = 0x128DA0u;
    // 0x128da0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x128DA0u;
    SET_GPR_U32(ctx, 31, 0x128DA8u);
    ctx->pc = 0x128DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DA0u;
    // 0x128da4: 0x2625ce38  addiu       $a1, $s1, -0x31C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x128DA0u, 0x128DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DA8u;
label_128da8:
    // 0x128da8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x128da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x128dac: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x128dacu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x128db0: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x128DB0u;
    {
        const bool branch_taken_0x128db0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x128db0) {
            ctx->pc = 0x128DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128DB0u;
            // 0x128db4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128d90;
        }
    }
    ctx->pc = 0x128DB8u;
    // 0x128db8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x128db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x128dbc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x128dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x128dc0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x128dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x128dc4: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x128DC4u;
    SET_GPR_U32(ctx, 31, 0x128DCCu);
    ctx->pc = 0x128DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DC4u;
    // 0x128dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x128DC4u, 0x128DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DCCu;
label_128dcc:
    // 0x128dcc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x128dccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128dd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128dd4: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x128DD4u;
    SET_GPR_U32(ctx, 31, 0x128DDCu);
    ctx->pc = 0x128DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DD4u;
    // 0x128dd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x128DD4u, 0x128DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DDCu;
label_128ddc:
    // 0x128ddc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x128ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128de0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x128de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x128de4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x128DE4u;
    SET_GPR_U32(ctx, 31, 0x128DECu);
    ctx->pc = 0x128DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DE4u;
    // 0x128de8: 0x24a5ce50  addiu       $a1, $a1, -0x31B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x128DE4u, 0x128DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DECu;
label_128dec:
    // 0x128dec: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x128decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x128df0: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x128df0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x128df4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x128DF4u;
    SET_GPR_U32(ctx, 31, 0x128DFCu);
    ctx->pc = 0x128DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DF4u;
    // 0x128df8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x128DF4u, 0x128DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128DFCu;
label_128dfc:
    // 0x128dfc: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x128dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128e00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e08: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x128E08u;
    SET_GPR_U32(ctx, 31, 0x128E10u);
    ctx->pc = 0x128E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E08u;
    // 0x128e0c: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x128E08u, 0x128E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E10u;
label_128e10:
    // 0x128e10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x128e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128e14: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x128e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x128e18: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x128E18u;
    SET_GPR_U32(ctx, 31, 0x128E20u);
    ctx->pc = 0x128E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E18u;
    // 0x128e1c: 0x24a5ce60  addiu       $a1, $a1, -0x31A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x128E18u, 0x128E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E20u;
label_128e20:
    // 0x128e20: 0xe7b40144  swc1        $f20, 0x144($sp)
    ctx->pc = 0x128e20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x128e24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e28: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x128E28u;
    SET_GPR_U32(ctx, 31, 0x128E30u);
    ctx->pc = 0x128E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E28u;
    // 0x128e2c: 0x27a50144  addiu       $a1, $sp, 0x144 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x128E28u, 0x128E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E30u;
label_128e30:
    // 0x128e30: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x128e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128e34: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x128e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x128e38: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x128e38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x128e3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128e40: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x128e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e48: 0x3c110044  lui         $s1, 0x44
    ctx->pc = 0x128e48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
    // 0x128e4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x128e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x128e50: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x128e50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e54: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x128E54u;
    SET_GPR_U32(ctx, 31, 0x128E5Cu);
    ctx->pc = 0x128E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E54u;
    // 0x128e58: 0xe6400060  swc1        $f0, 0x60($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x128E54u, 0x128E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E5Cu;
label_128e5c:
    // 0x128e5c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x128e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128e60: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x128e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x128e64: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x128E64u;
    SET_GPR_U32(ctx, 31, 0x128E6Cu);
    ctx->pc = 0x128E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E64u;
    // 0x128e68: 0x24a5ce70  addiu       $a1, $a1, -0x3190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x128E64u, 0x128E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E6Cu;
label_128e6c:
    // 0x128e6c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x128e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x128e70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e78: 0xc09e062  jal         func_278188
    ctx->pc = 0x128E78u;
    SET_GPR_U32(ctx, 31, 0x128E80u);
    ctx->pc = 0x128E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E78u;
    // 0x128e7c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x128E78u, 0x128E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E80u;
label_128e80:
    // 0x128e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e84: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x128E84u;
    SET_GPR_U32(ctx, 31, 0x128E8Cu);
    ctx->pc = 0x128E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E84u;
    // 0x128e88: 0x2625ce80  addiu       $a1, $s1, -0x3180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x128E84u, 0x128E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128E8Cu;
label_128e8c:
    // 0x128e8c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x128E8Cu;
    {
        const bool branch_taken_0x128e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128e8c) {
            ctx->pc = 0x128E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128E8Cu;
            // 0x128e90: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128E9Cu;
            goto label_128e9c;
        }
    }
    ctx->pc = 0x128E94u;
    // 0x128e94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128E94u;
    {
        const bool branch_taken_0x128e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E94u;
        // 0x128e98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e94) {
            ctx->pc = 0x128EACu;
            goto label_128eac;
        }
    }
    ctx->pc = 0x128E9Cu;
label_128e9c:
    // 0x128e9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ea0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x128EA0u;
    SET_GPR_U32(ctx, 31, 0x128EA8u);
    ctx->pc = 0x128EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128EA0u;
    // 0x128ea4: 0x24a5ce88  addiu       $a1, $a1, -0x3178 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x128EA0u, 0x128EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128EA8u;
label_128ea8:
    // 0x128ea8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x128ea8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128eac:
    // 0x128eac: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x128eacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x128eb0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x128eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128eb4: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x128EB4u;
    SET_GPR_U32(ctx, 31, 0x128EBCu);
    ctx->pc = 0x128EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128EB4u;
    // 0x128eb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x128EB4u, 0x128EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128EBCu;
label_128ebc:
    // 0x128ebc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x128ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128ec0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x128ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x128ec4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x128EC4u;
    SET_GPR_U32(ctx, 31, 0x128ECCu);
    ctx->pc = 0x128EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128EC4u;
    // 0x128ec8: 0x24a5ce90  addiu       $a1, $a1, -0x3170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x128EC4u, 0x128ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128ECCu;
label_128ecc:
    // 0x128ecc: 0x27b00148  addiu       $s0, $sp, 0x148
    ctx->pc = 0x128eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x128ed0: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x128ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
    // 0x128ed4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ed8: 0xc09e056  jal         func_278158
    ctx->pc = 0x128ED8u;
    SET_GPR_U32(ctx, 31, 0x128EE0u);
    ctx->pc = 0x128EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128ED8u;
    // 0x128edc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x128ED8u, 0x128EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128EE0u;
label_128ee0:
    // 0x128ee0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x128ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x128ee4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x128ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ee8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128eec: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x128EECu;
    SET_GPR_U32(ctx, 31, 0x128EF4u);
    ctx->pc = 0x128EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128EECu;
    // 0x128ef0: 0xae420068  sw          $v0, 0x68($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x128EECu, 0x128EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128EF4u;
label_128ef4:
    // 0x128ef4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x128ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128ef8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x128ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x128efc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x128EFCu;
    SET_GPR_U32(ctx, 31, 0x128F04u);
    ctx->pc = 0x128F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128EFCu;
    // 0x128f00: 0x24a5cea0  addiu       $a1, $a1, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x128EFCu, 0x128F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F04u;
label_128f04:
    // 0x128f04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f08: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x128f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
    // 0x128f0c: 0xc09e056  jal         func_278158
    ctx->pc = 0x128F0Cu;
    SET_GPR_U32(ctx, 31, 0x128F14u);
    ctx->pc = 0x128F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F0Cu;
    // 0x128f10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x128F0Cu, 0x128F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F14u;
label_128f14:
    // 0x128f14: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x128f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x128f18: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x128f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f20: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x128F20u;
    SET_GPR_U32(ctx, 31, 0x128F28u);
    ctx->pc = 0x128F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F20u;
    // 0x128f24: 0xae42006c  sw          $v0, 0x6C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x128F20u, 0x128F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F28u;
label_128f28:
    // 0x128f28: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x128f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128f2c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x128f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x128f30: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x128F30u;
    SET_GPR_U32(ctx, 31, 0x128F38u);
    ctx->pc = 0x128F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F30u;
    // 0x128f34: 0x24a5ceb0  addiu       $a1, $a1, -0x3150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x128F30u, 0x128F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F38u;
label_128f38:
    // 0x128f38: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x128f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x128f3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f40: 0xc09e056  jal         func_278158
    ctx->pc = 0x128F40u;
    SET_GPR_U32(ctx, 31, 0x128F48u);
    ctx->pc = 0x128F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F40u;
    // 0x128f44: 0x27a5014c  addiu       $a1, $sp, 0x14C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x128F40u, 0x128F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F48u;
label_128f48:
    // 0x128f48: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x128f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x128f4c: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x128f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x128f50: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x128f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f54: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x128F54u;
    SET_GPR_U32(ctx, 31, 0x128F5Cu);
    ctx->pc = 0x128F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F54u;
    // 0x128f58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x128F54u, 0x128F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F5Cu;
label_128f5c:
    // 0x128f5c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x128f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128f60: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x128f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x128f64: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x128F64u;
    SET_GPR_U32(ctx, 31, 0x128F6Cu);
    ctx->pc = 0x128F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F64u;
    // 0x128f68: 0x24a5cec8  addiu       $a1, $a1, -0x3138 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x128F64u, 0x128F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F6Cu;
label_128f6c:
    // 0x128f6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f70: 0xc09e062  jal         func_278188
    ctx->pc = 0x128F70u;
    SET_GPR_U32(ctx, 31, 0x128F78u);
    ctx->pc = 0x128F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F70u;
    // 0x128f74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x128F70u, 0x128F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F78u;
label_128f78:
    // 0x128f78: 0x26e5ce80  addiu       $a1, $s7, -0x3180
    ctx->pc = 0x128f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294954624));
    // 0x128f7c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x128F7Cu;
    SET_GPR_U32(ctx, 31, 0x128F84u);
    ctx->pc = 0x128F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F7Cu;
    // 0x128f80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x128F7Cu, 0x128F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F84u;
label_128f84:
    // 0x128f84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x128F84u;
    {
        const bool branch_taken_0x128f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F84u;
        // 0x128f88: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f84) {
            ctx->pc = 0x128FBCu;
            goto label_128fbc;
        }
    }
    ctx->pc = 0x128F8Cu;
    // 0x128f8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x128F8Cu;
    {
        const bool branch_taken_0x128f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F8Cu;
        // 0x128f90: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f8c) {
            ctx->pc = 0x128FCCu;
            goto label_128fcc;
        }
    }
    ctx->pc = 0x128F94u;
label_128f94:
    // 0x128f94: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x128F94u;
    SET_GPR_U32(ctx, 31, 0x128F9Cu);
    ctx->pc = 0x128F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F94u;
    // 0x128f98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x128F94u, 0x128F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128F9Cu;
label_128f9c:
    // 0x128f9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x128f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fa0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x128FA0u;
    SET_GPR_U32(ctx, 31, 0x128FA8u);
    ctx->pc = 0x128FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128FA0u;
    // 0x128fa4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x128FA0u, 0x128FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128FA8u;
label_128fa8:
    // 0x128fa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fac: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x128FACu;
    SET_GPR_U32(ctx, 31, 0x128FB4u);
    ctx->pc = 0x128FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128FACu;
    // 0x128fb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x128FACu, 0x128FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128FB4u;
label_128fb4:
    // 0x128fb4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x128FB4u;
    {
        const bool branch_taken_0x128fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128FB4u;
        // 0x128fb8: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fb4) {
            ctx->pc = 0x129008u;
            goto label_129008;
        }
    }
    ctx->pc = 0x128FBCu;
label_128fbc:
    // 0x128fbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fc0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x128FC0u;
    SET_GPR_U32(ctx, 31, 0x128FC8u);
    ctx->pc = 0x128FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128FC0u;
    // 0x128fc4: 0x24a5ce88  addiu       $a1, $a1, -0x3178 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x128FC0u, 0x128FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128FC8u;
label_128fc8:
    // 0x128fc8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x128fc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128fcc:
    // 0x128fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128fd0: 0xae430074  sw          $v1, 0x74($s2)
    ctx->pc = 0x128fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    // 0x128fd4: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x128fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x128fd8: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x128FD8u;
    SET_GPR_U32(ctx, 31, 0x128FE0u);
    ctx->pc = 0x128FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128FD8u;
    // 0x128fdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x128FD8u, 0x128FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128FE0u;
label_128fe0:
    // 0x128fe0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x128fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fe4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x128FE4u;
    SET_GPR_U32(ctx, 31, 0x128FECu);
    ctx->pc = 0x128FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128FE4u;
    // 0x128fe8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x128FE4u, 0x128FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128FECu;
label_128fec:
    // 0x128fec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x128fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ff0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x128FF0u;
    SET_GPR_U32(ctx, 31, 0x128FF8u);
    ctx->pc = 0x128FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128FF0u;
    // 0x128ff4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x128FF0u, 0x128FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128FF8u;
label_128ff8:
    // 0x128ff8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ffc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x128FFCu;
    SET_GPR_U32(ctx, 31, 0x129004u);
    ctx->pc = 0x129000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128FFCu;
    // 0x129000: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x128FFCu, 0x129004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129004u;
label_129004:
    // 0x129004: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x129004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_129008:
    // 0x129008: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x129008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x12900c: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x12900cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x129010: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x129010u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x129014: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x129014u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x129018: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x129018u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x12901c: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x12901cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x129020: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x129020u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x129024: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x129024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x129028: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x129028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12902c: 0x3e00008  jr          $ra
    ctx->pc = 0x12902Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12902Cu;
        // 0x129030: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12902Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129034u;
    // 0x129034: 0x0  nop
    ctx->pc = 0x129034u;
    // NOP
    // 0x129038: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x129038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12903c: 0x0  nop
    ctx->pc = 0x12903cu;
    // NOP
    // 0x129040: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x129040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x129044: 0x0  nop
    ctx->pc = 0x129044u;
    // NOP
    ctx->pc = 0x129048u;
}
