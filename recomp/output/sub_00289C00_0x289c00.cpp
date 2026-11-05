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

// Function: sub_00289C00
// Address: 0x289c00 - 0x289d90
void sub_00289C00_0x289c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289C00_0x289c00");
#endif

    switch (ctx->pc) {
        case 0x289c30u: goto label_289c30;
        case 0x289c44u: goto label_289c44;
        case 0x289c70u: goto label_289c70;
        case 0x289ca0u: goto label_289ca0;
        case 0x289cb8u: goto label_289cb8;
        case 0x289cccu: goto label_289ccc;
        case 0x289ce0u: goto label_289ce0;
        case 0x289d00u: goto label_289d00;
        case 0x289d14u: goto label_289d14;
        case 0x289d24u: goto label_289d24;
        case 0x289d34u: goto label_289d34;
        case 0x289d64u: goto label_289d64;
        default: break;
    }

    ctx->pc = 0x289c00u;

    // 0x289c00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x289c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x289c04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x289c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c08: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x289c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x289c0c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x289c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x289c10: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x289c10u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x289c14: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x289c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x289c18: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x289c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x289c1c: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x289c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x289c20: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x289c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x289c24: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x289c24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x289c28: 0xc0a03bc  jal         func_280EF0
    ctx->pc = 0x289C28u;
    SET_GPR_U32(ctx, 31, 0x289C30u);
    ctx->pc = 0x289C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C28u;
    // 0x289c2c: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x280EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280EF0u, 0x289C28u, 0x289C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C30u;
label_289c30:
    // 0x289c30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x289c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x289c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c3c: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x289C3Cu;
    SET_GPR_U32(ctx, 31, 0x289C44u);
    ctx->pc = 0x289C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C3Cu;
    // 0x289c40: 0x240700c0  addiu       $a3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x289C3Cu, 0x289C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C44u;
label_289c44:
    // 0x289c44: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x289c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x289c48: 0x8c622b34  lw          $v0, 0x2B34($v1)
    ctx->pc = 0x289c48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B34u));
    // 0x289c4c: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x289c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x289c50: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x289C50u;
    {
        const bool branch_taken_0x289c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C50u;
        // 0x289c54: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c50) {
            ctx->pc = 0x289CD0u;
            goto label_289cd0;
        }
    }
    ctx->pc = 0x289C58u;
    // 0x289c58: 0x26924ec0  addiu       $s2, $s4, 0x4EC0
    ctx->pc = 0x289c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 20160));
    // 0x289c5c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289c60: 0x24a5ae80  addiu       $a1, $a1, -0x5180
    ctx->pc = 0x289c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946432));
    // 0x289c64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c68: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289C68u;
    SET_GPR_U32(ctx, 31, 0x289C70u);
    ctx->pc = 0x289C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C68u;
    // 0x289c6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289C68u, 0x289C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C70u;
label_289c70:
    // 0x289c70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x289c70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c74: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x289c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x289c78: 0x8c43a320  lw          $v1, -0x5CE0($v0)
    ctx->pc = 0x289c78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x66A320u));
    // 0x289c7c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x289C7Cu;
    {
        const bool branch_taken_0x289c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C7Cu;
        // 0x289c80: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c7c) {
            ctx->pc = 0x289CD0u;
            goto label_289cd0;
        }
    }
    ctx->pc = 0x289C84u;
    // 0x289c84: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x289c84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x289c88: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289c8c: 0x24a5ae68  addiu       $a1, $a1, -0x5198
    ctx->pc = 0x289c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946408));
    // 0x289c90: 0x2610a4f0  addiu       $s0, $s0, -0x5B10
    ctx->pc = 0x289c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943984));
    // 0x289c94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c98: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289C98u;
    SET_GPR_U32(ctx, 31, 0x289CA0u);
    ctx->pc = 0x289C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C98u;
    // 0x289c9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289C98u, 0x289CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CA0u;
label_289ca0:
    // 0x289ca0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289ca4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x289ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289cac: 0x24a5ae78  addiu       $a1, $a1, -0x5188
    ctx->pc = 0x289cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946424));
    // 0x289cb0: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289CB0u;
    SET_GPR_U32(ctx, 31, 0x289CB8u);
    ctx->pc = 0x289CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289CB0u;
    // 0x289cb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289CB0u, 0x289CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CB8u;
label_289cb8:
    // 0x289cb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x289cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289cbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289cc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x289cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289cc4: 0xc0a197a  jal         func_2865E8
    ctx->pc = 0x289CC4u;
    SET_GPR_U32(ctx, 31, 0x289CCCu);
    ctx->pc = 0x289CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289CC4u;
    // 0x289cc8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2865E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2865E8u, 0x289CC4u, 0x289CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CCCu;
label_289ccc:
    // 0x289ccc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x289cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_289cd0:
    // 0x289cd0: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x289cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x289cd4: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x289cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x289cd8: 0xc0a2260  jal         func_288980
    ctx->pc = 0x289CD8u;
    SET_GPR_U32(ctx, 31, 0x289CE0u);
    ctx->pc = 0x289CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289CD8u;
    // 0x289cdc: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288980u, 0x289CD8u, 0x289CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CE0u;
label_289ce0:
    // 0x289ce0: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x289ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x289ce4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x289ce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x289ce8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x289ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x289cec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289cf0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x289cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289cf4: 0x26844ec0  addiu       $a0, $s4, 0x4EC0
    ctx->pc = 0x289cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20160));
    // 0x289cf8: 0xc0aeb96  jal         func_2BAE58
    ctx->pc = 0x289CF8u;
    SET_GPR_U32(ctx, 31, 0x289D00u);
    ctx->pc = 0x289CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289CF8u;
    // 0x289cfc: 0x24a5ae88  addiu       $a1, $a1, -0x5178 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAE58u, 0x289CF8u, 0x289D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D00u;
label_289d00:
    // 0x289d00: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x289d00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x289d04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x289d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d08: 0x2610c970  addiu       $s0, $s0, -0x3690
    ctx->pc = 0x289d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953328));
    // 0x289d0c: 0xc0a0c74  jal         func_2831D0
    ctx->pc = 0x289D0Cu;
    SET_GPR_U32(ctx, 31, 0x289D14u);
    ctx->pc = 0x289D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D0Cu;
    // 0x289d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2831D0u, 0x289D0Cu, 0x289D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D14u;
label_289d14:
    // 0x289d14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x289d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d1c: 0xc0a2af0  jal         func_28ABC0
    ctx->pc = 0x289D1Cu;
    SET_GPR_U32(ctx, 31, 0x289D24u);
    ctx->pc = 0x289D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D1Cu;
    // 0x289d20: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x289D1Cu, 0x289D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D24u;
label_289d24:
    // 0x289d24: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x289d24u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x289d28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x289d28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x289d2c: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x289D2Cu;
    SET_GPR_U32(ctx, 31, 0x289D34u);
    ctx->pc = 0x289D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D2Cu;
    // 0x289d30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x289D2Cu, 0x289D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D34u;
label_289d34:
    // 0x289d34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x289d38: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x289d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x289d3c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x289d3cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x289d40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x289d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x289d44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x289d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289d48: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x289d48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x289d4c: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x289d4cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x289d50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d54: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x289d54u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x289d58: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x289d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x289d5c: 0xc0a2268  jal         func_2889A0
    ctx->pc = 0x289D5Cu;
    SET_GPR_U32(ctx, 31, 0x289D64u);
    ctx->pc = 0x289D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D5Cu;
    // 0x289d60: 0x46016b42  mul.s       $f13, $f13, $f1 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2889A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2889A0u, 0x289D5Cu, 0x289D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D64u;
label_289d64:
    // 0x289d64: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x289d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x289d68: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x289d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x289d6c: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x289d6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x289d70: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x289d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x289d74: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x289d74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x289d78: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x289d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x289d7c: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x289d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x289d80: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x289d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x289d84: 0x3e00008  jr          $ra
    ctx->pc = 0x289D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D84u;
        // 0x289d88: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289D8Cu;
    // 0x289d8c: 0x0  nop
    ctx->pc = 0x289d8cu;
    // NOP
    ctx->pc = 0x289d90u;
}
