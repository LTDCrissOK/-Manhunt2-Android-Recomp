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

// Function: sub_0010DAB8
// Address: 0x10dab8 - 0x10dbd8
void sub_0010DAB8_0x10dab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DAB8_0x10dab8");
#endif

    switch (ctx->pc) {
        case 0x10db38u: goto label_10db38;
        case 0x10dbc0u: goto label_10dbc0;
        default: break;
    }

    ctx->pc = 0x10dab8u;

    // 0x10dab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10dab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10dabc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10dabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10dac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10dac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dac4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10dac8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10dacc: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x10daccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x10dad0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10dad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10dad4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10dad8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x10dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x10dadc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x10dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x10dae0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x10dae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x10dae4: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x10dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x10dae8: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x10dae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x10daec: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x10daecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x10daf0: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x10daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x10daf4: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x10daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x10daf8: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x10daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x10dafc: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x10dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x10db00: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x10db00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x10db04: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x10db04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x10db08: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x10db08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x10db0c: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x10db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x10db10: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x10db10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x10db14: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x10db14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x10db18: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x10db18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x10db1c: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x10db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x10db20: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x10db20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x10db24: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x10db24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x10db28: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x10db28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x10db2c: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x10db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x10db30: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x10DB30u;
    SET_GPR_U32(ctx, 31, 0x10DB38u);
    ctx->pc = 0x10DB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB30u;
    // 0x10db34: 0xae000128  sw          $zero, 0x128($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x10DB30u, 0x10DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DB38u;
label_10db38:
    // 0x10db38: 0xae0001c4  sw          $zero, 0x1C4($s0)
    ctx->pc = 0x10db38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
    // 0x10db3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10db3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db40: 0xae0001cc  sw          $zero, 0x1CC($s0)
    ctx->pc = 0x10db40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 0));
    // 0x10db44: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x10db44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
    // 0x10db48: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x10db48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x10db4c: 0xae0001dc  sw          $zero, 0x1DC($s0)
    ctx->pc = 0x10db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
    // 0x10db50: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x10db50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x10db54: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x10db54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x10db58: 0xae0001ec  sw          $zero, 0x1EC($s0)
    ctx->pc = 0x10db58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 0));
    // 0x10db5c: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x10db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
    // 0x10db60: 0xae0001fc  sw          $zero, 0x1FC($s0)
    ctx->pc = 0x10db60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 0));
    // 0x10db64: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x10db64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
    // 0x10db68: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x10db68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x10db6c: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x10db6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
    // 0x10db70: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x10db70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
    // 0x10db74: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x10db74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x10db78: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x10db78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x10db7c: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x10db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x10db80: 0xae00023c  sw          $zero, 0x23C($s0)
    ctx->pc = 0x10db80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 0));
    // 0x10db84: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x10db84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x10db88: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x10db88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x10db8c: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x10db8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x10db90: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x10db90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x10db94: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x10db94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x10db98: 0xae000254  sw          $zero, 0x254($s0)
    ctx->pc = 0x10db98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 0));
    // 0x10db9c: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x10db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x10dba0: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x10dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x10dba4: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x10dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x10dba8: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x10dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x10dbac: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x10dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x10dbb0: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x10dbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x10dbb4: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x10dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x10dbb8: 0xc04454a  jal         func_111528
    ctx->pc = 0x10DBB8u;
    SET_GPR_U32(ctx, 31, 0x10DBC0u);
    ctx->pc = 0x10DBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DBB8u;
    // 0x10dbbc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111528u, 0x10DBB8u, 0x10DBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DBC0u;
label_10dbc0:
    // 0x10dbc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10dbc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10dbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10dbc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10dbc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x10DBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBCCu;
        // 0x10dbd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DBD4u;
    // 0x10dbd4: 0x0  nop
    ctx->pc = 0x10dbd4u;
    // NOP
    ctx->pc = 0x10dbd8u;
}
